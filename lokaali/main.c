#include <stdio.h>
#include <locale.h>



int main()
{
  setlocale(LC_ALL, "Finnish_Finland.1252");
  printf("����!\n");
  return 0;
}
