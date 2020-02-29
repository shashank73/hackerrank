#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

bool checkbal(string s) {
    int c=0;
    stack <char> a;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='['||s[i]=='('||s[i]=='{') {
            a.push(s[i]);
        }
        else {
            switch(s[i]) {
            case ']':
                if(!a.empty()&&(a.top()=='[')) {
                    a.pop();
                    c=1;
                }
                break;
            case ')':
                if(!a.empty()&&(a.top()=='(')) {
                    a.pop();
                    c=1;
                }
                break;
            case '}':
                if(!a.empty()&&(a.top()=='{')) {
                    a.pop();
                    c=1;
                }
                break;
            default:
                break;
            }
        }
    }
    if(a.empty()&&c!=0) return true;
    else return false;

}
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        checkbal(s)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
