#include <stdio.h>
#include <conio.h>

char* multiploGetcheNumerico(int quantDigitos)
{
  char* string;
  int i = 0;
  while(i < quantDigitos)
  {
    char caractere = getch();
    if(caractere >= '0' && caractere <= '9')
    {
      printf("%c", caractere);
      *(string + i) = caractere;
      i++;
    }
    else if(caractere == 8)
    {
      if(i != 0)
      {
        printf("%c%c%c%c", 0, 8, 0, 8);
        i--;
      }
    }
  }
  return string;
}

int main() 
{
    char* string = multiploGetcheNumerico(2); 

    printf("\n");
    int i = 0;
    for(; i < 2; i++){
        printf("%c", *(string + i));
    }
    return 0;
}