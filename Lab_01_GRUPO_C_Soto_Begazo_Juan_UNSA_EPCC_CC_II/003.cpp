#include<iostream>
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// What is the largest prime factor of the number 600851475143 ?

//----------------- SOLVE -----------------

//----------------- FUNCTION -----------------
int maxDivPrim(long long num){
    long long div = 2;
    while(div <= int(sqrt(num))){
        if(num % div == 0){
            num = num / div;
            //cout << div << " ";
        }
        if(num % div != 0 )
        {
            if(div < 5){
                div += 1;
            }
            else if (div % 6 == 1){
                div += 4;
            }
            else{ 
                div += 2;
            }
        }
    }
    return num;
}

//----------------- MAIN -----------------
int main()
{
    cout <<maxDivPrim(600851475143);
}