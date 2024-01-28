#include<stdio.h>

int arr_length(int arr[])
{
    int i;
    int count = 0;
    for(i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

void read(	int a[255]){//subprogram load file txt
	int x, y, z, nmax, lp;
	
	FILE *in;
	in = fopen("Book1.csv","r");

	for(y=0;fscanf(in, "%d,", &a[y])!=EOF;y++)
	{
	}
	fclose(in);
}


void sort(int a[255],int b,int c){
//subprogram menulis bilangan yang telah urut
// ke File bubblesort.txt
	int d;
	FILE*up;
	up=fopen("output.csv","w");
 	for (d = 0; d < b; d++)
	{
     	fprintf(up,"%d, ", a[d]);	
	}
	
	fclose(up);
}
void graph( int array[255]){
	int b,c,position,n,d,i,j,f;
	n= arr_length(array);; //size of array
	position = 0;

	
	for (c = 0; c < n ; c++) // finding the biggest value from array
  	{
		if(array[position]<array[c+1]){
			position= c+1;
			
		}
		
	}

	for(i=0;i<=array[position];i++)//looping for create lines
	{
		for(j=0;j<=n;j++)//looping for create chracters in a line
		{
			if(array[position]-i<array[j]){
				printf(" ** ");
				
			}
			else
			{
				printf("    ");
			}
	}
	printf("\n");
	}

	
	}
	


// saya menggunakan bubblesort karena setelah saya compile berkali-kali dan 
// saya bandingkan dengan selection sort, terdapat perbedaan 0,1 detik

int main()//fungsi utama
{
	int array[255], n=11, c, d,position,swap, z=0,x=0;//inisiasi variabel
	int t;
	
	
	read(array);//subprogram baca data dari file
	
	
	printf("\nBilangan semula : \n");
	for (c = 0; c < n; c++)
     printf("%d,", array[c]);
     
	graph(array);
	
	
	 for (c = 0 ; c < n - 1; c++)//loop untuk fungsi bubblesort
	  {
	    for (d = 0 ; d < n - c - 1; d++)
	    {
	      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
	      {
	        swap       = array[d];
	        array[d]   = array[d+1];
	        array[d+1] = swap;
	      }
	   
	    }
	  
	  }

  	printf("Bilangan yang telah urut:\n");

	sort(array,n,z+x);//subproram tulis ke file bubblesort
	
	

  	for (c = 0; c < n; c++)
     printf("%d,", array[c]);
     
	graph(array);

  return 0;
}
	

