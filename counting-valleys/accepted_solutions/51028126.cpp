#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,i,c=0,v=0;
    char a[1000000]; //10e6
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]=='U') v++;
        if(v==0 && a[i]=='U') c++;
        if(a[i]=='D') v--;
    }
    cout<<c;
    return 0;
}
