#include<stdio.h>
int add(int x,int y){
	int a,b;
	do{
		a=x&y;
		b=x^y;
		x=a<<1;
		y=b;
	}while(a);
	return b;
}
int negate(int x){
	return add(~x,1);
}
int sub(int x,int y)
{
	return add(x,negate(y));
}
int mul(int x, int y){
	int m=1, z =0;
	if(x<0){
		x=negate(x);
		y=negate(y);
	}

	while(x>=m && y) {
		if (x &m) z=add(y,z);
		y <<= 1; m<<= 1;
	}
	return z;
}
int divide(int x,int y){
	int c=0,sign=0;

	if(x<0){
		x=negate(x);
		sign^=1;
	}

	if(y<0){
		y=negate(y);
		sign^=1;
	}

	if(y!=0){
		while(x>=y){
			x=sub(x,y);
			++c;
		}
	}
	if(sign){
		c=negate(c);
	}
	return c;
}
int main()
{
	int a,b,Sum=0,Sub=0,Mul=0,Divide=0,c=0,d=0;
	scanf("%d %d",&a,&b);
	printf("Sum = %d\t Sub = %d \t Mul = %d \t Divide = %d\n " ,Sum=add(a,b), Sub=sub(a,b), Mul=mul(a,b),Divide=divide(a,b));
	c=mul(Divide,b);
	d=sub(c,a);
	printf("Modulus=%d\n",d);
}
