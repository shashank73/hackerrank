#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstdint>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long double x,n[1000];
    int i,j;
    cin>>j;
    for(i=0; i<j; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<j; i++)
    {   x=1;
        for (int k = 0; k <= n[i]; k++)
        {
            cout <<fixed<<setprecision(0)<<fmod(x,1000000000) <<" ";
            x = x*(n[i] - k)/(k + 1);
        }
        cout<<"\n";
    }
    return 0;
}
