#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited;
vector<vector<int>> g;
bool have;

void dfs(int s, int p) {
    visited[s] = true;
    for (auto to : g[s]) {
        if (!visited[to]) {
            dfs(to, s);
        } else if (to != p) {
            have = true;
        }
    }
}
//классический поиск цикла
int main() {
    int n, m;
    cin >> n >> m;
    
    g.resize(n);
    visited.resize(n, false);
    
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    have = false;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i, -1);
        }
    }
    
    if (have) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
