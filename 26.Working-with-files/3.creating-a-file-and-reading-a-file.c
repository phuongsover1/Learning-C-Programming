#include <stdio.h>
int main(void) {

  // Step #1 - Creating a Pointer that points to a FILE type
  FILE *fp;

  // Step #2 - opening/access to a file
  // fp = fopen(<file_name>, <type_of_operation>>);
  // Type of operation:
  //  - 'w' - Writing
  //  - 'r' - Reading
  //  - 'a' - Appending
  fp = fopen("myFirstFile.txt", "w");
  // Step #3 - Make sure the opening was successful
  if (fp == NULL) // if that's the case, the File Opening has failed
    puts("The Opening of the file has Failed");
  else // fp != NULL
  {
    puts("The file is Opened for Writing!");
    // Step #4 - Working with the file (Reading/Wrting/etc)
    // Step #5 - Close the file.
    fclose(fp);
  }
  // Code for working with the file..

  return 0;
}
