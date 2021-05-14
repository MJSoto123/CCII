#include<iostream>
#include<cmath>
using namespace std;

//----------------- STATEMENT -----------------
// Find the sum of all the multiples of 3 or 5 below 1000.


//----------------- SOLVE -----------------


//----------------- FUNCTIONS -----------------
int multInRange(int a, int b, int div){
    int sum = 0;
    int inf = int(a/div);
    int sup = int(b/div);
    sum = (inf + sup) * (sup - inf + 1)/2;
    sum *= div;
    return sum;
}

//----------------- MAIN -----------------
int main(){
    int mult3 = multInRange(1, 999, 3);
    int mult5 = multInRange(1, 999, 5);
    int mult15 = multInRange(1, 999, 15);
    cout << mult3 + mult5 - mult15;
}