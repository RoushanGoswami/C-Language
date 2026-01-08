#include<stdio.h>
#include<conio.h>

void main (){
int i , j, count=0 ;

for (i=1;i<=5;i++){
	for(j=1;j<=i;j++){
	count = count + 1;
	printf("%d ",count);
	}
	printf("\n");
}

}
