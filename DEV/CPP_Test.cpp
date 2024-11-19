#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <numeric> // 用于 iota

using namespace std;

// 定义节点结构
struct Node 
{
    int level;       // 当前处理到的物品索引
    int profit;      // 当前总价值
    int weight;      // 当前总重量
    float bound;     // 价值的上界（用于剪枝）
};

// 计算价值上界函数
float calculateBound(Node u, int n, int W, const vector<int>& weight, const vector<int>& value) 
{
    if (u.weight >= W) return 0; // 超过背包容量，直接返回0

    float profit_bound = u.profit;
    int j = u.level + 1;
    int totweight = u.weight;

    // 贪心法计算价值上界
    while (j < n && totweight + weight[j] <= W) 
	{
        totweight += weight[j];
        profit_bound += value[j];
        j++;
    }

    if (j < n) // 如果还有剩余容量，装入部分物品
        profit_bound += (W - totweight) * ((float)value[j] / weight[j]);

    return profit_bound;
}

// 分支限界法求解 0/1 背包问题
int knapsack(int W, const vector<int>& weight, const vector<int>& value, int n) 
{
    // 按价值密度从大到小排序
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int i, int j) 
	{
        return (float)value[i] / weight[i] > (float)value[j] / weight[j];
    });

    vector<int> sortedWeight(n), sortedValue(n);
    for (int i = 0; i < n; i++) 
	{
        sortedWeight[i] = weight[index[i]];
        sortedValue[i] = value[index[i]];
    }

    // 创建优先队列
    auto cmp = [](Node& a, Node& b) 
	{ 
		return a.bound < b.bound; 
	};
    priority_queue<Node, vector<Node>, decltype(cmp)> Q(cmp);

    // 初始化根节点
    Node u, v;
    u.level = -1;
    u.profit = 0;
    u.weight = 0;
    u.bound = calculateBound(u, n, W, sortedWeight, sortedValue);
    Q.push(u);

    int maxProfit = 0;

    // 开始搜索
    while (!Q.empty()) 
	{
        u = Q.top();
        Q.pop();

        // 如果上界值小于当前最大值，剪枝
        if (u.bound > maxProfit) 
		{
            v.level = u.level + 1;

            // 左子节点：包含当前物品
            if (v.level < n) 
			{
                v.weight = u.weight + sortedWeight[v.level];
                v.profit = u.profit + sortedValue[v.level];
                if (v.weight <= W && v.profit > maxProfit)
                    maxProfit = v.profit;
                v.bound = calculateBound(v, n, W, sortedWeight, sortedValue);
                if (v.bound > maxProfit)
                    Q.push(v);

                // 右子节点：不包含当前物品
                v.weight = u.weight;
                v.profit = u.profit;
                v.bound = calculateBound(v, n, W, sortedWeight, sortedValue);
                if (v.bound > maxProfit)
                    Q.push(v);
            }
        }
    }

    return maxProfit;
}

int main() 
{
    int n, W;
    cout << "输入物品数量和背包容量: ";
    cin >> n >> W;

    vector<int> weight(n), value(n);
    cout << "输入每个物品的重量: ";
    for (int i = 0; i < n; i++) cin >> weight[i];
    cout << "输入每个物品的价值: ";
    for (int i = 0; i < n; i++) cin >> value[i];

    int result = knapsack(W, weight, value, n);
    cout << "最大价值: " << result << endl;

    return 0;
}
