#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s,t=("SOS");
    int c=0;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]!=t[i%3]) c++;
    }
    cout<<c;
    return 0;
}
