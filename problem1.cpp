// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3+5;
// vector <int>    adjlist[N];
// int depth[N];
// int height[N];
// bool visited[N];
// void dfs(int u)
// {
//     visited[u]=true;
//     // cout<<u<<endl;
//     for(int v: adjlist[u])
//     {
//         if(visited[v]==true) continue;
//         depth[v]=depth[u] +1;

//         dfs(v); 
//         //height
//         if(height[v]+1> height[u]) height[u]=height[v]+1;
//     }
// }

 
// int main(){

//     int m,n;
//     cin>>n>>m;

//     for (int i = 0; i < m; i++)
//     {
//         int u,v,w;
//         cin>>u>>v;
//         adjlist[u].push_back(v);

//         adjlist[v].push_back(u);
//     }

    
//     dfs(1);
//     //depth
//     for (int i = 1; i <= n; i++)
//     {
//         cout<< "DEPTH    of node "<<i<<" : "<<depth[i]<<endl;
//     }

//     //height
//     for (int i = 1; i < n; i++)
//     {
//         cout<< "height    of node "<<i<<" : "<<height[i]<<endl;
        
//     }
    

    
//     return 0;
// } 

#include <bits/stdc++.h>
using namespace std;
//declear vector
const int E = 1e3+5;
vector<int> adjList[E];
int visited[E];

// dfs traversal
void dfs(int u){
    visited[u]=true;
    for(auto v: adjList[u])
    {
        if(visited[v]==true) continue;
        dfs(v);
    }
        cout<<u<<" ";
}
int main(){
int n,m;
cin>>n>>m;
    for (size_t i = 0; i < n; i++)
    {
       int u,v;
       cin>>u>>v;
       adjList[u].push_back(v);
       adjList[v].push_back(u);
    }
    dfs(1);
    return 0;
}