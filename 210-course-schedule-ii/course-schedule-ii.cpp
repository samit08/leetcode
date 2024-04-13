class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);
        for (auto it : prerequisites)
            adj[it[1]].push_back(it[0]);

        // Perform topological sorting
        vector<int> order = topoSort(numCourses, adj);

        return order;
    }

    vector<int> topoSort(int v, vector<vector<int>>& adj) {
        queue<int> q;
        vector<int> in(v, 0);

        // Calculate in-degree for each vertex
        for (auto courses : adj) {
            for (int course : courses) {
                in[course]++;
            }
        }

        // Enqueue vertices with in-degree 0
        for (int i = 0; i < v; i++) {
            if (in[i] == 0)
                q.push(i);
        }

        vector<int> order;
        // Perform topological sorting
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            order.push_back(course);

            // Update in-degree of adjacent vertices
            for (int adjacent : adj[course]) {
                in[adjacent]--;
                if (in[adjacent] == 0)
                    q.push(adjacent);
            }
        }

        // Check if all courses can be completed
        if (order.size() == v)
            return order;
        else
            return {}; // Return empty vector if graph has a cycle
    }
};
