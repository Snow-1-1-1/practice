/*
题目：01背包
题型：DP
状态：dp[j] = 容量为 j 的最大价值
转移：dp[j] = max(dp[j], dp[j-w[i]] + val[i])
遍历：j 从 V 到 w[i] 倒序（0/1 背包关键）
复杂度：O(NV)
*/











#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, V;
    cin >> N >> V;
    int w[105], val[105];
    for (int i = 1; i <= N; i++) cin >> w[i] >> val[i];
    int dp[105][10005] = {0};
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= V; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + val[i]);
            }
        }
    }
    cout << dp[N][V];
    return 0;
}
