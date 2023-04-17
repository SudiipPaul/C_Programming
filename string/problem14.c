#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char str[100];
  int i, j;
  char maxRepeatedchar;
  int count = 0;
  int maxCount = 0;
  gets(str);

  for (i = 0; i < strlen(str); i++)
  {
    for (j = 0; j < strlen(str); j++)
    {
      if (str[i] == str[j])
      {
        count++;
      }
    }
    if (maxCount < count)
    {
      maxRepeatedchar = str[i];
    }
  }

  int l = tolower(maxRepeatedchar);
  int u = toupper(maxRepeatedchar);
  printf("%c (or %c)", u, l);
}
