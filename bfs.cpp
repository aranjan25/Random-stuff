#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int> > g;
    int V,E;
    cin>>V>>E;
    g.resize(V+10);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout<<endl;
    for(int i=1;i<=V;i++){
        for(int j=0;j<g[i].size();j++) cout<<g[i][j]<<" ";
        cout<<endl;
    }
    //BFS
    cout<<endl;
    vector<int> layer(V+5);
    vector<bool> vis(V+5, false);
    queue<int> Q;
    int start;
    cin>>start;
    layer[start]=0;
    Q.push(start);
    vis[start]=true;
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        for(int i=0;i<g[u].size();i++){
            int v=g[u][i];
            if(!vis[v]){
                Q.push(v);
                layer[v]=layer[u]+1;
                vis[v]=true;
            }
        }
    }
    for(int i=1;i<=V;i++) if(vis[i]) cout<<i<<" ";
    return 0;
}

