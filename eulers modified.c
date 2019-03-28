//find y(0.1) corrected upto 4 decimal places using modifed eulers method for
//the ODE (dy/dx) = (y-x)/(y+x) with y(0)=1 taking h=0.02
//given 1.0928
//mine 1.092889
#include<stdio.h>
#include<math.h>
//#define n ((xn-x0)/h)
float f(float x,float y){
	return ((y-x)/(y+x));
}

main(){
	float x0,y0,xn,y,h;
	int i,n;
	printf("\nEnter the values of x0, y0, h, xn for which y is to be calculated: ");
	printf("\n\nx0 = %f\ny0 = y(x0) = y(%f) = %f\nLength of Intervals = %f\n\ny(%f) is to be calculated using n intervals  ",x0,x0,y0,h,xn,scanf("%f%f%f%f",&x0,&y0,&h,&xn));
	n=(xn-x0)/h;
	printf("(n = %d, calculated from the set of given input)",n);
	
	for(i=0;i<n;i++){
		y = y0 + h * f(x0,y0);
		y =  y0 + (h/2) * (f(x0,y0) + f(x0,y));
		y0=y;
		x0+=h;
	}
	
	printf("\n\ny(%f) = %f",xn,y);
}
