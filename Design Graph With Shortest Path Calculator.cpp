class Graph {
public:
    // int temp;
    #define ll long long
    map<ll, vector<pair<ll, ll>> > adj;
    int temp;
    int dijkstra(int V, map<ll, vector<pair<ll, ll>> > adj, int S, int D)
    {
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>> > pq;
        pq.push({0, S});
        vector<ll> dist(V);
        for(int i=0;i<V;i++){
            dist[i] = 1e9;
        }
        dist[S] = 0;
        while(pq.empty()==false){
            
            ll dis = pq.top().first;
            ll node = pq.top().second;
            pq.pop();
            
            for(auto it:adj[node]){
                ll adjNode = it.first;
                ll wt = it.second;
                
                if(dis+wt<dist[adjNode]){
                    dist[adjNode] = dist[node] + wt;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        // cout<<dist[D]<<endl;
        if(dist[D]==1e9){
            return -1;
        }
        return dist[D];
    }
    
    
    
    
    
    Graph(int n, vector<vector<int>>& edges) {
        temp=n;
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        // temp++;
        adj[edge[0]].push_back({edge[1], edge[2]});
    }
    
    int shortestPath(int node1, int node2) {
        // cout<<temp<<endl;
        return dijkstra(temp, adj, node1, node2);
    }
};
