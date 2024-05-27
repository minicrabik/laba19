cmake_minimum_required(VERSION 3.26)
project(laba19 C)

set(CMAKE_C_STANDARD 11)

add_executable(laba19 main.c
        data_structures/matrix/matrix.h
        data_structures/matrix/matrix.c

        data_structures/string/string.h
        data_structures/string/string.c

        data_structures/vector/vector.c
        data_structures/vectorVoid/vectorVoid.c

        data_structures/string/task/letters_belong_string.h
        data_structures/string/task/print_revers_ordered.h
        data_structures/string/task/find_anagram_words.h

        task/matrixTransposition.h
        task/convertFloat.h
        task/evaluateExpression.h

)
