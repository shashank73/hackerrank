#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n,m=-1;
    cin>>n;
    vector <int> a(n);
    for (i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(i=n-3; i>=0; i--) {
        if(a[i+2]<a[i]+a[i+1]) {
            cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2];
            m=0;
            break;
        }
    }
    if(m==-1) cout<<"-1";
    return 0;
}
