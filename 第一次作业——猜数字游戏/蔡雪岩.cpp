#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
int main()
{
	int min,max;
	int answer;
	int r;
	int count = 0;
	int a = 0;
	int b = 1;
	int people;
	int c;
	for(r = 1;;r++)
	{
	printf("��������Ϸ������");
	scanf("%d",&people);
	printf("�����������ޣ��ÿո������");
	scanf("%d %d",&min,&max) ;
	answer = rand()%(max-min+1)+min;
	printf("%d",answer);
	int time;
	time=2;
	while(1)
	{
		Sleep(1000);
		time--;
		if(time==0)
		{
			break;
		}
	}
         system("cls");
	do {
		printf("��%d����������һ��%d~%d�����֣�",b,min,max);
		scanf("%d",&a);
		if ( a > answer and a < max ) {
			printf("���ˡ�",b);
			max=a;
			b++;
			if(b>people) 
			    {
	         	b=1;
		     	}
		    } else if ( a < answer and a >min ) {
			printf("С�ˡ�",b);
			min=a;
			b++;
			if(b>people)
		     	{
		    	b=1;
		    	}
	    	} else if ( a > max or a <min) {
		    printf("������������������һ��%d~%d�����֣�",min,max);
	       	}
		count ++;
     	} while (a != answer);
	printf("��%d��Boom!!! \n",b);
	printf("�����Ƿ����¿�ʼ����1(Yes) or 2(No)");
    scanf("%d,&c");
	if (c==1) { break;}
    if (c!=1) { system("cls");}
	} 
	getchar();
	getchar();
	return 0;
} 
