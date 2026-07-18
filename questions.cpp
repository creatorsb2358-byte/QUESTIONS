///pow(x,n):

#include <iostream>
#include <vector>
using namespace std;

int main(){
    double x = 3 , n = 5;
    ///ans start from here :
    int binary_form = n ;
    if(n < 0){
        x = 1/x;
        binary_form = -binary_form;
    } 
    double ans = 1 ;
    while(binary_form > 0){
        if(binary_form % 2 == 1){
            ans *= x ;
        }
        x *= x;
        binary_form /= 2;
    }
    cout << ans;
}