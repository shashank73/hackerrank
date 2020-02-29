#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int b[100];
int main() {
    int n;
    cin>>n;
    vector <int> a(n),c(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=1; i<100; i++) {
        b[i]+=b[i-1];
    }
    for(int i=0; i<n; i++) {
        c[b[a[i]]]=a[i];
        b[a[i]]--;
    }
    for(int i=1; i<=n; i++) {
        cout<<c[i]<<" ";
    }
    return 0;
}
