#include <iostream>
#include <queue>

using namespace std;

int adj1[1010][1010];
bool visited1[1010];

int adj2[1010][1010];
bool visited2[1010];

int N, M, V;

void dfs(int here) {
    cout << here << ' ';
    
    visited1[here] = true;
    
    for (int i = 1; i <= N; i++) {
        if (!visited1[i] && adj1[here][i] == 1) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited2[start] = true;

    while (!q.empty()) {
        int here = q.front();
        q.pop();
        cout << here << ' ';

        for (int i = 1; i <= N; i++) {
            if (!visited2[i] && adj2[here][i] == 1) {
                q.push(i);
                visited2[i] = true;
            }
        }
    }
}

int main() {
    int x, y;

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        adj1[x][y] = adj1[y][x] = 1;
        adj2[x][y] = adj2[y][x] = 1;
    }

    dfs(V);
    cout << endl;

    bfs(V);

    return 0;
}
