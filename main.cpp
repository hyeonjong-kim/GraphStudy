#include <iostream>
#include <vector>
#include "TransformFormat.h"
#include "GraphUtils.h"

using namespace std;

int main()
{
    matrix M = {
            { 0, 0, 0, 0, 1 },
            { 5, 8, 0, 0, 0 },
            { 0, 0, 3, 0, 0 },
            { 0, 6, 0, 0, 1 },
    };

    matrix M2 = {
            { 1, 1 },
            { 1, 1 },
            { 1, 1 },
            { 1, 1 },
            { 1, 1 }
    };

    tMatrix val1 = CSC(M);
    printMatrix(M);
    printVector(get<0>(val1), "colPstr = ");
    printVector(get<1>(val1), "row = ");
    printVector(get<2>(val1), "val = ");
    //CSRMul(val1, M2);

    return 0;
}