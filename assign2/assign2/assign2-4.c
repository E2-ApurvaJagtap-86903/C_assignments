#include<stdio.h>
int main() {
int n1,n2;
printf("enter n1:");
scanf("%d",&n1);
printf("enter n2:");
scanf("%d",&n2);


/*
if(n1>n2)
printf("n1 is max");
else
printf("n2 is max");
*/


(n1>n2)?printf("n1 is max"):printf("n2 is max");

return 0;

}
