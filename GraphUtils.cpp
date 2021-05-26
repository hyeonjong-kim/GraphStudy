//
// Created by 김현종 on 2021/05/25.
//
#include "GraphUtils.h"

void printMatrix(const matrix& M)
{
    int m = M.size();
    int n = M[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }
}

void printVector(const vi& V, string msg)
{
    cout << msg << "[ ";
    for_each(V.begin(), V.end(), [](int a) {
        cout << a << " ";
    });
    cout << "]" << endl;
}

void CSRMul(const tMatrix& A, const matrix& B, int d){

    int AColSize = *max_element(get<1>(A).begin(), get<0>(A).end()) + 1;
    int ARowSize = get<0>(A).size();
    int BColsize = B.size();
    int BRowsize = B[0].size();

    if(ARowSize != BColsize) return;

    matrix result(AColSize, vi(BRowsize,0));

    for (int i = 0; i < BRowsize; i++){
        for(int j = 0; j < BColsize; j++){
            for(int k = get<0>(A)[j]; k < get<0>(A)[j+1]; k++){
                result[j][i] = result[j][i] + get<2>(A)[k] * (d*B[get<1>(A)[k]][i]);
            }
        }
    }
    printMatrix(result);
}

void CSCMul(const tMatrix& A, const matrix& B, int d){

    int AColSize = *max_element(get<1>(A).begin(), get<0>(A).end()) + 1;
    int ARowSize = get<0>(A).size();
    int BColsize = B.size();
    int BRowsize = B[0].size();

    if(get<0>(A).size() != B.size()) return;

    matrix result(get<0>(A).size()-1, vi(B[0].size(),0));

    for (int i = 0; i < B[0].size(); i++){
        for(int j = 0; j < B.size(); j++){
            for(int k = get<0>(A)[j]; k < get<0>(A)[j+1]; k++){
                result[j][i] = result[j][i] + get<2>(A)[k] * (d*B[get<1>(A)[k]][i]);
            }
        }
    }

    printMatrix(result);
}