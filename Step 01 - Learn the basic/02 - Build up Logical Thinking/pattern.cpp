#include <bits/stdc++.h>
using namespace std;

/*
Patterns:
- To print pattern we always we nested loops.
- Somehow connect the rows to the columns by forming a logic.
- Observe symmetry in the pattern or check if a pattern is a combination of
two or more similar patterns.
*/

// Pattern 1:
// Input: N = 3
// Output:
// * * *
// * * *
// * * *

void pattern1(int n) {
  for (int i = 0; i < n; i++) {   // Outer loop for rows
    for (int j = 0; j < n; j++) { // Inner loop for columns
      cout << "*";                // Print a single star
    }
    cout << "\n"; // Move to the next line after each row
  }
}

// Pattern 2:
// Input: N = 5
// Output:
// *
// * *
// * * *
// * * * *
// * * * * *

void pattern2(int num) {
  for (int row = 0; row < num; row++) {
    for (int col = 0; col <= row; col++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

// Pattern 2:
// Input: N = 5
// Output:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void pattern3(int num) {
  for (int row = 1; row <= num; row++) {
    for (int col = 1; col <= row; col++) {
      cout << col << " ";
    }
    cout << "\n";
  }
}

void pattern4(int num) {
  for (int row = 1; row <= num; row++) {
    for (int col = 1; col <= row; col++) {
      cout << row << " ";
    }
    cout << "\n";
  }
}

void pattern5(int num) {
  for (int row = 0; row <= num; row++) {
    for (int col = 0; col <= num; col--) {
      cout << "*";
    }
    cout << "\n";
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
    // pattern1(num); // Call function to print pattern1
    // pattern2(num); // Call function to print pattern2
    // pattern3(num); // Call function to print pattern3
    // pattern4(num); // Call function to print pattern4
    pattern5(num); // Call function to print pattern5
  }
}
