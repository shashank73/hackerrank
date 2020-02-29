#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,m,s,x;
    cin>>t;
    while(t) {
        cin>>n>>m>>s;
        x=s+(m-1);
        if(x%n==0)
            cout<<n<<"\n";
        else
            cout<<x%n<<"\n";
        t--;
    }
    return 0;
}
