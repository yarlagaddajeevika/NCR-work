#include <stdio.h>
#include <stdlib.h>

void check_comment(char);  // checks for both types of comments, then passes on control to below comments
void multi_comment();   //  handles multiline comments
void single_comment();   // handles single line comments

FILE *fp1, *fp2;

int remove()
{
	char c;
	fopen_s(&fp1,"test.txt", "r");   // open the first file in read mode
	fopen_s(&fp2,"abcd.txt", "w");    // open the second file in write mode

	while ((c = fgetc(fp1)) != EOF)       // read the file character by character
		check_comment(c);   // check for each character if it seems like the beginning of a comment

							//  close both the files at the end of the program
	fclose(fp1);
	fclose(fp2);

	return 0;
}


//handles both types of comments
void check_comment(char c)
{
	char d;

	if (c == '/')   
	{
		if ((d = fgetc(fp1)) == '*')   
			multi_comment();  

		else if (d == '/')   
		{
			single_comment();

		}
		else
		{
			// if both the cases fail, it is not a comment, so we add the character as it is in the new file.
			fputc(c, fp2);
			fputc(d, fp2);
		}
	}

	// again, if all above fails, we add the character as it is in the new file.
	else
		fputc(c, fp2);
}


void multi_comment()
{

	char d, e;

	while ((d = fgetc(fp1)) != EOF)   
	{
		
		if (d == '*')   
		{
			e = fgetc(fp1);  

			if (e == '/')  // if the comment 'has' ended, return from the function
				return;
		}
	}

}

void single_comment()
{
	char d, e;

	while ((d = fgetc(fp1)) != EOF)  
	{
		if (d == '\n')   
			return;  // if the comment 'has' ended, return from the function

	}

}