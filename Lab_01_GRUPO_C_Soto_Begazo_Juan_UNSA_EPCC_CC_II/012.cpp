#include<iostream>
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// What is the value of the first triangle number to have over five hundred divisors?

//----------------- SOLVE -----------------

//----------------- FUNCTION -----------------
int cantDiv(long long num){
    if(num <= 0){
        return -1;
    }
    long long div = 2;
    int cant = 1;
    int exp = 0;
    while(div <= num){
        if(num % div == 0){
            num = num / div;
            exp ++;
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
            //-----Incrementando el numero de divisores----
            cant *= exp + 1;
            exp = 0;
        }
    }
    return cant;
}

//----------------- MAIN -----------------
int main(){
    long num = 0;
    int cont = 1;
    while(cantDiv(num) < 500){
        num +=cont;
        cont ++;
    }
    cout << num;
}