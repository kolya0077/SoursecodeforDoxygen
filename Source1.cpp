/*! This code demonstrate a incorporation sorting */

#include <stdio.h>
void main()
{
	/** An integer type
	*   This is original array b
	*/

	int b[41]; /**< integer array b */
	for (int i=0; i<40;i++)
	{
		b[i]=40-i; /**< integer element of array b */
		printf("%d\t",b[i]);
	}
	printf("\n");
	/**
	*   This is the first permutation of array b
	*/
	for (int i=0;i<40;i=i+2)
	{
		if (b[i]>b[i+1])
		{
			int t=b[i];   /**< integer variable t */
			b[i]=b[i+1];  /**< integer 1 element of array b */
			b[i+1]=t;     /**< integer 2 element of array b */
		}
	}
	/**
	*   This is the second permutation of array b
	*/
	for (int i=0;i<40;i=i+4)
	{
		if ((b[i]+b[i+1])>b[i+2]+b[i+3])
		{
			int t1=b[i];    /**< integer variable t1 */
			b[i]=b[i+2];    /**< integer 1 element of array b */
			int t2=b[i+1];  /**< integer variable t2 */
			b[i+1]=b[i+3];  /**< integer 2 element of array b */
			b[i+2]=t1;      /**< integer 3 element of array b */
			b[i+3]=t2;      /**< integer 4 element of array b */
		}
		
	}
	/**
	*   This is the third permutation of array b
	*/
	for (int i=0;i<40;i=i+8)
	{
		if ((b[i]+b[i+1]+b[i+2]+b[i+3])>(b[i+4]+b[i+5]+b[i+6]+b[i+7]))
		{
			int t1=b[i];    /**< integer variable t1 */
			int t2=b[i+1];  /**< integer variable t2 */
			int t3=b[i+2];  /**< integer variable t3 */
			int t4=b[i+3];  /**< integer variable t4 */
			b[i]=b[i+4];    /**< integer 1 element of array b */
			b[i+1]=b[i+5];  /**< integer 2 element of array b */
			b[i+2]=b[i+6];  /**< integer 3 element of array b */
			b[i+3]=b[i+7];  /**< integer 4 element of array b */
			b[i+4]=t1;      /**< integer 5 element of array b */
			b[i+5]=t2;      /**< integer 6 element of array b */
			b[i+6]=t3;      /**< integer 7 element of array b */
			b[i+7]=t4;      /**< integer 8 element of array b */
		}    
	}
	/**
	*   This is the fourth permutation of array b
	*/
	for (int i=0;i<32;i=i+16)
	{
		if (b[i]>b[i+8])
		{
			int t1=b[i];     /**< integer variable t1 */
			int t2=b[i+1];   /**< integer variable t2 */
			int t3=b[i+2];   /**< integer variable t3 */
			int t4=b[i+3];   /**< integer variable t4 */
			int t5=b[i+4];   /**< integer variable t5 */
			int t6=b[i+5];   /**< integer variable t6 */
			int t7=b[i+6];   /**< integer variable t7 */
			int t8=b[i+7];   /**< integer variable t8 */
			b[i]=b[i+8];     /**< integer 1 element of array b */
			b[i+1]=b[i+9];   /**< integer 2 element of array b */
			b[i+2]=b[i+10];  /**< integer 3 element of array b */
			b[i+3]=b[i+11];  /**< integer 4 element of array b */
			b[i+4]=b[i+12];  /**< integer 5 element of array b */
			b[i+5]=b[i+13];  /**< integer 6 element of array b */
			b[i+6]=b[i+14];  /**< integer 7 element of array b */
			b[i+7]=b[i+15];  /**< integer 8 element of array b */
			b[i+8]=t1;       /**< integer 9 element of array b */
			b[i+9]=t2;       /**< integer 10 element of array b */
			b[i+10]=t3;      /**< integer 11 element of array b */
			b[i+11]=t4;      /**< integer 12 element of array b */
			b[i+12]=t5;      /**< integer 13 element of array b */
			b[i+13]=t6;      /**< integer 14 element of array b */
			b[i+14]=t7;      /**< integer 15 element of array b */
			b[i+15]=t8;      /**< integer 16 element of array b */
		}
	}
	/**
	*   This is the fifth permutation of array b
	*/
		if (b[0]>b[16])
		{
			int t1=b[0];    /**< integer variable t1 */
			int t2=b[1];    /**< integer variable t2 */
			int t3=b[2];    /**< integer variable t3 */
			int t4=b[3];    /**< integer variable t4 */
			int t5=b[4];    /**< integer variable t5 */
			int t6=b[5];    /**< integer variable t6 */
			int t7=b[6];    /**< integer variable t7 */
			int t8=b[7];    /**< integer variable t8 */
			int t9=b[8];    /**< integer variable t9 */
			int t10=b[9];   /**< integer variable t10 */
			int t11=b[10];  /**< integer variable t11 */
			int t12=b[11];  /**< integer variable t12 */
			int t13=b[12];  /**< integer variable t13 */
			int t14=b[13];  /**< integer variable t14 */
			int t15=b[14];  /**< integer variable t15 */
			int t16=b[15];  /**< integer variable t16 */
			b[0]=b[16];     /**< integer 1 element of array b */
			b[1]=b[17];     /**< integer 2 element of array b */
			b[2]=b[18];     /**< integer 3 element of array b */
			b[3]=b[19];     /**< integer 4 element of array b */
			b[4]=b[20];     /**< integer 5 element of array b */
			b[5]=b[21];     /**< integer 6 element of array b */
			b[6]=b[22];     /**< integer 7 element of array b */
			b[7]=b[23];     /**< integer 8 element of array b */
			b[8]=b[24];     /**< integer 9 element of array b */
			b[9]=b[25];     /**< integer 10 element of array b */
			b[10]=b[26];    /**< integer 11 element of array b */
			b[11]=b[27];    /**< integer 12 element of array b */
			b[12]=b[28];    /**< integer 13 element of array b */
			b[13]=b[29];    /**< integer 14 element of array b */
			b[14]=b[30];    /**< integer 15 element of array b */
			b[15]=b[31];    /**< integer 16 element of array b */
			b[16]=t1;       /**< integer 17 element of array b */
			b[17]=t2;       /**< integer 18 element of array b */
			b[18]=t3;       /**< integer 19 element of array b */
			b[19]=t4;       /**< integer 20 element of array b */
			b[20]=t5;       /**< integer 21 element of array b */
			b[21]=t6;       /**< integer 22 element of array b */
			b[22]=t7;       /**< integer 23 element of array b */
			b[23]=t8;       /**< integer 24 element of array b */
			b[24]=t9;       /**< integer 25 element of array b */
			b[25]=t10;      /**< integer 26 element of array b */
			b[26]=t11;      /**< integer 27 element of array b */
			b[27]=t12;      /**< integer 28 element of array b */
			b[28]=t13;      /**< integer 29 element of array b */
			b[29]=t14;      /**< integer 30 element of array b */
			b[30]=t15;      /**< integer 31 element of array b */
			b[31]=t16;      /**< integer 32 element of array b */
		}
		for (int i=0;i<40;i++)
		{
			printf("%d\t",b[i]);
		}
		printf("\n");
	/**
	*   This is the creation of array c
	*/
	int c[40];  /**< integer array c */
	for (int i=0;i<9;i++)
	{
		if(b[i]>b[i+32])
		{
			c[i]=b[i+32];  /**< integer element of array c */
		}
		printf("%d\t",c[i]);
	}
	for (int i=0;i<32;i++)
	{
		c[i]=b[i];         /**< integer element of array c */
		printf("%d\t",c[i]);
	}
}