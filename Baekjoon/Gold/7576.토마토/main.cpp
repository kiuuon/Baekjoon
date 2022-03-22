#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int>> q;

int adj[1010][1010];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = {1, -1, 0, 0};

int N, M, cnt;


void bfs() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= M || nx < 0 || ny >= N || ny < 0)
                continue;

            if (adj[nx][ny] == 0) {
                cnt = adj[x][y];
                adj[nx][ny] = cnt + 1;
                q.push({ nx, ny });
            }
        }
    }

}

int main() {
    int k = 0;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> adj[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (adj[i][j] == 1) {
                q.push({ i, j });
            }
        }
    }

    bfs();

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (adj[i][j] == 0) {
                k = 1;
            }
        }
    }
    if (k == 1) {
        cout << -1 << endl;
    }
    else {
        cout << cnt << endl;
    }

    return 0;
}
