/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */
#include <iostream>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= 90)
                s[i] = s[i] + 32;
        }
        return s;
    }
};
// @lc code=end

