#include<iostream>
#include<string>
using namespace std;

int main()
{
    int k;
    string s;
    cin>>s;
    while(s.size()>0) {
        k=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]==s[i+1]) {
                s.erase(0+i,2);
            }
        }
        for(int i=0; i<s.size(); i++) {
            if(s[i]==s[i+1]) {
                k=1;
            }
        }
        if(k==0) break;
    }
    if(s.size()==0) cout<<"Empty String";
    else cout<<s;
    return 0;
}