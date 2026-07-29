///Subtract the Product and Sum of Digits of an Integer;

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 234;
    long long product = 1;
    int sum = 0;
    int ans = 0;
    while(n > 0){
        int remainder = n%10;
        n /= 10;
        product *= remainder;
        sum += remainder ;
           
    }
    ans = product - sum;
    return ans;

}