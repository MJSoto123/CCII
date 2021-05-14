#include<iostream>
#include<cmath>
using namespace std;

//----------------- STATEMENT -----------------
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.


//----------------- SOLVE -----------------
int main(){
    long long ant = 1, pos = 2, sum = 0;
    while(pos < 4000000){
        if(pos % 2 == 0){
            sum += pos;
        }
        pos += ant;
        ant = pos - ant;   
    }
    cout << sum << endl;    
}