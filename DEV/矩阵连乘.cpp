#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void print(const vector<vector<int>>& s, int i, int j) // 打印最优括号化顺序
{
    if (i == j) 
	{
        cout << "A" << i;
    } 
	else 
	{
        cout << "(";
        print(s, i, s[i][j]);
        print(s, s[i][j] + 1, j);
        cout << ")";
    }
}


int Multiplication(const vector<int>& dims, int n) // 矩阵链乘法的最小乘法次数
{
    // m[i][j] 存储矩阵 Ai 到 Aj 的最小乘法次数
    vector<vector<int>> m(n, vector<int>(n, 0));
    vector<vector<int>> s(n, vector<int>(n, 0));  

    
    for (int l = 2; l < n; l++) // 填充表格，l 是链的长度
	{  
        for (int i = 1; i < n - l + 1; i++) 
		{
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) 
			{
                int q = m[i][k] + m[k + 1][j] + dims[i - 1] * dims[k] * dims[j];
                if (q < m[i][j]) 
				{
                    m[i][j] = q;  // 更新最小代价
                    s[i][j] = k;  // 记录最优分割点
                }
            }
        }
    }
    
    cout << "最优为: "; // 打印最优
    print(s, 1, n - 1);
    cout << endl;

    return m[1][n - 1];
}

int main() 
{
    vector<int> dims = {30, 35, 15, 5, 10, 20, 25};  // 输入维度信息

    int n = dims.size();
	
	int count = Multiplication(dims, n);//次序输出
	cout << "次数为：" << count << endl;//次数输出

    return 0;
}
