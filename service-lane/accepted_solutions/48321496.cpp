#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t,a[100000],i,j,m,l,r;
    cin>>n>>t;
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    while(t--) {
        cin>>l>>r;
        m=3;
        for(i=l; i<=r; i++) {
            if(a[i]<m)
                m=a[i];
            else if(m==1) {
                break;
            }
        }
        cout<<m<<"\n";
    }

    return 0;
}
