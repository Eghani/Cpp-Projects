# Pattern Printing in C++

This project demonstrates various pattern printing programs using C++. Each function prints a different pattern based on the input size `n`. This is aimed at beginners to help understand the use of nested loops in creating different shapes and designs.

## Overview

The code includes functions to print:

1. **Pattern 1**: Right-angled triangle of stars (`*`).
2. **Pattern 2**: Duplicate of Pattern 1 (right-angled triangle).
3. **Pattern 3**: Right-angled triangle of increasing numbers.
4. **Pattern 4**: Right-angled triangle where each row contains the same number.
5. **Pattern 5**: Inverted right-angled triangle of stars.
6. **Pattern 6**: Inverted triangle with increasing numbers in each row.
7. **Pattern 7**: Pyramid of stars.
8. **Pattern 8**: Inverted pyramid of stars.
9. **Pattern 10**: Diamond shape of stars.
10. **Pattern 11**: Binary pattern with alternating 0s and 1s.
11. **Pattern 12**: Palindromic pattern with numbers increasing and then decreasing.
12. **Pattern 13**: Floyd's triangle.
13. **Pattern 14**: Triangle pattern with increasing alphabets.
14. **Pattern 15**: Inverted triangle with alphabets.
15. **Pattern 16**: Triangle pattern with repeating alphabets starting from `A`.
16. **Pattern 17**: Diamond pattern with alphabets, increasing towards the middle and then decreasing.
17. **Pattern 18**: Square pattern filled with stars.

## Code Structure

The code uses a single `main` function that tests each pattern with different values of `n`. Each pattern function follows a similar structure:
- Looping through rows and columns.
- Using nested loops to print characters (stars, numbers, alphabets).
- Adjusting spaces for alignment in certain patterns.

## Usage

1. Clone the repository and compile the C++ code using any C++ compiler.
2. Run the executable and observe the patterns printed for different values of `n`.

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function declarations for each pattern
void pattern1(int n) { /* ... */ }
void pattern2(int n) { /* ... */ }
void pattern3(int n) { /* ... */ }
void pattern4(int n) { /* ... */ }
void pattern5(int n) { /* ... */ }
void pattern6(int n) { /* ... */ }
void pattern7(int n) { /* ... */ }
void pattern8(int n) { /* ... */ }
void pattern10(int n) { /* ... */ }
void pattern11(int n) { /* ... */ }
void pattern12(int n) { /* ... */ }
void pattern13(int n) { /* ... */ }
void pattern14(int n) { /* ... */ }
void pattern15(int n) { /* ... */ }
void pattern16(int n) { /* ... */ }
void pattern17(int n) { /* ... */ }
void pattern18(int n) { /* ... */ }

// Main function to test patterns
int main() {
    int n;
    int testCases[] = {3, 5, 7, 9};
    for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); i++) {
        n = testCases[i];
        cout << "Test Case " << (i + 1) << ": n = " << n << endl;
        pattern12(n);
    }
    return 0;
}
