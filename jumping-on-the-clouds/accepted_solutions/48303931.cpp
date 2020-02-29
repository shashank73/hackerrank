#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a[100],i,c=0,j=0;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    while(n>1) {
        if(a[j+2]!=1&&n>0) {
            n-=2;
            j+=2;
            c++;
        }
        else if(n>0) {
            n=n-1;
            j++;
            c++;
        }
    }
    cout<<c;
    return 0;
}
