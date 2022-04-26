#include<stdio.h>

int main()
{

  int a, b;

  printf("Enter any value for a and b:\n ");
  scanf("%d %d", &a, &b);
  int ID;

 
  printf("Case-1 will perform: Arithemetic Operators\n ");
  printf("Case-2 will perform: Relational Operators\n ");
  printf("Case-3 will perform: Logical Operators\n ");
  printf("Case-4 will perform: Bitwise Operators\n ");
  printf("Case-5 will perform: Increment/Decrement Operators\n ");
  printf("Case-6 will perform: Assignment Operators\n ");
  
  printf("\nPlease enter the ID:\n ");
  scanf("%d", &ID);

  switch(ID){

  case 1 : printf("%d %d %d %d",a+b, a-b, a*b, a/b);break;
  case 2 : printf("%d %d %d %d %d %d",a<b, a>b, a<=b, a>=b,a==b,a!=b);break;
  case 3 : printf("%d %d %d",a&&b, a||b, a=!b);break;
  case 4 : printf("%d %d %d %d",a&b, a|b, a<<b, a>>b);break;
  case 5 : printf("%d %d %d %d",a++, a--, b++, b--);break;
  case 6 : printf("%d %d",a=20, a+=20);break;
   

  }



  return 0;
  }
