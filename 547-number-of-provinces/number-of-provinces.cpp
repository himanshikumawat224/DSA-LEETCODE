class Solution {
private:
    void dfs(int node, vector<vector<int>>& adjls, vector<int>& visi) {
        visi[node] = 1;
        for (auto it : adjls[node]) {
            if (!visi[it]) {
                dfs(it, adjls, visi);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjls(n);

        // Build adjacency list from adjacency matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjls[i].push_back(j);
                }
            }
        }

        vector<int> visi(n, 0);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!visi[i]) {
                count++;
                dfs(i, adjls, visi);
            }
        }
        return count;
    }
};
