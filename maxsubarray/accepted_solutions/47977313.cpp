#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,a[100000],maxn,maxh,nonc,c,minn;
    cin>>t;
    while(t--) {
        cin>>n;
        c=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]<0) {
                c++;
            };
        }
        minn=*max_element(a,a+n);
        maxn=0;
        maxh=0;
        nonc=0;
        for(int i=0; i<n; i++) {
            if(a[i]>0) {
                nonc+=a[i];
            }
            if(n==c) {
                maxn=minn;
                nonc=maxn;
            }
            else {
                maxh+=a[i];
                if(maxh<0)
                    maxh=0;
                else  if(maxh>maxn)
                    maxn=maxh;
            }
        }
        cout<<maxn<<" "<<nonc<<"\n";
    }
    return 0;
}
