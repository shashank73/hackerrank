#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d;
    cin >> n>>d;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++) {
        cin >> arr[(arr_i+n-d)%n];
    }
    for(int arr_i = 0; arr_i < n; arr_i++) {
        cout<< arr[arr_i]<<" ";
    }

    return 0;
}
