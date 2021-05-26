//
// Created by 김현종 on 2021/05/25.
//

#ifndef GRAPHPROJECT_TRANSFORMFORMAT_H
#define GRAPHPROJECT_TRANSFORMFORMAT_H

#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> matrix;
typedef tuple<vi, vi, vi> tMatrix;

tuple<vi, vi, vi> CSR(const matrix& M);
tuple<vi, vi, vi> CSC(const matrix& M);


#endif //GRAPHPROJECT_TRANSFORMFORMAT_H
