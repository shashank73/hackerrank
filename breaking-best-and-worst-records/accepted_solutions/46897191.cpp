#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector <int> s(n);
    int x=0,p=0;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int mx=s[0],mi=s[0];
    for(int i=0; i<n; i++)
    {
        if(s[i]>mx) {
            mx=s[i];
            x++;
        }
        else if(s[i]<mi) {
            mi=s[i];
            p++;
        }
    }
    cout<<x<<" "<<p;
    return 0;
}
