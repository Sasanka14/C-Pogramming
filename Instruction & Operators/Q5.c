/* Q5. Are the following statements True (1) or False (0)? 
     a. If it’s Saturday & it’s raining -> true
     b. If it’s Friday or it's a holiday -> true
     c. If a number is greater than 9 and less than 100 (2-digit number) -> true
     d. If it’s NOT raining -> false
*/

#include <stdio.h>

int main() {
    int isSaturday = 1; // Assume it is Saturday
    int isRaining = 1;  // Assume it is raining
    int isFriday = 0;   // Assume it is not Friday
    int isHoliday = 1;  // Assume it is a holiday
    int num = 25;       // Assume a 2-digit number

    printf("a. %d\n", isSaturday && isRaining);                // Logical AND
    printf("b. %d\n", isFriday || isHoliday);                   // Logical OR
    printf("c. %d\n", (num > 9) && (num < 100));                // 2-digit number check
    printf("d. %d\n", !isRaining);                              // Logical NOT

    return 0;
}
