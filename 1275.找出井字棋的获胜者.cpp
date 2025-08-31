/*
 * @lc app=leetcode.cn id=1275 lang=cpp
 *
 * [1275] 找出井字棋的获胜者
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    string tictactoe(vector<vector<int>> &moves)
    {
        int chessboard[3][3] = {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}};
        int step = 1;
        for (int i = 0; i < moves.size(); i++)
        {
            chessboard[moves[i][0]][moves[i][1]] = step;
            step = -step;
        }
        // 查对角
        int val_1 = chessboard[0][0] + chessboard[1][1] + chessboard[2][2];
        int val_2 = chessboard[0][2] + chessboard[1][1] + chessboard[2][0];
        if (val_1 == 3 || val_2 == 3)
            return "A";
        if (val_1 == -3 || val_2 == -3)
            return "B";
        // 行扫查
        for (int i = 0; i < 3; i++)
        {
            int val = chessboard[i][0] + chessboard[i][1] + chessboard[i][2];
            if (val == 3)
                return "A";
            if (val == -3)
                return "B";
        }
        // 列扫查
        for (int j = 0; j < 3; j++)
        {
            int val = chessboard[0][j] + chessboard[1][j] + chessboard[2][j];
            if (val == 3)
                return "A";
            if (val == -3)
                return "B";
        }
        // 查步数
        if (moves.size() == 9)
            return "Draw";
        else
            return "Pending";
    };
};
// @lc code=end
