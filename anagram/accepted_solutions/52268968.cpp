#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int f=0;
        int a[26]= {0},b[26]= {0};
        string s;
        cin>>s;
        if(s.size()%2!=0) cout<<"-1\n";
        else {
            for(int i=0; i<s.size()/2; i++) {
                a[s[i]-'a']++;
            }
            for(int i=s.size()/2; i<s.size(); i++) {
                b[s[i]-'a']++;
            }
            for(int i=0; i<26; i++) {
                if(a[i]>b[i] && a[i]!=0) {
                    f+=abs(a[i]-b[i]);
                }
            }
            cout<<f<<"\n";
        }
    }
    return 0;
}
