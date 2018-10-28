#include <stdio.h>
int main()
 {
  float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2,x,y,d1,d2,d3,d4;
  scanf("%f,%f",&x,&y);
  d1=(x-x4)*(x-x4)+(y-y4)*(y-y4);           /*求该点到各中心点距离*/
  d2=(x-x1)*(x-x1)+(y-y1)*(y-y1);
  d3=(x-x2)*(x-x2)+(y-y2)*(y-y2);
  d4=(x-x3)*(x-x3)+(y-y3)*(y-y3);
  if (d1>1 && d2>1 && d3>1 && d4>1)
  {
  	printf("no\n");
  }else{
  	printf("yes\n");
  }
  return 0;
 }

