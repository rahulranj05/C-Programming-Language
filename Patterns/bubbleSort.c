#include <stdio.h>

int main()
{
  int number[10]={7,6,8,9,0,5,4,3,1,2};

  int p;

  for(int i = 0; i < 10 ; i++)
  {
    for(int j = i+1; j < 10; j++)
    {
      if (number[i]<number[j])
      {
      p = number[i];
      number[i] = number[j];
      number[j] = p;
      }    
    }
  }
  for(int k=0; k<10; k++)
  {
    printf("%d,",number[k]);
  }
}