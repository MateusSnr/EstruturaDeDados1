#include<stdio.h>

int main(){
		int a = 0;
		int b = 0;
		int c = 0;
		
		printf("Valor de a: ");
		scanf("%d",&a);
		
		printf("Valor de b: ");
		scanf("%d",&b);
		
		printf("Valor de c: ");
		scanf("%d",&c);
		
		if(a > b){
			if(a > c){
				printf("A letra armazenada em a e a maior!, valor %d", a);
			}
			else if (a == c){
				printf("A letra armazenada em a e em c sao as maiores!, valores %d %d", a,c);
			}
			else{
				printf("A letra armazenada em c e a maior!, valor %d", c);
			}
		}
		else if (a == b){
			if(a > c){
				printf("A letra armazenada em a e em b sao as maiores!, valores %d %d", a,b);
			}
			else if( a == c ){
				printf("Todos os valores sao iguais!");
			}
			else{
				printf("O maior valor esta em c");
			}
		}
		else{
			if(b > c){
				printf("A letra armazenada em b e a maior!, valor %d", b);
			}
			else if (b == c ){
				printf("A letra armazenada em b e em c sao as maiores!, valores %d %d", b,c);
			}
			else{
				printf("O maior valor esta em c");
			}
		}
	}
