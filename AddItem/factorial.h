#pragma once
/**
 * @file
 * @brief Find the [factorial](https://en.wikipedia.org/wiki/Factorial) of a
 * given number
 * @details Calculate factorial via recursion
 * \f[n! = n\times(n-1)\times(n-2)\times(n-3)\times\ldots\times3\times2\times1
 *       = n\times(n-1)!\f]
 * for example:
 * \f$5! = 5\times4! = 5\times4\times3\times2\times1 = 120\f$
 *
 * @author [Akshay Gupta](https://github.com/Akshay1910)
 */

#include <cassert>   /// for assert
#include <iostream>  /// for I/O operations

 /**
  * @namespace
  * @brief Mathematical algorithms
  */
namespace math {

    /**
     * @brief function to find factorial of given number
     * @param n is the number which is to be factorialized
     * @warning Maximum value for the parameter is 20 as 21!
     * cannot be represented in 64 bit unsigned int
     */
    uint64_t factorial(uint8_t n) {
        if ( n > 20) {
            std::cout << "value "<< std::to_string(n) << " is larger than expected !\n";
            std::cout << "exiting.........\n";
            exit(1);
        }
        if (n == 0) {
            return 1;
        }
        else {
            return n * factorial(n - 1);
        }
    }

    /**
     * @brief Self-test implementations
     * @returns void
     */
    void tests() {
        assert(math::factorial(1) == 1);
        assert(math::factorial(0) == 1);
        assert(math::factorial(5) == 120);
        assert(math::factorial(10) == 3628800);
        assert(math::factorial(20) == 2432902008176640000);
        std::cout<<math::factorial(22);
        std::cout << "All tests have passed successfully!\n";
    }
}  // namespace math
