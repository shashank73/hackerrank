#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s,t;
    int k,i,n,c=0,m;
    cin>>s>>t;
    cin>>k;
    for(i=0; i<s.size()>t.size()?s.size():t.size(); i++) {
        if(s[i]!=t[i]) {
            c=s.size()+t.size()-2*i;
            break;
        }
    }
    if(((k-c)>=0&&c%2==k%2)||s.size()+t.size()<k)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
