#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dp(int x,int y) {
    if(x>2&&y>=0)
        return dp(x-2,y+1);
    else if(x>2&&y>=1)
        return 1+dp(x-2,y-1);
    else if(x>=0&&y>=3)
        return 1+dp(x+1,y-2);
    else if(x>=2&&y>2)
        return 1+dp(x-1,y-2);
    else
        return 0;
}
int main() {
    int n,k,x,y,c;
    cin>>k;
    while(k--) {
        cin>>x>>y;
        c=dp(x,y);
        if(c%2==0)
            cout<<"First\n";
        else
            cout<<"Second\n";
    }
    return 0;
}
