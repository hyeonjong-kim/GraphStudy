//
// Created by 김현종 on 2021/05/25.
//
#include "TransformFormat.h"

tMatrix CSR(const matrix& M)
{
    int m = M.size();
    int n = M[0].size(), i, j;
    vi val;
    vi rowPtr = {0};
    vi col;
    int NNZ = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (M[i][j] != 0) {
                val.push_back(M[i][j]);
                col.push_back(j);

                NNZ++;
            }
        }
        rowPtr.push_back(NNZ);
    }

    return {rowPtr, col, val};
}

tMatrix CSC(const matrix& M)
{
    int m = M.size();
    int n = M[0].size(), i, j;
    vi val;
    vi colPtr = {0};
    vi row;
    int NNZ = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (M[j][i] != 0) {
                val.push_back(M[j][i]);
                row.push_back(j);

                NNZ++;
            }
        }
        colPtr.push_back(NNZ);
    }

    return {colPtr, row, val};
}