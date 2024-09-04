#include<stdio.h>
int main(){

int n1,n2,ans;
printf("enter a number1:");
scanf("%d",&n1);
printf("enter a number2:");
scanf("%d",&n2);

if(n2==0){
printf("division by zero is not possible");
}else{
ans=n1/n2;


printf("%d\n",ans);
}
return 0;
}
