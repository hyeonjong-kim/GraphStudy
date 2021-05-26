//
// Created by 김현종 on 2021/05/25.
//

#ifndef GRAPHPROJECT_GRAPHUTILS_H
#define GRAPHPROJECT_GRAPHUTILS_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> matrix;
typedef tuple<vi, vi, vi> tMatrix;

void printMatrix(const matrix& M);
void printVector(const vi& V, string msg);
void CSRMul(const tMatrix& A, const matrix& B, int d=1);

#endif //GRAPHPROJECT_GRAPHUTILS_H
