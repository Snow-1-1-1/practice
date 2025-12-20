#include <iostream>
using namespace std;
int main(){
    int N; int V;
    cin >> N >> V;
    int w[100];
    int v[100];
    for (int i = 0; i<N; i++){
        cin >> w[i] >> v[i];
    }
    int max_sum = 0;
    int dp[100][100] = {0};
    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=V; j++){
            if (j >= w[i]){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
            max_sum = max(max_sum, dp[i][j]);
        }
    }
    cout << max_sum;
    return 0;
}