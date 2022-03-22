#include <iostream>

using namespace std;

int adj[1010][1010];
bool visited[1010];

int N, M, cnt = 0;

void dfs(int here) {
    cnt++;
    visited[here] = true;
    
    for (int i = 1; i <= N; i++) {
        if (!visited[i] && adj[here][i] == 1) {
            dfs(i);
        }
    }
}

int main() {
    int x, y;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        adj[x][y] = adj[y][x] = 1;
    }

    dfs(1);

    cout << cnt - 1;

    return 0;
}
