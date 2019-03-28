//bisection
//x^3 - x - 1 = 0
#include<stdio.h>
#include<math.h>
#define e 0.0001

float f(float x){	
//	return (x*x*x)-x-1;
return tan(x)+x;
}

main(){
	float a,b,c;
	
	printf("\nEnter the values of a and b: ");
	scanf("%f %f",&a,&b);

		do{
				c = (a*f(b)-b*f(a))/(f(b)-f(a));
			if(f(c)==0.0)
				break;
			else{
				if(f(a)*f(c)<0){
					b=c;
			}
				else
					a=c;
			}
		}while(fabs(b-a)>=e);	
	printf("x = %0.3f",c);
	
}
