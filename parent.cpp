#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, a, b, p, root;

vector<vector<int>> g;
vector<bool> visited;
vector<int> tinar;
vector<int> toutar;
vector<int> ans;

void dfs(int s) {
    visited[s] = true;
    p += 1;
    tinar[s] = p;
    for (auto to : g[s]) {
        if (!visited[to]) {
            dfs(to);
        }
    }
    p += 1;
    toutar[s] = p;
}
// является ли a предком b
int main() {
    p = 0;
    cin >> n;
    g.resize(n);
    tinar.resize(n, 0);
    toutar.resize(n, 0);
    visited.resize(n, false);

    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        if (z == 0) {
            root = i;
            continue;
        }
        z = z - 1;
        g[z].push_back(i);
    }

    dfs(root);

    cin >> m;
    for (int _ = 0; _ < m; _++) {
        cin >> a >> b;
        a--;
        b--;
        if (tinar[a] < tinar[b] && toutar[a] > toutar[b]) {
            ans.push_back(1);
        }
        else {
            ans.push_back(0);
        }
    }

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << endl;
    }

    return 0;
}
