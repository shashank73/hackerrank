#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s[] = {"Greater than 9", "one", "two", "three", "four", "five", "six",                           "seven", "eight", "nine"};
    (n > 9) ? cout << s[0] : cout << s[n] << endl;

    return 0;
}
