#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define ll long long

vector<ll> adj[100010];
bool vis[100010];
ll sum;

void dfs(ll s) {
    sum++;
    vis[s]=1;

    for(ll i=0; i<adj[s].size(); i++)
    {
        ll x=adj[s][i];
        if(vis[x]==0) {
            dfs(x);
        }
    }
}

int main() {
    ll n,m,u,v,i,j,k,cost;
    cin>>n;
    cin>>m;
    memset(vis, 0, sizeof(vis));

    for(i=1; i<=m; i++) {
        cin>>u;
        cin>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cost=n*(n-1)/2;
    for(i=1; i<=n; i++) {
        if(vis[i]==0) {
            sum=0;
            dfs(i);
            cost-=sum*(sum-1)/2;
        }
    }
    cout<<cost<<"\n";

    return 0;
}
