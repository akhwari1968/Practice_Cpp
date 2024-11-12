#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxValue = 0;
int totalValue = 0;

void knapsack(int i, int currentWeight, int currentValue, int C, const vector<int>& weights, const vector<int>& values) // 回溯函数
{
    // 剪枝1：当前重量超过背包容量
    if (currentWeight > C) 
	{
        return;
    }

    // 更新最大价值
    if (currentValue > maxValue) 
	{
        maxValue = currentValue;
    }

    // 剪枝2：剩余物品的最大可能价值 + 当前价值不超过maxValue
    if (i == weights.size() || currentValue + (totalValue - currentValue) <= maxValue) 
	{
        return;
    }

    // 不选择第i个物品
    knapsack(i + 1, currentWeight, currentValue, C, weights, values);

    // 选择第i个物品
    knapsack(i + 1, currentWeight + weights[i], currentValue + values[i], C, weights, values);
}

int main() 
{
    int N, C;
    cout << "输入物品数量和背包容量: ";
    cin >> N >> C;

    vector<int> weights(N), values(N);
    cout << "输入物品的重量: ";
    for (int i = 0; i < N; i++) 
	{
        cin >> weights[i];
    }
    cout << "输入物品的价值: ";
    for (int i = 0; i < N; i++) 
	{
        cin >> values[i];
        totalValue += values[i]; // 计算总价值
    }

    // 调用回溯函数
    knapsack(0, 0, 0, C, weights, values);


    cout << "最大总价值为: " << maxValue << endl;

    return 0;
}
