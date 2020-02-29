#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[5]= {0,0,0,0,0};
    int n,i;
    cin>>n;
    vector <int> s(n);
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        switch(s[i])
        {
        case 1:
            a[0]++;
            break;

        case 2:
            a[1]++;
            break;

        case 3:
            a[2]++;
            break;

        case 4:
            a[3]++;
            break;

        case 5:
            a[4]++;
            break;

        default:
            break;

        }
    }
    cout<<distance(a, max_element(a, a + 5))+1;
    return 0;
}
