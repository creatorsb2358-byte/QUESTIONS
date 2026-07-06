// decimal to binary:

#include <iostream>
using namespace std;

int main(){
    int decimal ;
    cout << "choose decimal for conversion:";
    cin >> decimal;
    int power = 1;
    int binary = 0;
    while (decimal > 0){
        int remainder = decimal % 2;
        decimal /= 2;
        binary += remainder*power ;
        power *= 10;

    }
    cout << binary ; 
}