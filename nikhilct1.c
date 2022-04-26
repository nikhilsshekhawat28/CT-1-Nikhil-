#include<stdio.h>

int main()

{
 int a,b;
 
 scanf("%d %d",&a, &b); 
 int sum = a+b;

 int sub = a-b;

 int multi = a*b;

 int divi = a/b


 if(sum>100 && sub>100 && multi>100 && divi>100)
{
   printf("You are Good to go !");
}

else
{
  printf("Uff!! Better luck next time.");
}


return 0;

}
