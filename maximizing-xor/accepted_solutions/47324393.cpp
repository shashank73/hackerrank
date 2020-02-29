#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,l,j,r,i,m=0;
    cin>>l;
    cin>>r;
    for(i=l; i<=r; i++) {
        for(j=l; j<=r; j++) {
            if((i^j)>m)
                m=i^j;
        }
    }
    cout<<m;
    return 0;
}
