#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s;
    int t;
    cin>>s>>t;
    int a;
    int b;
    cin>>a>>b;
    int m;
    int n;
    int ca=0,co=0;
    cin >> m >> n;
    vector<int> app(m);
    for(int i=0; i<m; i++)
    {
        cin>>app[i];
        if((app[i]>=0)&&((a+app[i]>=s)&&(a+app[i]<=t)))
            ca++;
    }
    vector<int> orr(n);
    for(int i=0; i<n; i++)
    {
        cin>>orr[i];
        if((orr[i]<=0)&&((b+orr[i]<=t)&&(b+orr[i]>=s)))
            co++;
    }
    cout<<ca<<"\n"<<co;

    return 0;
}
