#include <stdio.h>
int main(void)
{
  float num1,num2;
  int i;
  printf("M e n u");
  printf("\n1. Add(+)\n2. Subtract(-)\n3. Multiply(*)\n4. Divide(/)\n5. Modulo(%)\n");
  printf("Enter Number 1: ");
  scanf("%f",&num1);
  printf("Enter Number 2: ");
  scanf("%f",&num2);
  printf("Select Choice: ");
  scanf("%d",&i);

  switch(i){
    case 1:
    printf("%.3f",num1+num2);
    break;
    case 2:
    printf("%.3f",num1-num2);
    break;
    case 3:
    printf("%.3f",num1*num2);
    break;
    case 4:
    if(num2==0){
      printf("Divide by ZERO!!!");
    }
    printf("%.3f",num1/num2);
    break;
    case 5:
    if(num2==0){
      printf("Divide by ZERO!!!");
    }
    printf("Answer is %.3f MOD %.3f = %d",num1,num2,(int)num1%(int)num2); 
  }
  return 0;
}
