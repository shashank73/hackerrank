#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;
    long long a[5];
    long long sum;
    for(i=0; i<5; i++) {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+5);
    cout<<sum-a[4]<<" "<<sum-a[0]<<endl;
    return 0;
}
