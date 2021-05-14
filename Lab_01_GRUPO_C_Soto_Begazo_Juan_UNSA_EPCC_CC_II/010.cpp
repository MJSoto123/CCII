#include<iostream>
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// Find the sum of all the primes below two million.


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
    long long sum = 5;
    while(ans < 2000000){
        if(isPrime(ans)){
            sum += ans;
        }
        ans += 2; 
    }
    cout << sum;
}