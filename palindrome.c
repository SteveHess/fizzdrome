/* 
Challenge #2: Palindrome and Reverse Lexical Sort
Ensure there is a text file with desired test cases of several 
lines of strings inthe same directory as code.
In the command line from this directory, compile with: gcc -o palindrome palindrome.c
Run with: ./palindrome input.txt
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>

//function to remove white space characters from string
char* deblank(char* input) {
    int i, j;
    char *output = input;
	int length = strlen(input);

	// iterate over each character in the string
    for (i = 0, j = 0; i < length; i++, j++) {

		// only include characters in the return string if it is not a space
        if (input[i] != ' ') {                           
            output[j] = input[i];  
		} else {
            j--;
		}                                     
    }

    output[j]='\0';

    return output;
}

//string reverse function
char *reverse(char *inString)
{
	int i;
	int len = strlen(inString);
	char* retString = malloc(len+1);

	if (retString != NULL) {
		for(i = 0 ; i < len-1; ++i)	{
			retString[len-1-i] = inString[i];
		}
		retString[len] = '\0';
	}
	return retString;
}

//function to compare if two strings are equal, ignore case
int compare_string(char* first, char* second) {
	int i;	
	int j = 1;

	// iterate over the characters in the string and return -1 if a 
	// character in the orginal string and reversed string are not a match
	for (i = 0; i < strlen(first) - 1; i++) {
		if (tolower(first[i]) != tolower(second[j])) {
			return -1;		
		}	
		j++;
	}
	return 0;
}

//reverse lexicon sort function
char* revLex(char* str) {
	int h, j, l;
	int len = strlen(str);
	char temp;

	for (h = 0; h < len; h++) {
		for (j = 0; j < len; j++) {
			if (str[j] < str[j+1]) {
				temp = str[j+1];
				str[j+1] = str[j];
				str[j] = temp;
			}		
		}
	}	
	return str;
}

int main(int argc, char* argv[]) {
	char filename[256];
	char line[100];
	char* newLine;
	char* rev;
	char* revL;
	int c;

	// open and store the file passed via command line argument
	FILE *file = fopen(argv[1], "r");
	if (file != NULL) {

		// while the next line of file exists
		while (fgets(line, sizeof line, file) != NULL) {

			// remove spaces from the string, reverse the string
			newLine = deblank(line);		
			rev = reverse(newLine);

			// c stores the number of character differences between the two strings
			c = compare_string(newLine, rev);

			revL = revLex(newLine);
			
			if (c == 0) {
				printf("Yes | "); 
			} else {
				printf("No | ");
			}
			printf("%s", revL);
		}
		fclose(file);	
	} else {
		perror(filename);	
	}
	return 0;
}
