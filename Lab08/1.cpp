#include<stdio.h>

int length(int);
void rightshift(int*,int);
void addBias(int,int*);
void truncate(int*,int);
int encode(int, int, int);
int main(){
	int x;
	int N;
	int bias;
	printf("input x, N, bias: ");
	while(scanf("%d %d %d",&x,&N,&bias) != EOF){
		printf("%d\n\n",encode(N,bias,x));
		printf("input x, N, bias: ");
	}
}
int length(int x){
	int count = 0;
	while(x){
		count++;
		x/=10;
	}
	return count;
}
void rightshift(int *x,int n){
	n %= length(*x);
	int temp;
	int mul = 1;
	for(int i=1;i<length(*x);i++){
		mul *=10;
	}
	for(int i=0;i<n;i++){//51234
		temp = *x%10;
		*x/=10;
		*x += mul*temp;
	}
}
void addBias(int bias,int*x){
	*x += bias;
}
void truncate(int *x,int len){
	int mul = 1;
	for(int i=0;i<len;i++){
		mul *=10;
	}
	*x %= mul;
}
int encode(int N,int bias,int x){
	int len = length(x);
	rightshift(&x,N);
	addBias(bias,&x);
	truncate(&x,len);
	return x;
}