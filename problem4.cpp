#include <bits/stdc++.h>
using namespace std;

const int BN = 1e3+5;
vector <int> adjList[BN];
bool visited[BN];
int depth[BN];

void dfs(int root)
{
    visited[root]=true;
    for(int v:adjList[root]){

        if(visited[v]==true)continue;
        depth[v]=depth[root]+1;
        dfs(v);
    }
}

int main(){
int n,e;
cin>>n>>e;
for (size_t i = 0; i < e; i++)
{
    int a,b;
    cin>>a>>b;
    adjList[a].push_back(b);
}

dfs(1);

int x;
cin>>x;
cout<<"Depth of "<< x<<" = "<< depth[x];



    return 0;
}