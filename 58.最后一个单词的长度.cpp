/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
#include <iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int result = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] != ' ') 
                result++;
            if (result != 0 && s[i] == ' ')
                return result;
        }
        return result;
    }
};
// @lc code=end

