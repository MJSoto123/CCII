#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
//----------------- STATEMENT -----------------
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


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

long long MCM(int num[], int size){
    long sup = 1;
    for(int i = 0; i < size; i++){
        if(sup < num[i]){
            sup = num[i];
        }
    }

    vector <int> primos;
    for(int i = 1; i <= sup; i++){
        if(isPrime(i)){
            primos.push_back(i);
            //cout << i << " ";
        }
    }

    vector <int> exp(primos.size(), 0);

    for(int i = 0; i < size; i++){
        int j = 0;
        int cont = 0;
        while(primos[j] <= num[i]){
            if(num[i] % primos[j] == 0){
                num[i] /= primos[j];
                cont ++;
            }
            if(num[i] % primos[j] != 0){
                if(cont > exp[j]){
                    exp[j] = cont;
                }
                if(num[i] == 1){
                    break;
                }
                j++;
                cont = 0;
            }
        }
    }
    long long ans = 1;
    for(int i = 0; i < primos.size(); i++){
        //cout << primos[i]<< " " << exp[i] << endl;
        ans = ans * pow(primos[i], exp[i]);
    }
    return ans;
}

//----------------- MAIN -----------------
int main(){
    // int num[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
    // cout << MCM(num,13);
    // que unidad de medida hay luego de long long???
    
    int cant = 20;
    int num[cant];
    for(int i = 0; i < cant; i++){
        num[i] = i + 1;
    }
    cout << MCM(num, cant);
}