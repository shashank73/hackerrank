#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t;
    while(t--) {
        int s=0,sa=0,f=0;
        cin>>n;
        vector <int> a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
            s+=a[i];
        }
        if(a.size()==1) cout<<"YES\n";
        else {
            for(int i=0; i<n-1; i++) {
                sa+=a[i];
                if(s-sa-a[i+1]==sa) {
                    f=1;
                    break;
                }
            }
            f==1 ? cout<<"YES\n" : cout<<"NO\n";
        }
    }
    return 0;
}
