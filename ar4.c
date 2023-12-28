#include <stdio.h>

int  main()

{

    int i, odd = 0, even = 0,a[10];

 
   	for(i=0; i<10; i++ )
	{	
		printf("enter value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
    for (i = 0; i < 10; i++)
    {

        if (a[i] % 2 == 0)
        {
            even = even + a[i];
        }
        else
        {
            odd = odd + a[i];
        } 

    }

    printf("\n Sum of all odd numbers  = %d\n", odd);

    printf("\n Sum of all even numbers = %d\n", even);

    return 0;

}