#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int j=n-1;
    int k=a[j];
    int i=j-1;
    while(a[i]>k && i>=0)
    {
        a[i+1]=a[i];
        for(int l=0; l<n; l++)
        {
            cout<<a[l]<<" ";
        }
        i--;
        a[i+1]=k;
        cout<<"\n";
    }
    for(int l=0; l<n; l++)
    {
        cout<<a[l]<<" ";
    }
    for(int l=0; l<n; l++)
    {
        //cout<<a[l]<<" ";
    }
    return 0;
}
