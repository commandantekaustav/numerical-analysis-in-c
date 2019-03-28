//nfi

#include<stdio.h>
#define h (x[1]-x[0])
#define u (xx-x[0])/h

main(){
	float x[10],y[10],d[10][10],p=1,s,xx;
	int i,j,n;
	printf("\nOrder: ");
	scanf("%d",&n);
	
	printf("\nEnter the values of x and y:\n");
	for(i=0;i<n;i++){
		scanf("%f%f",&x[i],&y[i]);
		d[i][0]=y[i];	
	}
	
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			d[i][j]=d[i+1][j-1]-d[i][j-1];
		}
	}
	printf("\nEnter xx = ");
	scanf("\n%f",&xx);
	s=y[0];
	
	for(i=0;i<n;i++){
		p*=(u-i)/(i+1);
		s+=p*d[1][i];
		p=1;
	}
	
		printf("\nroot = %f",s);
	
}
