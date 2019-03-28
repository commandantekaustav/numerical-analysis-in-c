#include<stdio.h>

float f(float x,float y){
	return -2*x-y;
}

main(){
	float x0,y0,y,xn,h;
	int i,n;
	
	printf("\nEnter x0,y0,xn,h: ");
	scanf("%f%f%f%f",&x0,&y0,&xn,&h);
	n=(xn-x0)/h;
	printf("\n n= %d",n);
	
	for(i=0;i<n;i++){
		y = y0 + h*f(x0,y0);
		y0 = y;
		x0 += h;
	}
	printf("\n%f",y);
}
