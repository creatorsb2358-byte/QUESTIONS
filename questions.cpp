///kadane's algorithm:

#include <iostream>
using namespace std;

int main(){
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int maxx = INT16_MIN;
    int cs = 0;
    for(int i = 0; i < 7; i++){
        cs += arr[i];
        maxx = max(cs,maxx);
        if(cs < 0){
            cs = 0;
        }
}
cout << maxx;
}        

