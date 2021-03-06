#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(int l) {
    long long m = (long long)l*(long long)l;
    long long q = m;
    float c=0;
    while(q) {
        q=q/10;
        c++;
    }
    int t=0;
    t=fmod(m,(pow(10,ceil(c/2))));
    m=m/(pow(10,ceil(c/2)));
    t+=m;
    if(t==l) return l;
    else return 0;
}
int main() {
    int p,q,f=0;
    cin>>p>>q;
    for(int i=p; i<=q; i++) {
        if(check(i)) {
            cout<<check(i)<<" ";
            f=1;
        }
    }
    if(!f) cout<<"INVALID RANGE";
    return 0;
}
