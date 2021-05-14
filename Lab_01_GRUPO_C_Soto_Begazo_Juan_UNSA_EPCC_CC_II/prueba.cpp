#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
bool isPalin(int x){
    string a = to_string(x);
    for(int i = 0; i < a.size()/2; i++){
        if(a[i] != a[a.size() - i - 1]){
            return false;
        }
    }
    return true;
}

int main() {
    unsigned t0, t1;
 
    t0=clock();

    int n = 1000000;
    int s = 0;
    while (n > 0) {
        int a = n/100000;
        int b = n/10000-10*a;
        int c = n/1000-100*a-10*b;
        if ((a==(n%10))&&(b==((n%100-n%10)/10))&&(c==((n%1000-n%100)/100))) {
        int i = 999;
        int j = n/i;
        while (j<=1000) {
            if (i*j==n) {
            s = n;
            cout << s << endl;
            }
            i--;
            j = n/i;
        }
        }
        if(s != 0){
           n = 0;
        }
        n--;
    }
    t1 = clock();
    
    double time1 = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time1 << endl;

    unsigned t2, t3;
    
    t2=clock();
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
    cout << max << endl;
    t3 = clock();
    
    double time2 = (double(t2-t3)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time2 << endl;
}