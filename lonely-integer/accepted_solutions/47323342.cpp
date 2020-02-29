#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int b[100];
int main() {
    int c=0,n,a[100],i;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a[i];
        b[a[i]]++;
    }
    i=0;
    while(b[i]!=1) {
        i++;
    }
    cout<<i;
    return 0;
}
