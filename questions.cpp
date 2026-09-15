/// bag of tokens:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int bagOfTokensScore(vector<int>& tokens, int power) {
    sort(tokens.begin(), tokens.end());

    int i = 0;
    int j = tokens.size() - 1;
    int score = 0;
    int maxScore = 0;

    while(i <= j) {

        if(tokens[i] <= power) {
            power -= tokens[i];
            score++;
            i++;

            maxScore = max(maxScore, score);
        }
        else if(score > 0) {
            power += tokens[j];
            score--;
            j--;
        }
        else {
            break;
        }
    }

    return maxScore;
}