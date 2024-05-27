#include "task/matrixTransposition.h"
#include "task/convertFloat.h"
#include "task/evaluateExpression.h"

void test() {
    test_matrix_transpose();
    test_convert_float();
    test_evaluate();
}

int main() {
    test();

    return 0;
}