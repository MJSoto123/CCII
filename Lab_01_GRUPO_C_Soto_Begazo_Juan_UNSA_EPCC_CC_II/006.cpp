#include<iostream>
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


//----------------- SOLVE -----------------

//----------------- FUNCTION -----------------
int sumFist(int num){
    return (num)*(num +1)/2;
}
int sumFisrtSquare(int num){
    return (num)*(num + 1)*(2 * num + 1)/ 6;
}

//----------------- MAIN -----------------
int main(){
    int sum = sumFist(100);
    int square = sumFisrtSquare(100);
    cout << sum * sum - square;
}