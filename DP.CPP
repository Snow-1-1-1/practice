#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    int a[100];
    cin >> N;
    for (int i = 0; i<N; i++){
        cin >> a[i];
    }

    int dp[100];
    dp[0] = a[0];
    int max_sum = dp[0];
    for (int i = 0; i<N-1; i++){
        dp[i+1] = max(dp[i] + a[i+1], a[i+1]);
        max_sum = max(max_sum, dp[i+1]);
    }
    cout << max_sum;
    return 0;
}