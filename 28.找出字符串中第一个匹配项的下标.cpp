/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

#include <string>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int size_h = haystack.size();
        int size_n = needle.size();
        for (int i = 0 ; i <= size_h - size_n;i++){
            int j = 0;
            for( ; j < size_n; j++){
                if(haystack[i+j] != needle[j])
                    break;
            }
            if(j == size_n)
                return i;
        }
        return -1;
    }
};
// @lc code=end

