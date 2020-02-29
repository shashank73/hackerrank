#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,l,a,b,k,i,mx;
    cin >> n;
    cin>>l;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        arr[i]=0;
    }
    while(l) {
        cin>>a>>b>>k;
        for(i=a-1; i<=b-1; i++)
        {
            arr[i]=arr[i]+k;
        }
        l--;
    }
    mx=arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i]>mx)
            mx=arr[i];
    }
    cout<<mx;
    return 0;
}
