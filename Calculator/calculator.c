#include <stdio.h>


int main(int argc, char *argv[])
{
  char operator;
  double num1, num2, res;
  int validOperation = 1;
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("Enter the operator. (supported: +, -, *, /): ");
  scanf(" %c", &operator);
  printf("Enter the second number: ");
  scanf("%lf", &num2);

  switch(operator){
    case '+':
      res = num1+num2;
      break;
    
    case '-':
      res = num1-num2;
      break;
    
    case '*':
      res = num1*num2;
      break;

    case '/':
      if(num2 == 0) printf("Error: Division by zero is not allowed.\n");
      res = num1/num2;
      break;

    default:
      printf("Error: Invalid operator.\n");
      validOperation = 0;  
      break;
  }

  if(validOperation){
    printf("Result: %.2lf %c %.2lf = %.2lf \n", num1, operator, num2, res);
  }

  return res;
}
