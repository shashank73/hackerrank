#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int rev(int x)
{
    int c=0;
    while(x) {
        c=c*10;
        c+=x%10;
        x=x/10;
    }
    return c;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,x,y,c=0;
    cin>>i>>j>>k;
    for(x=i; x<=j; x++)
    {
        if((x-rev(x))%k==0)
            c++;
    }
    cout<<c;
    return 0;
}
