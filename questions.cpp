///first bad version:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isbadversion(int n){
    if(n >= 5){
        return true;
    }
}

int main(){
    int n = 8;
    int st = 1 , end = n , ans = 0;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isbadversion(mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    cout << ans;
}