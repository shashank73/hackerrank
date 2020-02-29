#include <cmath>
#include <cstring>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

vector <int> g[10000000];
bool vis[1001];
int d[1001];
list <int> q;

void bfs(int s) {
    vis[s]=1;
    q.push_back(s);
    d[s]=0;
    while(!q.empty()) {
        s=q.front();
        q.pop_front();
        for(auto it=g[s].begin(); it!=g[s].end(); it++) {
            if(!vis[*it]) {
                vis[*it]=1;
                q.push_back(*it);
                d[*it]=d[s]+1;
            }
        }
    }
}

int main() {
    int t,n,m,u,v,s;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        for(int i=1; i<=m; i++) {
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cin>>s;
        memset(d,-1,sizeof(d));
        memset(vis,0,sizeof(vis));
        bfs(s);
        for(auto it=1; it<=n; it++) {
            if(d[it]>0)
                cout<<6*d[it]<<" ";
            else if(d[it]<0)
                cout<<d[it]<<" ";
        }
        cout<<"\n";
        for(int i=1; i<=n; i++)
            g[i].clear();
    }
    return 0;
}
