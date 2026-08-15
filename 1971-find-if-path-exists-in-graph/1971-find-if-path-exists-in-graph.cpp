class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<vector<int>>adj(n);

        for(auto edge : edges) {

    int u = edge[0];
    int v = edge[1];

    adj[u].push_back(v);
    adj[v].push_back(u);
}

        vector<bool>vis(n,false);

        queue<int>q;
        q.push(source);
        vis[source]=true;

        while(!q.empty()){


            int p=q.front();
             if(p==destination){
                        return true;
                    }
            q.pop();
            for(int x:adj[p]){

                if(vis[x]==false){

                    if(x==destination){
                        return true;
                    }
                    vis[x]=true;
                    q.push(x);
                }
            }
        }
        return false;
    }
};