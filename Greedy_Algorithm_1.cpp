#include <iostream>
using namespace std;
int main(){
    int money[6] = {100, 50, 20, 10, 5, 1};
    int n;
    cin >> n;
    int i = 0;
    int sum = 0;
    while (n > 0){
        int my = money[i];
        if (my > n){
            i++;
        } else {
            int x = n / my;
            n -= my * x;
            sum += x;
        }
    }
    cout << sum;
}