#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double n,i,c=0,ct=0;
    string s;
    cin>>s;
    cin>>n;
    for(int x=0; x<s.size(); x++) {
        if(s[x]=='a') {
            c++;
        }
    }
    if(fmod(n,s.size())==0) {
        cout<<fixed<<setprecision(0)<<c*(n/s.size());
    }
    else {
        ct=((n-fmod(n,s.size()))/s.size())*c;
        for(i=0; i<fmod(n,s.size()); i++) {
            if(s[fmod(i,n)]=='a') {
                ct++;
            }
        }
        cout<<fixed<<setprecision(0)<<ct;
    }
    return 0;
}
