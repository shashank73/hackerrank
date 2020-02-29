#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[200000],b[200000];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,l=0;
    cin>>n;
    vector <int> c(n);
    for(int i=0; i<n; i++) {
        cin>>c[i];
        a[c[i]]++;
    }
    cin>>m;
    vector <int> d(m);
    for(int i=0; i<m; i++) {
        cin>>d[i];
        b[d[i]]++;
        if(d[i]>l)l=d[i];
    }
    for(int i=0; i<=l; i++) {
        if(a[i]!=b[i])cout<<i<<" ";
    }
    return 0;
}
