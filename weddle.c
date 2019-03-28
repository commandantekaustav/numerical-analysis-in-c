//Integrate(0,0.6)[dx/(sqrt(1-x^2)] using Weddle's Rule taking 6 intervals

#include<stdio.h>
#include<math.h>
#define h ((b-a)/n)
float f(float x){
	return (1/sqrt(1-x*x));
}

main(){
	float a,b,sum;
	int i,n;
	printf("\nEnter the upper limit,lower limit,number of intervals: ");
	printf("\n\nUpper Limit = %f\nLower Limit = %f\nNumber of Intervals = %d\nh derived from the given input = %f",b,a,n,h,scanf("%f%f%d",&b,&a,&n));
	
//	for(i=1;i<n;i++){
//		if(i%6==0)
//			//s4+=f(a+i*h);
//			printf("");
//		if(i%3==0)
//			//s3+=f(a+i*h);
//			printf("6");
//		if(i%2==0)	
//			//s2+=f(a+i*h);
//			printf("1");
//		else
//			//s1+=f(a+i*h);
//			printf("5");
//	}

	if(n%6==0){
		sum+=(3*h/10)*( f(a)+5*f(a+h)+f(a+2*h)+6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(b) );
		a+=6*h;
	}

	printf("\nEvaluated Result = %f",sum);
//	printf("\nh=%f",h);
}
