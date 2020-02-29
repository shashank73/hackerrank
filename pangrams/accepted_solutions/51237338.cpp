#include <set>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string a;
    set <char> s;
    getline(cin,a);
    for(int i=0; i<a.size(); i++) {
        a[i]=tolower(a[i]);
        if(a[i]>='a' && a[i]<='z')
            s.insert(a[i]);
    }
    if(s.size()==26) cout<<"pangram";
    else cout<<"not pangram";
    return 0;
}
