/**
 * @file
 * @author [freemanbach](https://github.com/freemanbach
 * @brief Simple C++ code
 * @info Static Lib Compilation
 */

#include <algorithm>  /// For std::copy
#include <array>      /// For std::array
#include <cassert>    /// For assert
#include <cstring>    /// For std::memcopy
#include <iostream>   /// For IO operations
#include <string>     /// For strings
#include <vector>     /// For std::vector
#include "lib.h"

int main(int argc, char **argv) {
    double data = 0;
    if ( argv[1] == '\0' ) {
        std::cout<<"There is no parameter !"<<std::endl;
    } else {
        data = atof(argv[1]);
        std::cout << reciprocal(data) << std::endl;
    }
    return 0;
}
