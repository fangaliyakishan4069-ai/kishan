#include<stdio.h>
#include<conio.h>
main()
{
	int per;
	clrscr();
	printf("\n\tper :");
	scanf("%d",&per);
	if(per>=80)
	{
		printf("\n\t dist");
	}
	else
	{
	       if (per=60)
	       {
			printf("\n\tfirst class");
	       }
	       else
	       {
			if(per=50)
			{
				printf("\n\tsecond class");
			}
			else
			{
				printf("\n\tpass");		}
	       }
	}
	getch();
	return 0;
}
