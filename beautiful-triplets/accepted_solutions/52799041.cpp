#include <cmath>
#include <cstdio>
#include <unordered_set>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,d,t,c=0;
    cin>>n>>d;
    unordered_set <int> s;
    for(int i=0; i<n; i++) {
        cin>>t;
        s.insert(t);
    }
    auto it=s.begin();
    for(it=s.begin(); it!=s.end(); it++) {
        if(s.find(*it+d)!=s.end() && s.find(*it+2*d)!=s.end()) c++;
    }
    cout<<c;
    return 0;
}
