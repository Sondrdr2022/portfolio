#include<stdio.h>
#include<string.h>
#include <stdlib.h>
/*REFERENCE :
  1 -   Aditya Singh. “Coding Ninjas Studio.” Www.codingninjas.com, 30 June 2023, www.codingninjas.com/studio/library/c-program-to-count-the-number-of-vowels-in-a-string.
    Accessed 12 Nov. 2023.
  2 -  C program to count the number of vowels, consonants and so on (2023) Programiz.
  Available at: https://www.programiz.com/c-programming/examples/vowel-consonant-frequency-string (Accessed: 21 November 2023).
  3 - Portfolio Courses (13/1/2022)Find and print the longest word in a string | C programming example .
  Available at: https://www.youtube.com/watch?v=vpdraEnrFnU (Accessed: 25 November 2023).
  4 - Admin (2021) C program to find the largest/longest string, C Program to Find the Largest/Longest String. Available at: https://www.computerscienceai.com/2017/12/c-program-to-accept-n-strings-and.html
  (Accessed: 28 November 2023).
*/
int main(){
    // initializing and declearing variable
    char sport[100][50];//set sport as a 2 dimensional array with 100 word,each containing 50 character max
    int shortest_vowels = 0;
    int longest_vowels = 0;
    char longest_word[50];
    char shortest_word[50];
    int i,c,d,x;

    //prompt the user to enter a number of sport they want to check
    printf("How many sport do you want to check(max 10 word): ");
    scanf("%d",&x);
    if (x > 10){//if input number is higher than 10
        printf("------------------------------ \n");
        printf ("input number is higher then maximum!\n");
        printf ("Please try again.");
    }
    else if (x<= 0){// if input number is equal to 0 or a negative number
        printf("------------------------------ \n");
        printf("program can't check list with %d",x);
    }
    else{// prompt the user to input a corresponds numbers of sport from the list
        printf("------------------------------ \n");
        printf("Please enter %d sports from this list : \n",x);
        printf("Basketball, Volleyball, Gymnastics, Swimming, Badminton, Archery, Beach-volleyball, Boxing, Cycling, Diving, Equestrian, Fencing,");
        printf("Football, Golf, Handball, Hockey, Bowling, Judo, Karate, Tennis, Weightlifting:\n");
        printf("------------------------------ \n");
    //for loop to help scan function run the the string multiple time with better stability to avoid program crash
    for (int i = 0; i < x; i++) {
        scanf("%s", &sport[i]);
    }


    {// find the longest word from the user input
	int i,max,len1;
	max=strlen(sport[0]);
	for(i=1;i<x;i++)
	{
	len1=strlen(sport[i]);
	if(len1>max)
	{
		c=i;
		max=len1;
	}
}
	printf("Sport that have the longest word is: %s \n",sport[c]);

}
// find the number of vowels in the longest word
strcpy(longest_word,sport[c]);
    for (int i =0;longest_word[i] !='\0';i++){
            int y= longest_word[i];
                if (y == 'a'||y == 'i'||y == 'u'||y == 'e'||y =='o'||y == 'A'||y == 'I'||y == 'U'||y == 'E'||y =='O'){
                   longest_vowels ++; // [1],[2]

    }
}


 printf ("number of vowel in longest word:%d \n",longest_vowels);
 {//find the shortest word from the user input

    int m,min,len2;
	min=strlen(sport[0]);
	for(i=1;i<x;i++)
	{
	len2=strlen(sport[i]);
	if(len2<min)
	{
		d=i;
		min=len2;
	}
}
	printf("Sport that have the shortest word is: %s \n",sport[d]);
	//find the amount of vowel in the shortest word
	strcpy(shortest_word,sport[d]);
	   for (int i =0;shortest_word[i] !='\0';i++){
        ;
            int z= shortest_word[i];
                if (z == 'a'||z == 'i'||z == 'u'||z == 'e'||z =='o'||z == 'A'||z == 'I'||z == 'U'||z == 'E'||z =='O'){
                    shortest_vowels ++;

    }



}

}
printf ("number of vowel in shortest word:%d \n",shortest_vowels);
 }

    return 0;
}
