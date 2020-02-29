#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q,a,b,c;
    cin>>q;
    while(q)
    {
        cin>>a>>b>>c;
        if(abs(c-a)==abs(c-b))
            cout<<"Mouse C"<<"\n";
        else if(abs(c-a)<abs(c-b))
            cout<<"Cat A"<<"\n";
        else
            cout<<"Cat B"<<"\n";
        q--;
    }
    return 0;
}
