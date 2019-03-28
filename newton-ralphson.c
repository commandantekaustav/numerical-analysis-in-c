//Find the root of the equation    xsinx + cosx = 0
//using newton ralphson method
//upto 4 decimal places
//given answer = 2.7984

#include<stdio.h>
#include<math.h>
#define e 0.00001
#define h (f(x)/df(x))

float f(float x){
	return (x*sin(x) + cos(x));
}

float df(float x){
	return (x*cos(x));
}

main(){
	while(1){
	float x;
	int i=0;
	printf("\nEnter the value of x: ");
	scanf("%f",&x);
	
	while(fabs(h)>=e){
	printf("\n%f",x);
		x-=h;
		++i;
	}

	printf("\nRoot: %f",x);
	printf("\nIteration: %d",i);
	}
}
