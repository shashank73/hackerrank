#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int b[100];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=0; i<100; i++) {
        cout<<b[i]<<" ";
    }

    return 0;
}
