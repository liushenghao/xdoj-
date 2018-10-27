#include <stdio.h>
#include <math.h>
int main()
{
	float ele;
	float pay;
	scanf("%f",&ele);
	if(ele<=110)
	{
		pay=0.5*ele;
	} 
	else if(110<ele&&ele<=210)
	{
		pay=0.5*110+0.55*(ele-110);
	}
	else if(210<ele)
	{
		pay=110+(0.7*(ele-210));
	}
	
	//pay=(int)((pay*100)+0.5)/100.0;
	printf("%0.2f",pay);
	return 0;	
}


