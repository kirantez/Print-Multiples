#include<stdio.h>
int main()
{
    int given_number,temp,i,j,mul3=0,mul5=0,count=0,dm3=0,dm5=0,x=0,inital=0,count1=0,loop_count=0,a=0;
    printf("Enter he number\n");
    scanf("%d",&given_number);
    for (x=1;x<=100;x++)
    {
	if (given_number == (5*x))
	{
	    dm5=(5*x);
	    inital=1;
	    printf("%d\n",dm5);
	    break;
	}
	if (given_number == (3*x))
	{
	    dm3=(3*x);
	    inital=1;
	    printf("%d\n",dm3);
	    break;
	}
    }
    if (inital==1)
    {
	if (dm5 == given_number)
	{
	    for (a=0;a<dm5;a++)
			printf("3");
	}
	else if (dm3 == given_number)
	{
	    for (a=0;a<dm3;a++)
			printf("5");
	}
		printf("\n");
		    return 0;
    }
    else
    {
    for (i=1;i<=10;i++)
    {
	mul5=(5*i);
	temp=given_number-mul5;
	    for (j=0;j<=10;j++)
	    {
		if (temp == (3*j))
		{
		    mul3=temp;
		    printf("%d\n",mul3);
		    printf("%d\n",mul5);
		    count=1;
		    break;
		}
		else
		    continue;
	    }
	    if (count == 1)
	    {
		loop_count=mul3+mul5;
		for (a=0;a<loop_count;a++)
		{
		    if (a < mul3)
			printf("5");
		    else
			printf("3");
		}
		printf("\n");
		return 0;
	    }
	    else
		continue;
    count1=1;
    }
    }
    if (count1 == 1)
	return 0;
    else
	printf("%d is Impossible to print\n",given_number);



}
