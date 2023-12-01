#include <stdio.h>
#include <string.h>

/*
    Sources:
        1 - “Why Statement Doesn’t Show up When Input?” Stack Overflow, stackoverflow.com/questions/77380612/why-statement-doesnt-show-up-when-input?answertab=createdasc&newreg=d868225c95114bfdae92bb952702df26.
         Accessed 12 Nov. 2023.
        2 - GeeksforGeeks. (2017). isupper() function in C Language. [online] Available at: https://www.geeksforgeeks.org/isupper-function-c-language/.
         Accessed 12 Nov. 2023.

*/

int main ()
{
    //Holder for the specific qualification needed for the password
    int Upper= 0;
    int Lower=0;
    int digit= 0;
    int symbol=0;
    int x = 1; // set x =1 as a boolean value to help print when all qualification are satisfy


    char password[10];//  use 10 character instead of 8 to ensure that the input buffer won't mess up
    printf("enter password that have similar format to L5e$e55e:");
    scanf ("%s",&password);

        if (strlen(password)< 8) {//this will check to see if the password is shorter than 8 character or not
        printf("password have insufficient length !\n");
       x = 0; //x is false only when the condition were not met
        }


 for (int i = 0; i < strlen(password); i++)
    {
        if (isupper(password[0]))  // "isupper()" will give out false if there no upper case character [2]
            Upper++;
    }
    if (Upper <1)
    {
        printf("Password should start with an uppercase character!\n");
        x = 0;
    }

for (int i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[1,5,6]))  // "isdigit()" will give out false if there no digit
            digit++;
    }

    if (digit < 1)
    {
        printf("second,sixth and seventh character should be a digit!\n");
        x = 0;
    }
for (int i = 0; i < strlen(password); i++)
    {
        if (islower(password[2,4,7]))  // "islower()" will give out false if there no lower case character were founded in the designated characters
            Lower++;
    }

    if (Lower < 1)
    {
        printf("Third,fifth and eighth characters should be a lower case character!\n");
        x = 0;
    }

for (int i = 0; i < strlen(password); i++)
    {
        if ((isalnum(password[3])==0) && (isspace(password[3])==0)) // this will check the password to see if the fourth character were a symbol or not
            symbol++;
    }

    if (symbol < 1) // if there no symbol in the password if would return 0 and print out the warning
    {
        printf("Fourth character should be a symbol!\n");
        x=0;
    }

    if (x == 1)// this will only print our if all condition are satisfy
    printf("Inputted password have corrected format\n");
    return 0;



}
