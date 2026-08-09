///Guess number higher and lower:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool guess(int n){
    int guess = 6;
    if(n > guess){
        return -1;
    }else if(n < guess){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n = 10;
    int st = 1 , end = n ;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(guess(mid) == -1){
            end = mid-1;
        }else if(guess(mid) == 1){
            st = mid+1;
        }else{
            cout << mid;
        }
    }
}