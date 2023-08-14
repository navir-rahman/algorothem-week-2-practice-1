
#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int adjmat[N][N];

int main(){
int n,e;
cin>>n>>e;
for (size_t i = 0; i < e; i++)
{
    int a,b;
    cin>>a>>b;
    adjmat[a][b]=1;
}

for (size_t i = 1; i <= n; i++)
{
    for (size_t j = 1; j <=n; j++)
    {
        /* code */
        cout<<adjmat[i][j]<<" ";
    }
    cout<<endl;
}



    return 0;
}