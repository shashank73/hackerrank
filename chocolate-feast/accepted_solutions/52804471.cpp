#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++) {
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int s=0,w;
        s=n/c;
        w=s;
        while(w>=m) {
            s+=w/m;
            w+=w%m;
            w/=m;
        }
        cout<<s<<"\n";
    }
    return 0;
}
