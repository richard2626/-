#include<stdio.h>
void sort(int*,int);
int main(){
	int n;
	int *p;
	int *w;
	int sum = 0;
	while(scanf("%d",&n) != EOF){
		
		sum = 0;
		p = new int[n]{0};
		w = new int[n]{0};
		for(int i=0;i<n;i++){
			scanf("%d",&p[i]);
		}
		sort(p,n);
		for(int i=0;i<n;i++){
			if(i==0){
				w[i] = 0;	
			}
			else{
				w[i] = w[i-1]+p[i-1];
			}
		}
		for(int i=0;i<n;i++){
			sum += w[i];
		}
		printf("%.6lf\n",double(sum)/n);
		delete []p;
		delete []w;
	}
}
void sort(int*arr,int n){
	int s,temp;
	for(int i=0;i<n-1;i++){
		
		s = i;
		for(int j = i+1; j<n;j++){
			if(arr[s] > arr[j])s = j;
		}
		temp = arr[s];
		arr[s] = arr[i];
		arr[i] = temp;
	}
}
	
	