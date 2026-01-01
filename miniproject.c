#include <stdio.h>

int main() {
    int num, originalNum;
    int digit, count = 0;
    int sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 1: Count number of digits
    while (num != 0) {
        count++;
        num = num / 10;
    }

    num = originalNum;

    // Step 2: Extract digits and calculate power
    while (num != 0) {
        digit = num % 10;

        int power = 1;
        for (int i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        num = num / 10;
    }

    // Step 3: Compare result
    if (sum == originalNum) {
        printf("Valid Armstrong Number\n");
    } else {
        printf("Invalid Armstrong Number\n");
    }

    return 0;
}

/* 
Output
Enter a 3-digit number: 564
Invalid Armstrong Number

Enter a 3-digit number: 153
Valid Armstrong Number

*/