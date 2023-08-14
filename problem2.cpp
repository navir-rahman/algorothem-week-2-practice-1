#include <bits/stdc++.h>
using namespace std;

const int E = 1e3+5;
vector <int> adjLst[E];
int main(){
int n;
cin>>n;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        int x;
        cin>>x;
        if(x==1){
            adjLst[i].push_back(j);
        }
    }   
}
for (int i = 1; i <= n; i++)
{
    cout<<"List " << i << " : ";
    for(int v:adjLst[i])
    {
        cout<<v<<" ";
    }
    cout<<endl;
}


    return 0;
}