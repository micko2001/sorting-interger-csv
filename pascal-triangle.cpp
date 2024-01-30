#include <stdio.h>

int calculatePascal(int row){
	int arr [255][255];
	for(int i=0; i < row; i++){
		for(int k =0; k < row-i;k++){
			printf(" ");
		}
		for(int j=0; j<i+1;j++){
			if(i==0 || j == 0|| i==j){
				arr[i][j]= 1;
				printf("%d ",arr[i][j]);
			}else{
				arr[i][j]= arr[i-1][j-1]+arr[i-1][j];
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	
	
	return arr [255][255];
}




int main (){
	
	int row = 5;
	printf("Entry the row :");
	scanf("%d",&row);
	int arr [255][255];
	arr[255][255]=calculatePascal(row);
	return 0;
}
