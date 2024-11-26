#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

using namespace std;

struct Node 
{
    vector<int> path;  // 当前路径
    int cost;          // 当前路径的代价
    int bound;         // 当前节点的下界
    int level;         // 当前节点的深度（访问到第几个城市）

    // 构造函数
    Node(vector<int> p, int c, int b, int l)
        : path(move(p)), cost(c), bound(b), level(l) {}
};

// 优先队列比较函数（按下界升序）
struct Compare 
{
    bool operator()(const Node &a, const Node &b) 
	{
        return a.bound > b.bound;
    }
};

// 计算当前节点的下界
int calculateBound(const vector<vector<int>> &graph, const vector<int> &path, int n) 
{
    vector<bool> visited(n, false);
    int bound = 0;

    // 标记已访问的城市
    for (int city : path) 
	{
        visited[city] = true;
    }

    // 加入当前路径的成本
    for (int i = 0; i < path.size() - 1; i++) 
	{
        bound += graph[path[i]][path[i + 1]];
    }

    // 为未访问的城市添加估算代价
    for (int i = 0; i < n; i++) 
	{
        if (!visited[i]) {
            int minEdge = INT_MAX;
            for (int j = 0; j < n; j++) 
			{
                if (i != j && !visited[j]) 
				{
                    minEdge = min(minEdge, graph[i][j]);
                }
            }
            bound += (minEdge == INT_MAX ? 0 : minEdge);
        }
    }

    return bound;
}

// 分支限界法解决TSP问题
int tspBranchAndBound(const vector<vector<int>> &graph) 
{
    int n = graph.size();
    priority_queue<Node, vector<Node>, Compare> pq;
    int upperBound = INT_MAX;  // 当前最优路径的代价
    vector<int> bestPath;      // 保存最优路径

    // 初始化根节点
    vector<int> rootPath = {0};  // 从城市0出发
    int rootBound = calculateBound(graph, rootPath, n);
    pq.emplace(rootPath, 0, rootBound, 1);

    // 主循环
    while (!pq.empty()) 
	{
        Node current = pq.top();
        pq.pop();

        // 剪枝
        if (current.bound >= upperBound) continue;

        // 如果当前路径包含所有城市并回到起点
        if (current.level == n) 
		{
            int totalCost = current.cost + graph[current.path.back()][0];
            if (totalCost < upperBound) 
			{
                upperBound = totalCost;
                bestPath = current.path;
            }
            continue;
        }

        // 扩展节点：尝试访问每个未访问的城市
        for (int i = 0; i < n; i++) 
		{
            if (find(current.path.begin(), current.path.end(), i) == current.path.end()) 
			{
                vector<int> newPath = current.path;
                newPath.push_back(i);

                int newCost = current.cost + graph[current.path.back()][i];
                int newBound = newCost + calculateBound(graph, newPath, n);

                if (newBound < upperBound) 
				{
                    pq.emplace(newPath, newCost, newBound, current.level + 1);
                }
            }
        }
    }

    // 输出最优路径和代价
    cout << "Optimal Path: ";
    for (int city : bestPath) cout << city << " -> ";
    cout << "0" << endl;
    cout << "Minimum Cost: " << upperBound << endl;

    return upperBound;
}

// 主函数
int main() 
{
    // 示例城市距离矩阵
    vector<vector<int>> graph = 
	{
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    tspBranchAndBound(graph);
    return 0;
}
