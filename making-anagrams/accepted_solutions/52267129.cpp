#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    int sum=0;
    int a[26]= {0},b[26]= {0};
    string s,r;
    cin>>s;
    cin>>r;
    for(int i=0; i<s.size(); i++) {
        a[s[i]-'a']++;
    }
    for(int i=0; i<r.size(); i++) {
        b[r[i]-'a']++;
    }
    for(int i=0; i<26; i++) {
        if(a[i]!=0 && b[i]!=0) {
            sum+=abs(a[i]-b[i]);
        }
        else if(a[i]!=0) sum+=a[i];
        else sum+=b[i];
    }
    cout<<sum;
    return 0;
}
