/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int n, temp, digit, fact, sum = 0, i;
    scanf("%d", &n);

    temp = n;
    while(n > 0) {
        digit = n % 10;
        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if(sum == temp) {
        printf("Strong number");
    } else {
        printf("Not strong number");
    }
    return 0;
}

