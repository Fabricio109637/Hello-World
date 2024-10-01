#include<stdio.h>
int main(){
       int num;
	printf("Digite um numero: ");
	scanf("%i", &num);
        if(num % 2 == 0){
	   	printf("O numero eh par\n");
        }
	else{
		printf("O numero nao eh par\n");
        }
	return 0;
}
