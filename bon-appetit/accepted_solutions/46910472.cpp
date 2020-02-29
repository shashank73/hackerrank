#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,k,sum=0;
    cin>>n>>k;
    vector <int> c(n);
    for(i=0; i<n; i++)
    {
        cin>>c[i];
        if(i!=k)
            sum+=c[i];
    }
    int bill;
    cin>>bill;
    if(bill>(sum/2))
        cout<<bill-(sum/2);
    else if(bill=(sum/2))
        cout<<"Bon Appetit";
    return 0;
}
