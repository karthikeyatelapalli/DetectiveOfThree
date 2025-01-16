// Name: Karthikeya Telapalli
/* Description: Our program is a little detective that has a fascination with the number 3. When you give it any number, 
 it tries to find two things. First, it looks to see if your number has the digit '3' anywhere in it. Next, it checks if 
 the entire number can be divided cleanly by 3. If both these things are true, it excitedly tells you the number is
 "special" by saying "yes". Otherwise, it simply responds with "no". */

#include <stdio.h>
#include <stdbool.h>

// Function takes a number and checks if it has the number 3 in it
bool qualifies_as_unique(int digit) {
    bool found_three = false;  // Let's start by assuming we haven't found our number 3.
    
    // We're making a clone of our number so we don't hurt the original while examining it.
    int replica = digit;

    // Let's go digit by digit, hoping to spot a 3.
    while (replica != 0) {
        // If the present digit is '3'. It sets the flag to true and it exits the loop.
        if (replica % 10 == 3) {
            found_three = true; 
            break;
        }
        replica /= 10;  // Move on to the next digit.
    }

    // Let's see if our number has the 3 AND is also divisible by 3 
    return found_three && (digit % 3 == 0);
}

int main() {
    int user_input; // This is where we'll store the number user will input!
    
    // Request user to provide a number
    printf("Enter input: ");
    scanf("%d", &user_input);
    
    // Let's check if your number qualifies the requirement and print the result
    if (qualifies_as_unique(user_input))
        printf("yes\n"); 
    else
        printf("no\n"); 

    return 0; // End of the program
}
