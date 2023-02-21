#include<stdio.h>
void main(){
	
	int n,ele,i,s;
printf("enter number");
	scanf("%d",&n); 
	i=1;
printf("enter elements");
while(i<=n)
{
		scanf("%d",&ele);
		if(i==1)s=ele;
		if(ele<s)
			s=ele;
		i++;
	}
	printf("\nsmallest number:%d",s);
	
}