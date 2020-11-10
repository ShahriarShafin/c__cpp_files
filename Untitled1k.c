#include <stdio.h>/* C Standard Input and Output Library*/
#define array_size 1000 /* Constant size of the array to be used in storage of strings that makes up the dictionary*/

/* Variable declarations */
char dictionary_array[array_size][20]={"david", "enoch", "cheese", "donkey", "orange", "banana", "child", "globe", "family", "aeroplane", "vehicle", "shell", "plant", "treatment"};
char word_to_be_searched[20], *pointer_dictionary_array, *pointer_word_to_be_searched, loop_program_character;
int counter;

 /* Prototyping of functions*/
char* search_dictionary_for_word(char *pointer_dictionary_array, char *pointer_word_to_be_searched);
char* add_word_in_dictionary (char *pointer_dictionary_array, char *pointer_word_to_be_searched);


 int main() /* The main method*/
 {  /* Brief details on the screen about the program*/
    printf(" /*************************************************************************\n *                   Mureithi David Wachira                               *\n *                   P15/2204/2011                                        *\n *                                                                        *\n *                   University of Nairobi                                *\n *                   School of Computing & Informatics                    *\n *                                                                        *\n *                   Course: PROGRAMMING AND PROBLEM SOLVING  (CSC 121)   *\n *                   Date:   Tuesday 02nd April 2013                      *\n *                                                                        *\n *                   A program that searches for a word in a              *\n *                   dictionary.                                          *\n *                         - Create a small dictionary of strings         *\n *                   	   - Not in order                                 *\n *                   	   - Create an interface for user to search       *\n *                           for a word in the dictionary                 *\n *                                                                        *\n *                   If the word is not found, the word is added to       *\n *                   the dictionary.                                      *\n *                   The dictionary has 1000 words (English/Swahili)      *\n *                                                                        *\n *************************************************************************/\n");

    do
    {       counter=0;
            printf("Please enter the word to be searched :\n");          /* Prompt to instruct use to enter the string to be searched*/
            scanf("%s",&word_to_be_searched);                            /* Capture of the search string by the system*/
            search_dictionary_for_word(dictionary_array, word_to_be_searched);

            printf("\n------------------------------------------------------------------------------\nDo you want to search for another word? \nPress Y to continue or any other \nto exit : ");
            scanf(" %c", &loop_program_character);
            printf("\n------------------------------------------------------------------------------\n");
    }
    while (loop_program_character=='y'||loop_program_character=='Y');

    return 0;/* An indication that the program runs successfully*/
 } /* The end of the main method*/

char* search_dictionary_for_word(char *pointer_dictionary_array, char *pointer_word_to_be_searched)
{   while (*pointer_dictionary_array!='\0')         /* Until the end of array character is encountered*/
     {
             if ((strcmp(pointer_dictionary_array, pointer_word_to_be_searched))==0) //&&(strlen(pointer_dictionary_array)!=strlen(pointer_word_to_be_searched)) &&(*pointer_dictionary_array-*pointer_word_to_be_searched!=0))
                 {   printf("\nThe word \"%s\" is in the dictionary at position %d\n",word_to_be_searched, pointer_dictionary_array);          /* Ouput to the screen to show that the two strigns are equal*/
                     return 0;
                 }

             else {
                     printf("Searched for \"%3s\" but found \"%3s\" %-5s\t\t%5d\n", word_to_be_searched, pointer_dictionary_array, " at position", pointer_dictionary_array);
                     counter = counter+1;
                     pointer_dictionary_array= &dictionary_array[counter][0];         /* Pointer moves to the next index of the array of characters (string)*/
                  }
     }

     add_word_in_dictionary (dictionary_array, word_to_be_searched);                   /* Calling the function add_word_in_dictionary() */
     return pointer_dictionary_array;
}

char* add_word_in_dictionary (char *pointer_dictionary_array, char *pointer_word_to_be_searched)
{
        pointer_dictionary_array=&dictionary_array[counter][0];
        strcpy(pointer_dictionary_array, pointer_word_to_be_searched);
        printf("\nThe word \"%s\" has not been found in the dictionary but has been added \nin the dictionary at position %d\n",pointer_word_to_be_searched, pointer_dictionary_array);
        return pointer_dictionary_array;
}
