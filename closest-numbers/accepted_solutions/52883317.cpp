#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,s=10000001;
    cin>>n;
    vector <int> a(n),b;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n-1; i++) {
        if(abs(a[i+1]-a[i])<=s) {
            s=abs(a[i+1]-a[i]);
            b.push_back(a[i]);
            b.push_back(a[i+1]);
        }
    }
    for(int i=0; i<b.size()-1; i++) {
        if(abs(b[i+1]-b[i])==s) cout<<b[i]<<" "<<b[i+1]<<" ";
    }
    return 0;
}
