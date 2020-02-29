#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int c(int n)
{
    int count[n+1];
    count[0] = 0;

    for (int i = 1; i<= n; i++)
    {
        if (i > 4) count[i] = count[i-1] + count[i-4];
        else if (i < 4) count[i] = 1;
        else count[i] = 2;
    }
    return count[n];
}
int primec(int n)
{
    int c=0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
        if (prime[p]) c++;
    cout<<c<<"\n";
    return c;
}
int main() {
    int t,n,i;
    cin>>t;
    while(t--) {
        cin>>n;
        primec(c(n));
    }
    return 0;
}
