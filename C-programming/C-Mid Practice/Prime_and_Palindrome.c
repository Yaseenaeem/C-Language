#include<stdio.h>
int main()
{
	int i , j , d , count=0 ;
	for(i=1 ; i<=100 ; i++ )
	{ 
	    for(j=1 ; j<=i ; j++)
		{
			if(i%j == 0)
			   count++;
		}
		
		d = i/10;
		if(d == 0 && count==2 || i%11 == 0 && count==2)
		printf(" %d" ,i);
		count=0;
	}
    return 0;
} 
