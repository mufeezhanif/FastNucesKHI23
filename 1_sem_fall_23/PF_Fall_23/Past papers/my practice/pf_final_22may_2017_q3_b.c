#include <stdio.h>
#include <ctype.h>

int main() {
  FILE *fp = fopen("pf_final_22may_2017_q3_b.txt", "r+"); // open the file in read and write mode
  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }
  int ch; // variable to store the current character
  int first = 1; // flag to indicate the first letter of a word
  while ((ch = fgetc(fp)) != EOF) { // loop until the end of file
    if (first && islower(ch)) { // if the first letter is lowercase
      fseek(fp, -1, SEEK_CUR); // move the file pointer one position back
      fputc(toupper(ch), fp);
	  printf("\n\t\t%d",ftell(fp)); // overwrite the letter with uppercase
      fseek(fp, 0, SEEK_CUR); // move the file pointer to the current position
    }
    first = (ch == ' ' || ch == '\n'); // update the flag based on the character
  }
  fclose(fp); // close the file
  return 0;
}
