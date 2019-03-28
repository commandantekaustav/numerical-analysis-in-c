//newtons backward interpolation
#include<stdio.h>
#define h (x[n]-x[n-1])
#define u (xx-x[n-1])/h
main(){
	int i,j,n;
	float x[10],y[10],d[10][10],p,s,xx;
	
	printf("\nEnter the number of pairs: ");
	scanf("%d",&n);
	printf("\nEnter the values of x and y:\n");
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);
		printf("\t");
		scanf("%f",&y[i]);
		d[0][i]=y[i];
	}
	printf("\nEnter value of x to calculate y: ");
	scanf("%f",&xx);
	for(i=1;i<n;i++){
		for(j=0;j<=n;j++){
			d[i][j]=d[i-1][j+1]-d[i-1][j];
		}
	}
	
	printf("\n");printf("\n");printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%f\t",d[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");printf("\n");printf("\n");
	for(i=1;i<n;i++)
		printf("%f\t",d[n-1][i]);
	printf("\n");printf("\n");printf("\n");
		
	s=y[n-1];
	p=1;
	for(i=0;i<n;i++){
			p*=(u+i)/(i+1);
			s+=p*d[i+1][n-i];
			p=1;
	}
	printf("f(%f) =  %f",xx,s);	
	
}
