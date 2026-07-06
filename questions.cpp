// fibonacci series

#include <iostream>
using namespace std;

int main(){
    int first = 0, second = 1;
    int term ;
    cout << "which term upto u want to run series :";
    cin >> term ;
    for(int i = 0; i < term ; i++){
        if(i == 0){
            cout << first ;
        }else if (i == 1){
            cout << ", " << second ;
        }else {
            int last = first + second ;
            cout << ", " << last ;
            first = second ;
            second  = last ;
        }
    }
    return 0;
}