#include <stdio.h>
int main() {
	int a;
	int sum,avg,tmp = 0;
	for(;;){
		printf("enter a number");
		scanf("%d",&a);
		if(a <= 0){
			avg = sum/tmp;
			printf("summation = %d\n",sum);
			printf("average = %d\n",avg);
			return 0;
		}
		tmp++;
		sum += a;
	}	
}
