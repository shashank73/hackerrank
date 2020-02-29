#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(string i,string j) {
    if(i.length()==j.length()) {
        return (i<j);
    }
    return (i.length()<j.length());
}

int main() {
    int n;
    cin>>n;
    vector <string> s(n);
    for(int i=0; i<n; i++) {
        cin>>s[i];
    }
    sort(s.begin(),s.end(),comp);
    for(int i=0; i<n; i++) {
        cout<<s[i]<<"\n";
    }
    return 0;
}
