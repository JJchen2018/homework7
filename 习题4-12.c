#include "stdio.h"
int main()
{
	float x,y;
	int high;

	printf("������x�����ֵ ");
	scanf("%f",&x);
	printf("������y�����ֵ ");
	scanf("%f",&y);

	if((x-2)*(x-2)+(y-2)*(y-2)>1&&(x+2)*(x+2)+(y-2)*(y-2)>1&&(x-2)*(x-2)+(y+2)*(y+2)>1&&(x+2)*(x+2)+(y+2)*(y+2)>1)
	{
		high=0;
	}
	else
	{
		high=10;
	}
	printf("�õ�Ľ����߶�Ϊ%d",high);
	return 0;
}

