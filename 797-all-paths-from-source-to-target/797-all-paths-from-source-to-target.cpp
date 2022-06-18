class Solution {
public:
    vector<vector<int>> paths;
    bool visit[20];
    int N;
    
    void dfs(vector<vector<int>>& graph,int node, vector<int> path){
        path.push_back(node);
        bool f = 0;
        for(int i = 0;i < graph[node].size();i++){
            int u = graph[node][i];
            dfs(graph,u,path);
        }
        
        if(node == N-1){
            paths.push_back(path);
            return;
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        N = graph.size();
        vector<int> v;
        dfs(graph,0,v);   
        return paths;
    }
};