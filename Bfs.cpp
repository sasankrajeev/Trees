#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,b,c,d,e,f,j,k,l;
    cin>>n;
    vector< int > a[n+1];
    int vis[n+1];
    for(i=1;i<=n;i++){
        vis[i]=0;
    }
    queue <int> s;
    int u=1;
    s.push(u);
    for(i=1;i<=n;i++){
        cin>>d;
        cin>>e;
        a[d].push_back(e);
        a[e].push_back(d);
    }
    while(s.size()!=0){
            int y=s.front();
            s.pop();
        if(vis[y]!=1){
            vis[y]=1;
            cout<<y<<"\n";
            for(i=0;i<a[y].size();i++){
                if(vis[a[y][i]]!=1){
                    s.push(a[y][i]);
                    }
                }
            }
        }
    return 0;
}
