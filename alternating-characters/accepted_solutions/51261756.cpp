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
        string s;
        cin>>s;
        int c=0;
        for(int i=0; i<s.size()-1; i++) {
            if(s[i+1]==s[i]) {
                c++;
            }

        }
        cout<<c<<"\n";
    }
    return 0;
}
