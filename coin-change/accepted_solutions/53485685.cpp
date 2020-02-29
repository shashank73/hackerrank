#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

double count(int a[],int m,int n) {
    double change[n+1];
    memset(change,0,sizeof(change));
    change[0]=1;
    for(int i=0; i<m; i++)
        for(int j=a[i]; j<=n; j++)
            change[j]+=change[j-a[i]];

    return change[n];
}

int main() {
    int m,n,a[51];
    cin>>n>>m;
    for(int i=0; i<m; i++) {
        cin>>a[i];
    }
    cout<<fixed<<setprecision(0)<<count(a,m,n);
    return 0;
}

