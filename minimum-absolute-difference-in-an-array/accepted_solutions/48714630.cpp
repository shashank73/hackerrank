#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n,a[100000],m;
    cin>>n;
    for (i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    m=abs(a[n-1]-a[0]);
    for(i=0; i<n; i++) {
        if(abs(a[i+1]-a[i])<m)
            m=abs(a[i+1]-a[i]);
    }
    cout<<m;
    return 0;
}
