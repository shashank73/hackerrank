#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {
    vector <int> l,e,r;
    int p=ar[0];
    for(int i=0;i<ar.size();i++){
        if(ar[i]==p) e.push_back(ar[i]);
        else if(ar[i]<p) l.push_back(ar[i]);
        else r.push_back(ar[i]);
    }
    for(int i=0;i<l.size();i++){
        cout<<l[i]<<" ";
    }
    for(int i=0;i<e.size();i++){
        cout<<e[i]<<" ";
    }
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}
