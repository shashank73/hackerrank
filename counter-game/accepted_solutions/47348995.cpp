#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main() {
    unsigned long long n;
    int t;
    cin>>t;
    while(t) {
        cin>>n;
        n--;
        unsigned long long m=0;
        while(n!=0) {
            if(n%2)
                m++;
            n>>=1;
        }
        if(m%2)
            cout<<"Louise"<<"\n";
        else
            cout<<"Richard"<<"\n";
        t--;
    }
    return 0;
}