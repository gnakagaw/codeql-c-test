#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  //TODO: repalce a nice greeting message.
  printf("Hello, world!\n");

  char *ptr = malloc(10 * sizeof(char));
  strncpy(ptr, "foobar", 10);
  printf("%s\n", ptr);

  // I forgot to call free(ptr)
  
  return 0;
}
