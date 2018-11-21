/*
magic square
ODD NUMBER
http://www.cnblogs.com/codingmylife/archive/2010/12/24/1915728.html
*/

#include<stdio.h>
#include<math.h>
#define length 100
int a[length][length];
int main(void)
{
	int step;
	int i,j,count;
	int x,y,type;
	scanf("%d",&step);
	
	for(i=0;i<step;i++)
	{
		for(j=0;j<step;j++)
		{
			a[i][j]=0;
		}
	}
	
	x=step/2;
	y=0;
	a[y][x]=1;//attention!in this file, y means roal, x means line.
	/*for(i=0;i<step;i++)
	{
		for(j=0;j<step;j++)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");*/
	
	for(count=2;count<=pow(step,2);count++)
	{
		if((y-1<0)&&(x+1<step))
			type=1;//out of the top
		else if((y-1>=0)&&(x+1>=step))
			type=2;//out of the right
		else if((y-1<0)&&(x+1>=step))
			type=3;//out of the right and the top
		else if(a[y-1][x+1]!=0)
			type=3;//the place was used 
		else
			type=0;
			
		switch(type)//in order to control where is it now
		{
			case 0://normal sulation
				x++;
				y--;
				break;
			case 1://out of the top
				x++;
				y=step-1;
				break;
			case 2://out of the right
				x=0;
				y--;
				break;
			case 3://in to the next roal
				y++;
				break;
		}
		a[y][x]=count;
		
		/*for(i=0;i<step;i++)
		{
			for(j=0;j<step;j++)
			{
				printf("%2d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");*/	
	}
	
	for(i=0;i<step;i++)
	{
		for(j=0;j<step;j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
