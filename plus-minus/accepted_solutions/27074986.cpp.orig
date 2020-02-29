#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double n,P=0,N=0,Z=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
       if( arr[arr_i]>0){
           P++;
       }
        else if (arr[arr_i]<0){
            N++;
        }
        else{
            Z++;
        }
    }
    cout<<fixed<<setprecision(7)<<P/n<<endl;
    cout<<fixed<<setprecision(7)<<N/n<<endl;
    cout<<fixed<<setprecision(7)<<Z/n;
    return 0;
}
