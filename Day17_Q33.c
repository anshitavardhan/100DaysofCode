/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    int result = 0;

    scanf("%d", &n);

    original = n;

    // Count digits
    int temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powers
    temp = n;
    while(temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if(result == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

