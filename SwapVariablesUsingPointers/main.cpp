#include <iostream>
#include "swap.h"

using namespace std;

int main() {
    
    int x = 5;
    int y = 10;

    cout << x << ", " << y << endl; // Displays 5, 10

    // Swap Function from namespace SwapFunction
    SwapFunctions::swap(&x, &y);

    cout << x << ", " << y << endl; // Displays 10, 5

    return 0;
}
