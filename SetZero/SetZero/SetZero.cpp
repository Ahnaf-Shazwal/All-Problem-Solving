// SetZero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>>matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    matrix.push_back({});
    matrix.push_back({});
    
    int m = matrix.size()-2;
    int n = matrix[0].size();
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[m + 0].push_back(i);
                matrix[m + 1].push_back(j);
            }
        }
    }
    for (int a = 0; a < matrix[m].size(); a++) {
        for (j = 0; j < n; j++) {
            matrix[matrix[m][a]][j] = 0;
        }
    }
    for (int b = 0; b < matrix[m+1].size(); b++) {
        for (i = 0; i < m; i++) {
            matrix[i][matrix[m+1][b]] = 0;
        }
    }
    matrix.pop_back();
    matrix.pop_back();

    return 0;
}

//=========================     Copy Paste the below code to LeetCode website   =====================
//class Solution {
//public:
//    void setZeroes(vector<vector<int>>& matrix) {
//        matrix.push_back({});
//        matrix.push_back({});
//        int m = matrix.size() - 2;
//        int n = matrix[0].size();
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (matrix[i][j] == 0) {
//                    matrix[m + 0].push_back(i);
//                    matrix[m + 1].push_back(j);
//                }
//            }
//        }
//        for (int a = 0; a < matrix[m].size(); a++) {
//            for (int j = 0; j < n; j++) {
//                matrix[matrix[m][a]][j] = 0;
//            }
//        }
//        for (int b = 0; b < matrix[m + 1].size(); b++) {
//            for (int i = 0; i < m; i++) {
//                matrix[i][matrix[m + 1][b]] = 0;
//            }
//        }
//        matrix.pop_back();
//        matrix.pop_back();
//    }
//};