#include <stdio.h>
#include <string.h>

/*
    Sources:
        1 - http:(https://stackoverflow.com/questions/77380612/why-statement-doesnt-show-up-when-input?answertab=createdasc#tab-top )
*/

int main ()//L5e$e55e
{
    //Holder for the specific qualification needed for the password
    int Upper= 0;
    int Lower=0;
    int digit= 0;
    int symbol=0;
    int x = 1; // set x =1 as a boolean value to help print when all qualification are satisfy


    char password[10];//  use 10 character instead of 8 to ensure that the input buffer won't mess up
    printf("enter password:");
    scanf ("%s",&password);

        if (strlen(password)< 8) {//this will check to see if the password is shorter than 8 character or not
        printf("password have insufficient length !\n");
       x = 0; //x is false only when the condition were not met
        }
 for (int i = 0; i < strlen(password); i++)
    {
        if (isupper(password[i]))  // "isupper()" will give out false if there no upper case character
            Upper++;
    }

    if (Upper < 1)// [1]
    {
        printf("Password should contain at least 1 uppercase character!\n");
        x = 0;
    }
for (int i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))  // "isdigit()" will give out false if there no digit
            digit++;
    }

    if (digit < 1)
    {
        printf("Password should contain at least 3 digit!\n");
        x = 0;
    }
for (int i = 0; i < strlen(password); i++)
    {
        if (islower(password[i]))  // "islower()" will give out false if there no lower case character
            Lower++;
    }

    if (Lower < 3)
    {
        printf("Password should contain at least 3 lower case character!\n");
        x = 0;
    }

for (int i = 0; i < strlen(password); i++)
    {
        if ((isalnum(password[i])==0) && (isspace(password[i])==0)) // this will check the password to see if there symbol by return 0 if there the missing character is not a letter, digit or a space in the passsword
            symbol++;
    }

    if (symbol < 1) // if there no symbol in the password if would return 0 and print out the warning
    {
        printf("Password should contain at least 1 symbol!\n");
    }

    if (x == 1)// this will only print our if all condition are satisfy
    printf("Password create succesfully\n");
    return 0;



}
