#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void fill(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		arr[i] = i;
	}
	return;
}


int main(void)
{
	srand(time(0));
	int c, temp, max, t=5000, p, kmax;
	//int n=15;
	float prob;
	for(int n=100; n<=1000; n+=100)
	{
		float probs[n];
		int arr[n];
		fill(arr, n);
		for(int k=1; k<n; k++)
		{
			p=0;
			for(int j=0; j<t; j++)
			{
				max=0;
				for(int i=0; i<n; i++)
				{
					c = rand()%(n-i);
					temp = arr[i];
					arr[i] = arr[i+c];
					arr[i+c] = temp;
				}
				for(int l=0; l<k; l++)
				{
					if(arr[l]>max)
						max = arr[l];
				}
				if(max != n-1)
				{
					for(int m=k; m<n; m++)
					{
						if(arr[m]>max)
						{
							if(arr[m]==n-1)
								p++;
							break;
						}
					}
				}
			}
			prob = p*1.0;
			prob = prob/t;
			probs[k-1] = prob;
		}
		prob=0;
		for(int i=0; i<n-1; i++)
		{
			if(probs[i]>prob)
			{
				prob=probs[i];
				kmax = i+1;
			}
		}
		printf("Pkn for n = %d is max for k = %d and P = %f\n", n, kmax, prob);

	}
	return 0;
}