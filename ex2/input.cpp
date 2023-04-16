/**
 * @file
 * @author [freemanbach](https://github.com/freemanbach
 * @brief Simple C++ code
 *
 */

#include <algorithm>  /// For std::copy
#include <array>      /// For std::array
#include <cassert>    /// For assert
#include <cstring>    /// For std::memcopy
#include <iostream>   /// For IO operations
#include <string>     /// For strings
#include <vector>     /// For std::vector

int main(int argc, char **argv) {
    std::string input;
    std::cout << "Enter in some data >> ";
    // insert data
    std::getline(std::cin, input);
    // output data
    std::cout << "value is: " << input << std::endl;
    return 0;
}
