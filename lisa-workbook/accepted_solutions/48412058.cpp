#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,i,j,c=0,l,a[500];
    cin>>n>>k;
    for(i=1; i<=n; i++) {
        cin>>a[i];
    }
    l=1;
    for(i=1; i<=n; i++) {
        for(j=1; j<=a[i]; j++) {
            if(j==l) c++;
            if((j%k==0)||j==a[i]) l++;
        }
    }
    cout<<c<<"\n";
    return 0;
}
