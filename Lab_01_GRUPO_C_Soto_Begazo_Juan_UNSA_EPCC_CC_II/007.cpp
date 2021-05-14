#include<iostream>
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// What is the 10 001st prime number?


//----------------- SOLVE -----------------

//----------------- FUNCTION -----------------
bool isPrime(long long x)
{
	if(x <= 0 || x == 1 || x == 4){
        return false;
    }
    else if(x < 5){
        return true;
    }
    else if(x % 6 != 1 && x % 6 != 5){
        return false;
    }
    else{
        long long max = int(sqrt(x));
        long long div = 5;
        while(div <= max){
            if(x % div == 0){
                return false;
            }
            if(x % (div + 2) == 0){
                return false;
            }
            div += 6;
        }
        return true;
    }
}


//----------------- MAIN -----------------
int main(){
    long ans = 5;
    int cont = 2;
    while(cont != 10001){
        if(isPrime(ans)){
            cont ++;
        }
        ans += 2; 
    }
    cout << ans - 2;
}