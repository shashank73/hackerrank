#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,c[100],i,k,l,e=100;
    cin>>n>>k;
    l=n/k;
    for(i=0; i<n; i++)
    {
        cin>>c[i];
    }
    for(i=0; i<n; i+=k)
    {
        if(c[(i+k)%n]==1)
        {
            e=e-3;
        }
        else
            e--;
    }
    cout<<e;
    return 0;
}
