/*! This code demonstrate a bubble sorting */

#include <stdio.h>
int main()
{
	/** An integer type
	*   This is original array a
	*/
	int a[31]; /**< integer array a */
	/** 
	*   This is process of printing this array on the screen
	*/
	for (int i=0; i<30;i++)
	{
		a[i]=30-i; /**< integer element of array a */
		printf("%d\t",a[i]);
	}
	printf("\n");
	/**
	*   This is a permutation of array a
	*/
	for (int i=30;i>0;i--)
	{
		if (a[i-1]>a[i])
		{
			int t=a[i-1];  /**< integer variable t */
			a[i-1]=a[i];   /**< integer 1 element of array a */
			a[i]=t;        /**< integer 2 element of array a */
		}
		printf("%d\t",a[i]);
	}
	printf("\n");
}
