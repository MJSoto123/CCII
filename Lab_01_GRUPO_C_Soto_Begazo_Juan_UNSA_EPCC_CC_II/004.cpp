#include<iostream>
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// Find the largest palindrome made from the product of two 3-digit numbers.

//----------------- SOLVE -----------------

//----------------- FUNCTION -----------------
bool isPalin(int x){
    string a = to_string(x);
    for(int i = 0; i < a.size()/2; i++){
        if(a[i] != a[a.size() - i - 1]){
            return false;
        }
    }
    return true;
}
//----------------- MAIN -----------------
int main(){
    int max = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j <1000; j++){
            if(i * j > max){
                if(isPalin(i * j)){
                    if(i * j > max){
                        max = i * j;
                    }
                }
            }
        }
    }
    cout << max;
}