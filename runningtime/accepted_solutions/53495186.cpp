#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,c=0;
    cin>>n;
    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j=1; j<n; j++)
    {
        int k=a[j];
        int i=j-1;
        while(a[i]>k && i>=0)
        {
            a[i+1]=a[i];
            i--;
            a[i+1]=k;
            c++;
        }
    }
    cout<<c;
    return 0;
}