#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n,m,c=1;
    cin>>n;
    vector <int> h(n);
    for (i=0; i<n; i++) {
        cin>>h[i];
    }
    sort(h.begin(),h.end());
    for(i=n-2; i>=0; i--) {
        m=h[n-1];
        if(h[i]==m) c++;
    }
    cout<<c;
    return 0;
}
