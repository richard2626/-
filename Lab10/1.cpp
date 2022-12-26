#include<stdio.h>
#include<math.h>

int main(){
	char **arr;
	double f ;
	while(scanf("%lf",&f)){
		arr = new char*[25];
		printf(" ");
		for(int i=0;i<25;i++){
			arr[i] = new char[100];
		}
		for(int i=0;i<25;i++){
			for(int j=0;j<100;j++){
				arr[i][j] =' ';
			}
		}
		for(int i=0;i<10;i++){
			for(int j = 0;j<10;j++){
				printf("%d",j);
			}
		}
		printf("\n");
		int index;
		double ratio;
		double y;
		for(int n=0;n<100;n++){
			y = sin(2*M_PI*f*n/100);
			ratio = (y+1)/(2);
			index = int(ceil(ratio*(24)));
			arr[24-index][n] = '*';
		}
		int k =0;
		for(int i=0;i<25;i++){
			printf("%d",k);
			if(k==9){
				k=0;
			}
			else
				k++;
			for(int j=0;j<100;j++){
				printf("%c",arr[i][j]);
			}
			printf("\n");
		}
		
		for(int i=0;i<25;i++){
			delete []arr[i];
		}
		delete []arr;
	
	}
	
}