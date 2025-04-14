#include <bits/stdc++.h>
using namespace std;

/*

Patterns:
- To print pattern we always we nested loops.
- Somehow connect the rows to the columns by forming a logic.
- Observe symmetry in the pattern or check if a pattern is a combination of
two or more similar patterns.


Pattern 1:
Input: N = 3
Output:
* * *
* * *
* * *

*/

void pattern1(int n) {
  for (int i = 0; i < n; i++) {   // Outer loop for rows
    for (int j = 0; j < n; j++) { // Inner loop for columns
      cout << "*";                // Print a single star
    }
    cout << "\n"; // Move to the next line after each row
  }
}

int main() {
  cout << "Enter the number of test cases: ";
  int test;
  cin >> test;

  // Loop through each test case
  for (int i = 0; i < test; i++) {
    cout << "Enter the number (N): ";
    int num;
    cin >> num;
    pattern1(num); // Call function to print pattern1
  }
}
