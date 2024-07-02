#include <iostream>
#include <vector>

using namespace std;
int n, m, total;
vector<bool> visited;
vector<vector<int>> g;
vector<int> ans;
// просто задача
void dfs(int s) {
    total = 0;
    visited[s] = true;
    for (auto to : g[s]) {
        if (!visited[to]) {
            dfs(to);
        }
    }
}

int main() {
    
    cin >> n >> m;
    visited.resize(n, false);
    g.resize(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (i != 0) {
                ans.push_back(i+1);
            }
            dfs(i);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]  << " " << ans[i] - 1 << endl;
    }
    return 0;
}
