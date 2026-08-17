///Euclids algorithm:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int isgcd(int a , int b){
    while(a > 0 && b >0){
        if(a > b){
            a = a%b;
        }else if(b > a){
            b = b%a;
        }
    }
    if(a == 0){
        return b;
    }else{
        return a;
    }
}
int main(){
    cout << "the greatest common divisor is : " << isgcd(20,28);
    return 0;
}