#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int b[102];

int main() {
    int n,i,a[100],m=0,c=0,d=0,s=0,l;
    cin>>n;
    for(i=1; i<=n; i++) {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=1; i<=100; i++) {
        if(b[i]>m) {
            m=i;
            l=b[i];
        }
        if(b[i]+b[i+1]>s) s=b[i]+b[i+1];
    }
    for(i=1; i<=n; i++) {
        if(a[i]==m+1) c++;
        if(a[i]==m-1) d++;
    }
    if(s>max(l+c,l+d)) {
        cout<<s;
    }
    else if(c>d) cout<<l+c;
    else cout<<l+d;
    return 0;
}
