#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> a;
    stack<int> l;
    int n,q,x;
    cin>>n;
    while(n)
    {
        cin>>q;
        switch(q)
        {
        case 1:
            cin>>x;
            if(a.empty()) {
                a.push(x);
                l.push(x);
            }
            else {
                a.push(x);
                int a=l.top();
                l.push(max(a,x));


            }
            break;
        case 2:
            if(!a.empty()) {
                a.pop();
                l.pop();
            }
            break;
        case 3:
            printf("%d\n", l.top());
            break;
        default:
            break;
        }
        n--;
    }
    return 0;
}
