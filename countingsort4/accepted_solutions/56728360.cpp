#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <string> a[100];
    int i,n,x,mx=0;
    string s;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>x>>s;
        if(i<n/2) a[x].push_back("-");
        else a[x].push_back(s);
        if(x>mx) mx=x;
    }
    for(int i=0; i<=mx; i++)
    {
        for(int j=0; j<a[i].size(); j++) {
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}
