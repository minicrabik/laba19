#include "task/matrixTransposition.h"
#include "task/convertFloat.h"
#include "task/evaluateExpression.h"
#include "task/filterWord.h"
#include "task/leaveLongestWord.h"
#include "task/removeTruePolynomial.h"
#include "task/rearrangeNumbers.h"
#include "task/transposeNonSymmetricMatrix.h"
#include "task/getBestTeam.h"
#include "task/updateProduct.h"

void test() {
    test_matrix_transpose();
    test_convert_float();
    test_evaluate();
    test_filter_word();
    test_leave_longest();
    test_remove_true_polynomial();
    test_rearrange_numbers();
    test_transpose_non_symmetric_matrix();
    test_get_best_team();
    test_update_product();
}

int main() {
    test();

    return 0;
}