#include<iostream>
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

//----------------- SOLVE -----------------

//----------------- FUNCTION -----------------

//----------------- MAIN -----------------
int main(){
    int a = 0, b = 0;
    for(int i = 1; i < 599; i++){
        if(i % 3 == 1 || i % 3 == 2){
            for(int j = 3; j < 599 - i; j+=3){
                //cout << i << " " << j << endl;
                if(i*i + j*j == (1000 - i - j)*(1000 - i - j)){
                    a = i;
                    b = j;
                }
            }
        }
        else{
            for(int j = 1; j < 599 - i; j++){
                if(i*i + j*j == (1000 - i - j)*(1000 - i - j)){
                    a = i;
                    b = j;
                }
            }
        }
    }
    cout << a * b * (1000 - a - b);
}