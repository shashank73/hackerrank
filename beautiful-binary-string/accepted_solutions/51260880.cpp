#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l;
    cin>>l;
    string s;
    cin>>s;
    int c=0;
    for(int i=1; i<l-1; i++) {
        if(s[i]=='1' && s[i-1]=='0' && s[i+1]=='0') {
            if(s[i+2]=='1' && i+2<l) {
                s[i+1]='1';
                c++;
            }
            else {
                c++;
            }
        }

    }
    cout<<c;
    return 0;
}
