///sqr(x):

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 6;
    int st = 0 , end = n;
    while(st < end){
        int mid = st + (end-st)/2;
        int square = mid * mid;
        if(square < n){
            st = mid+1;
        }else if(square > n){
            end = mid;
        }
    }
    cout << st-1;

}