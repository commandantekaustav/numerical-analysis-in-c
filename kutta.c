//kutta
#include<stdio.h>
#include<math.h>
float f(float x,float y){
	//return(sqrt(x+y));
	return x+y;
}
main(){
	float x0,y0,xn,h,k1,k2,k3,k4;
	int i,n;
	printf("x0,y0,xn,n: ");
	scanf("%f%f%f%d",&x0,&y0,&xn,&n);
	h = (xn-x0)/n;
	printf("\nh = %f",h);
//	while(x0<xn){
	for(i=1;i<=n;i++){
		k1 = h*f(x0,y0);
		k2 = h*f(x0+(h/2),y0+(k1/2));
		k3 = h*f(x0+(h/2),y0+(k2/2));
		k4 = h*f(x0+h,y0+k3);
		
		y0 +=  (k1 + 2*k2 + 2*k3 + k4 )/6;
		x0 += h;
		
		printf("\n%f	%f",x0,y0);
	}

}
