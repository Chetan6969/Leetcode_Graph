#include <vector>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1; // number of nodes
        
        vector<int> degree(n + 1, 0); // degrees of each node (1-indexed)

        // Count degrees
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            degree[u]++;
            degree[v]++;
        }

        // Find the node with degree n-1
        for (int i = 1; i <= n; ++i) {
            if (degree[i] == n - 1) {
                return i;
            }
        }

        return -1; // should not reach here as per problem statement
    }
};