#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,g=0,m=-1,f=0,c=0,a[100000],b[100000],d[100000],p=0;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a[i];
        b[i]=a[i];
        d[i]=a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++) {
        if(a[i]!=b[i]) {
            f=1;
            c++;
        }
        else {
            p++;
            b[i]=0;
        }
    }
    for(i=0; i<n; i++) {
        if(d[i]==b[i]) {
            m=i;
            break;
        }
    }
    if(c>2 && m>-1) {
        i=m;
        while(b[i]!=0||i<n-1) {
            if(b[i+1]>b[i]) {
                g=1;
                break;
            }
            i++;
        }
    }
    int k=i;
    if(f==0) cout<<"yes";
    else if(c==2) {
        cout<<"yes\nswap ";
        for(i=0; i<n; i++) {
            if(b[i]!=0) cout<<i+1<<" ";
        }
    }
    else if(g==0) {
        cout<<"yes\n";
        cout<<"reverse "<<m+1<<" "<<m+c;
    }
    else cout<<"no";
    return 0;
}
