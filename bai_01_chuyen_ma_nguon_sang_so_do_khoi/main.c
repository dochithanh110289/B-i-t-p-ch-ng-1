#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	float delta;
	float x1, x2;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 0){
		if (b == 0){
			if(c == 0){
				printf("VSN");}else{
					printf("VN");}
				
		}else{
			printf("pt có 1ng: x = %.2f", -c/b);
			
		}
		}else{
			delta = b*b - 4*a*c;
			if (delta < 0){
				printf("VN");}else if(delta == 0){
					x1 = -b/(2*a);
					printf("pt co ng kep: x1 = x2 = %.2f", x1);
				}else{
					x1 = (-b - sqrt(delta))/(2*a);
					x2 = (-b + sqrt(delta))/(2*a);
					printf("pt co 2 ng phan biet: x1 = %.2f, x2 = %.2f", x1, x2);
				}
		}
		}
		
	
