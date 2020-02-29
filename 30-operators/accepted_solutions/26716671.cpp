#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealcost,totalcost;
    float tip,tax;
    int tipper,taxper;
    cin>>mealcost>>tipper>>taxper;
    tip=mealcost*tipper;
    tip=tip/100;
    tax=mealcost*taxper;
    tax=tax/100;
    totalcost=mealcost+tax+tip;
    cout<<"The total meal cost is "<< nearbyint(mealcost+tax+tip)<<" dollars.";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
