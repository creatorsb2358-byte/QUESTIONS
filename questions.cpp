/// Max sum of a row in matrix:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 4 , column = 3;
    int ans = INT32_MIN;
    int sum = 0 ;
    for(int i = 0 ; i< row ; i++){
       
        for(int j = 0 ; j < column ; j++){
            if(i==j){
                sum+= matrix[i][j];
            }
        }
       
    }
    cout << sum;
}