/******************************************************************************
 * PROJECT: 18 BASIC WHILE LOOP EXERCISES
 * Description: A complete collection of logic-building tasks using C++ While Loops.
 * How to run: Uncomment the main() of the specific task you want to test.
 ******************************************************************************/

#include <iostream>
using namespace std;

// ============================================================
// 1. Print numbers from 1 to N
// ============================================================
/*
int main() {
    int n, i=1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i << " "; i++; }
    return 0;
}
*/

// ============================================================
// 2. Print numbers from N to 1 (Reverse counting)
// ============================================================
/*
int main() {
    int n;
    cout << "Enter N: "; cin >> n;
    while (n >= 1) { cout << n << " "; n--; }
    return 0;
}
*/

// ============================================================
// 3. Print all even numbers from 1 to N
// ============================================================
/*
int main() {
    int n, i=2;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i << " "; i += 2; }
    return 0;
}
*/

// ============================================================
// 4. Print all odd numbers from 1 to N
// ============================================================
/*
int main() {
    int n, i=1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i << " "; i += 2; }
    return 0;
}
*/

// ============================================================
// 5. Print first N natural numbers
// ============================================================
/*
int main() {
    int n, i=1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i << " "; i++; }
    return 0;
}
*/

// ============================================================
// 6. Print first N multiples of 2
// ============================================================
/*
int main() {
    int n, i = 1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i * 2 << " "; i++; }
    return 0;
}
*/

// ============================================================
// 7. Print first N multiples of 5
// ============================================================
/*
int main() {
    int n, i = 1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i * 5 << " "; i++; }
    return 0;
}
*/

// ============================================================
// 8. Print square of numbers from 1 to N
// ============================================================
/*
int main() {
    int n, i = 1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i * i << " "; i++; }
    return 0;
}
*/

// ============================================================
// 9. Print cube of numbers from 1 to N
// ============================================================
/*
int main() {
    int n, i=1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i * i * i << " "; i++; }
    return 0;
}
*/

// ============================================================
// 10. Print numbers from 1 to N with their squares
// ============================================================
/*
int main() {
    int n, i=1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i << " -> Square: " << i * i << endl; i++; }
    return 0;
}
*/

// ============================================================
// 11. Print all numbers divisible by 3 from 1 to N
// ============================================================
/*
int main() {
    int n, i=3;
    cout << "Enter N: "; cin >> n;
    while (i <= n) { cout << i << " "; i += 3; }
    return 0;
}
*/

// ============================================================
// 12. Print numbers divisible by both 3 and 5 from 1 to N
// ============================================================
/*
int main() {
    int n, i = 1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) {
        if (i % 3 == 0 && i % 5 == 0) cout << i << " ";
        i++;
    }
    return 0;
}
*/

// ============================================================
// 13. Print numbers from A to B
// ============================================================
/*
int main() {
    int A, B;
    cout << "Enter A: "; cin >> A;
    cout << "Enter B: "; cin >> B;
    while (A <= B) { cout << A << " "; A++; }
    return 0;
}
*/

// ============================================================
// 14. Print numbers from A to B in reverse order
// ============================================================
/*
int main() {
    int A, B;
    cout << "Enter A: "; cin >> A;
    cout << "Enter B: "; cin >> B;
    while (A >= B) { cout << A << " "; A--; }
    return 0;
}
*/

// ============================================================
// 15. Print multiplication table of a number N (up to 10)
// ============================================================
/*
int main() {
    int n, i = 1;
    cout << "Enter number for table: "; cin >> n;
    while (i <= 10 ) {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}
*/

// ============================================================
// 16. Print first N multiples of a given number K
// ============================================================
/*
int main() {
    int n, k, i = 1;
    cout << "How many multiples (N): "; cin >> n;
    cout << "Of which number (K): "; cin >> k;
    while (i <= n) { cout << k * i << " "; i++; }
    return 0;
}
*/

// ============================================================
// 17. Count numbers from 1 to N (Increment a counter)
// ============================================================
/*
int main() {
    int n, count = 1;
    cout << "Enter N: "; cin >> n;
    while (count <= n) {
        // Just printing the counter as it increments
        cout << count << " ";
        count++;
    }
    return 0;
}
*/

// ============================================================
// 18. Print numbers from 1 to N, skipping multiples of 4
// ============================================================
/*
int main() {
    int n, i = 1;
    cout << "Enter N: "; cin >> n;
    while (i <= n) {
        // Check if the number is NOT divisible by 4
        if (i % 4 != 0)
            cout << i << " ";
        i++;
    }
    return 0;
}
*/

