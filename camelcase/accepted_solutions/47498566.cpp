#include<iostream>
#include<string>
using namespace std;

int main()
{
    int c=1;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]>=65&&s[i]<=90)
            c++;
    }
    cout<<c;
    return 0;
}