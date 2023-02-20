#include<stdio.h>
#include<string.h>
void main(){
	int c ;
	char a[10] , b[10];
	printf("enter a and b");
    scanf("%s %s",&a ,&b);
	c = strcmp(a,b);
	if(c>0){
	printf("a is greater");
	}
	
	else if (c==0){
		printf("both sting are same ");
	}
	
	else{
			printf("b is greater ");
	}

}

