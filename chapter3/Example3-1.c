#include<stdio.h>

int binarysearch(int v[], int x, int n);

main()
{
	int v[] = {1, 2, 3, 4, 5, 6};
	int x = 2;
	int n = 6;
        printf("%d\n",binarysearch(v,x,n));
}

int binarysearch(int v[], int x, int n)
{
	int low,mid,high;
	low = 0;
	high = n-1;
	mid = (low + high)/2;
	while (low <= high || x != v[mid]) {
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low + high)/2;
	}  
	if (x == v[mid])
		return mid;
	else
		return -1;
}
