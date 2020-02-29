#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k,a[1000],c;
    cin>>t;
    while(t) {
        cin>>n>>k;
        c=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=0)
                c++;
        }
        if(c>=k)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
        t--;
    }
    return 0;
}
