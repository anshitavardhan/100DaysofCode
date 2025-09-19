/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int n, digit, product = 1;
    int hasOdd = 0;  // to check if any odd digit exists

    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        if(digit % 2 != 0) {   // check odd
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if(hasOdd == 0)
        product = 1;   // no odd digits, default is 1

    printf("%d", product);

    return 0;
}

