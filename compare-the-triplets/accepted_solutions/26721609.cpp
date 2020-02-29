#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    int a0;
    int a1;
    int a2,A=0;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2,B=0;
    cin >> b0 >> b1 >> b2;
    if (a0>b0)
    {
        A=A+1;
    }
    else if(a0<b0)
    {
        B=B+1;
    }
    if (a1>b1)
    {
        A=A+1;
    }
    else if(a1<b1)
    {
        B=B+1;
    }
    if (a2>b2)
    {
        A=A+1;
    }
    else if(a2<b2)
    {
        B=B+1;
    }
    cout<<A<<" "<<B;
    return 0;
}
