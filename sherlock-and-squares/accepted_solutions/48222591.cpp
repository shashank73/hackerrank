#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        cout<<floor(sqrt(b))-ceil(sqrt(a))+1<<"\n";
    }
    return 0;
}
