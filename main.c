#include "task/matrixTransposition.h"
#include "task/convertFloat.h"
#include "task/evaluateExpression.h"
#include "task/filterWord.h"
#include "task/leaveLongestWord.h"
#include "task/removeTruePolynomial.h"

void test() {
    test_matrix_transpose();
    test_convert_float();
    test_evaluate();
    test_filter_word();
    test_leave_longest();
    test_remove_true_polynomial();
}

int main() {
    test();

    return 0;
}