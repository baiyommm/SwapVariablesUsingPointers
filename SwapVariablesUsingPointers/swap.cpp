#include "swap.h"

namespace SwapFunctions {
    // Function to swap two variables using pointers
    void swap(int* a, int* b) {
        int temp = *a;   // Store the value of 'a' in a 'temp' variable
        *a = *b;        // Assign the value of 'b' to 'a'
        *b = temp;      // Assign the value of 'temp' to b
    }
}
