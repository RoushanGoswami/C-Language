#include<stdio.h>
#include<conio.h>

void main (){
	int i , j,count =1 ; 
	
	for (i=1 ; i<=5;i++)
	{
		for(j=5;j>=i;j--){
			if(j%2==1){
				printf("1 ");
			}else{
					printf("0 ");
			}
		}
		printf("\n");
	}
	
	
}
