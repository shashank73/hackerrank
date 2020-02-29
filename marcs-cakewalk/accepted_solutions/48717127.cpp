#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n;
    long long s=0;
    cin>>n;
    vector <int> c(n);
    for (i=0; i<n; i++) {
        cin>>c[i];
    }
    sort(c.begin(),c.end(),greater<int>());
    for(i=0; i<n; i++) {
        s+=c[i]*pow(2,i);
    }
    cout<<s;
    return 0;
}
