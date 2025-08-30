/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */
#include <iostream>
#include <vector>
#include <string>
using namespace:: std;
// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> resultVec;
        for (int i = 0; i < operations.size() ; i++){
            if(operations[i][0] == 'D'){
                resultVec.push_back(resultVec[resultVec.size() - 1] * 2);
            }
            else if( operations[i][0] == 'C'){
                resultVec.erase(resultVec.end());
            }
            else if(operations[i][0] == '+'){
                resultVec.push_back(resultVec[resultVec.size() - 1] + resultVec[resultVec.size() - 2]);
            }else{
                resultVec.push_back(stoi(operations[i]));
            }
        }
        int result= 0;
        for(int i = 0 ; i < resultVec.size() ;i++){
            result += resultVec[i];
        }
        return result;
    }
};
// @lc code=end

