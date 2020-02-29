#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,k;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    for(i=0; i<s.size(); i++) {
        if(s[i]>=(int)'a' && s[i]<=(int)'z') {
            s[i]=((int)s[i]-97+k%26)%26+97;
        }
        else if( s[i]>=(int)'A' && s[i]<=(int)'Z') {
            s[i]=((int)s[i]-65+k%26)%26+65;
        }
    }
    cout<<s;
    return 0;
}
