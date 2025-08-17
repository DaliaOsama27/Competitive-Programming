/*
    1. General Graph (arbitrary capacities):
       - Time: O(V^2 * E)
    2. Unit Capacity Graphs (capacities = 1):
       - Time: O(√V * E)
    3. Bounded Small Capacities (e.g., 1 ≤ c ≤ 1000):
       - Time: Better than general case, often around O(min(V^2, E√V))
    - Dinic is best for sparse graphs or unit capacity cases
    - For large capacities or dense graphs, use Push-Relabel or Capacity Scaling
  */
  
const int MAXV = 1005;
const int INF = 1e9;

struct Dinic {
    struct Edge {
        int to, rev;
        int cap, flow;
    };

    vector<Edge> adj[MAXV];
    int level[MAXV], ptr[MAXV];
    int s, t;

    void init(int _s, int _t) {
        s = _s;
        t = _t;
        for (int i = 0; i < MAXV; ++i)
            adj[i].clear();
    }

    void addEdge(int a, int b, int cap, bool directed = true) {
        adj[a].push_back({b, (int)adj[b].size(), cap, 0});
        adj[b].push_back({a, (int)adj[a].size() - 1, directed ? 0 : cap, 0});
    }

    bool bfs() {
        memset(level, -1, sizeof(level));
        queue<int> q;
        q.push(s);
        level[s] = 0;
        while (!q.empty()) {
            int v = q.front(); q.pop();
            for (auto &e : adj[v]) {
                if (level[e.to] == -1 && e.flow < e.cap) {
                    level[e.to] = level[v] + 1;
                    q.push(e.to);
                }
            }
        }
        return level[t] != -1;
    }

    int dfs(int v, int pushed) {
        if (pushed == 0) return 0;
        if (v == t) return pushed;
        for (int &i = ptr[v]; i < adj[v].size(); ++i) {
            Edge &e = adj[v][i];
            if (level[e.to] != level[v] + 1 || e.flow == e.cap) continue;
            int tr = dfs(e.to, min(pushed, e.cap - e.flow));
            if (tr == 0) continue;
            e.flow += tr;
            adj[e.to][e.rev].flow -= tr;
            return tr;
        }
        return 0;
    }

    int maxFlow() {
        int flow = 0;
        while (bfs()) {
            fill(ptr, ptr + MAXV, 0);
            while (int pushed = dfs(s, INF)) {
                flow += pushed;
            }
        }
        return flow;
    }

    vector<vector<int>> paths;

    bool dfs_path(int u, vector<int> &path) {
        if (u == t) {
            paths.push_back(path);
            return true;
        }
        for (auto &e : adj[u]) {
            if (e.cap > 0 && e.flow == e.cap) {
                path.push_back(e.to);
                e.flow = 0; // mark used
                if (dfs_path(e.to, path)) return true;
                path.pop_back();
                e.flow = e.cap; // backtrack
            }
        }
        return false;
    }

    vector<vector<int>> getAllFlowPaths() {
        paths.clear();
        while (true) {
            vector<int> path = {s};
            if (!dfs_path(s, path)) break;
        }
        return paths;
    }

    void printGraph(int n) {
        cout << "Graph (Node -> [To, Cap, Flow]):\n";
        for (int i = 0; i < n; ++i) {
            if (adj[i].empty()) continue;
            cout << "Node " << i << ": ";
            for (const auto &e : adj[i]) {
                if (e.cap > 0)
                    cout << "[" << e.to << ", " << e.cap << ", " << e.flow << "] ";
            }
            cout << "\n";
        }
    }
};
