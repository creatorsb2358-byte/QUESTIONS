///Armstrong number:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isarm(int n){
    int ans = 0 ;
    while(n != 0){
        int digit = n % 10;
        ans += digit*digit*digit;
        n /= 10;
    }
    if(ans == n){
        return true;
    }
}
int main(){
    int n = 153;
    if(isarm(n)){
        cout << n << " is an armstrng number";
    }else{
        cout << "not an armstrong number";
    }
    return 0;
}