/// boats to save people:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(),people.end());
    int i = 0 , j = people.size()-1,boat = 0;
    while(i <= j){
        if(people[i]+people[j] <= limit){
            boat++;
            i++,j--;
        }else{
            boat++;
            j--;
        }
    }
    return boat;
}