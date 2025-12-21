#include <iostream>
using namespace std;


int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
void dps(int M, int N, char a[101][101], int st[2],int used[101][101],int value){
    if (a[st[0]][st[1]] == 'T'){
        cout << "YES";
        value = 0;
    }
    if (value == 0){
        return;
    }

    for (int i = 0; i<4; i++){
        st[0] += dx[i];
        st[1] += dy[i];
        if (st[0] >= 1 && st[1] >= 1 && a[st[0]][st[1]] != '#' && used[st[0]][st[1]] == 0 && st[0] <= M && st[1] <= N){
            used[st[0]][st[1]] = 1;
            dps(M, N, a, st, used, value);
            used[st[0]][st[1]] = 0;
        } else {
            st[0] -= dx[i];
            st[1] -= dy[i];
        }
    }
    return;
}

int main(){
    int N;
    int M;
    char a[101][101];
    int st[2];
    cin >> N >> M;

    for (int i = 1; i<=N; i++){
        for (int j = 1; j<=M; j++){
            cin >> a[i][j];
            if (a[i][j] == 'S'){
                st[0] = i;
                st[1] = j;
            }
        }
    }
    int used[101][101] = {0};
    int value = 1;
    dps(M, N, a, st, used, value);
}
