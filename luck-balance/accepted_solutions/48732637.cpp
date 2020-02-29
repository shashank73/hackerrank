#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long i,n,m,c,k,s=0,d=0;
    cin>>n>>k;
    vector <int> a;
    for (i=0; i<n; i++) {
        cin>>m>>c;
        if(c==1) {
            d+=m;
            a.push_back(m);
        }
        else
            s+=m;
    }
    sort(a.begin(),a.end());
    if(k!=n&&(a.size()>k)) {
        for(i=0; i<a.size()-k; i++) {
            d-=2*a[i];
        }
    }
    cout<<s+d;
    return 0;
}
