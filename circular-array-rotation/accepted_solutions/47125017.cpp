#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int k,n,m[500],q,x,i;
    cin>>n>>k>>q;
    vector<int> a(n);
    for(i=0; i<n; i++) {
        cin>>a[(n+k+i)%(n)];
    }
    for(i=0; i<q; i++) {
        cin>>m[i];
        cout<<a[m[i]]<<"\n";
    }
    return 0;
}
