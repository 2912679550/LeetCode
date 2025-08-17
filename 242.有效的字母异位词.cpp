/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // ! 穷举搜索 ----> note：对比第三种计数搜索的方案，这个方法每次都要进行数据搬移，导致了运行速度很慢，以及不低的内存开销。
        // if(t.size() != s.size()) return false;
        // for (int i =0 ;i< s.size(); i ++){
        //     for (int j = 0;  j < t.size();j++){
        //         if( s[i] == t[j]){
        //             t.erase(j, 1);
        //             break;
        //         }
        //     }
        // }
        // if(t.size() == 0) return true;
        // else
        //     return false;
        // ! 基于排序分类
        // if(s.length() != t.length())
        //     return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;
        // ! 其他方案(效果最好)
        if (s.size() != t.size()) return false;
        vector<int> vs(26), vt(26);
        for (auto &c: s) vs[c-'a']++;
        for (auto &c: t) vt[c-'a']++;
        for (int i=0; i<26; ++i)
            if (vs[i] != vt[i]) return false;
        return true;
    }
};
// @lc code=end
