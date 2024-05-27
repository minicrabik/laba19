#include "task/matrixTransposition.h"
#include "task/convertFloat.h"
#include "task/evaluateExpression.h"
#include "task/filterWord.h"

void test() {
    test_matrix_transpose();
    test_convert_float();
    test_evaluate();
    test_filter_word();
}

int main() {
    test();

    return 0;
}