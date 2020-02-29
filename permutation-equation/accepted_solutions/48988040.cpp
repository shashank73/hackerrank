#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k,i,m,a[50];
    cin>>n;
    for(i=1; i<=n; i++) {
        cin>>a[i];
    }
    for(i=1; i<=n; i++) {
        m = distance(a, find(a, a + n, i));
        k = distance(a,find(a,a+n,m));
        cout<<k<<"\n";
    }
    return 0;
}
