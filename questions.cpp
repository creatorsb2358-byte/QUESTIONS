///Sieve of Eratosthenes(count prime numbers):

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n = 10;
    vector<bool> isprime(n+1,true);
    int count = 0;
    for(int i = 2 ; i < n ; i++){
        if(isprime[i]){
            count++;
        }
        for(int j = 2*i ; j<n ;j= j+i){
            isprime[j] = false;
        }
    }
    cout << count;
}