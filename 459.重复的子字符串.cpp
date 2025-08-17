/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // ! 自己的方案
        // if(s.length() == 1)
        //     return false;
        // for (int length = 1; length < s.length(); length ++){
        //     if(s.length() % length != 0) continue;
        //     bool flag = true;
        //     for(int i = length; i <= s.length() - length ; i += length){
        //         if( s.substr(0 , length) != s.substr(i , length) ){
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag) return  true;
        // }
        // return false;
        // ! 无敌方案
        // 将原字符串拼接并掐头去尾，如果 s 是由某个子串重复组成的，那么去掉首尾字符后，s 仍然会在 ss 中出现
        string ss = s + s;
        ss = ss.substr(1,ss.length() - 2);
        return ss.find(s) != std::string::npos;
    }
};
// @lc code=end

