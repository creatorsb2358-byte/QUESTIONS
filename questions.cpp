/// Max sum of a row in matrix:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4 , column = 3;
    int ans = INT32_MIN;
    
    for(int i = 0 ; i< row ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < column ; j++){
            sum += matrix[i][j];
            ans = max(ans, sum);
        }
       
    }
    cout << ans;
}