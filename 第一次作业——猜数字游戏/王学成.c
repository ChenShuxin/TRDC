#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
void main()
{
	char i='y';
	while(i=='y'||i=='Y')
	{
		int a,b,c,d,e,f=1;
		srand(time(NULL));
		printf("��������Ϸ����:");
		scanf("%d",&d);
		printf("����������ֵ����޺����ޣ��Զ��Ÿ���");
		scanf("%d,%d",&a,&b);  
		c=a+(rand()%(b-a));
		printf("%d\n",c);
		Sleep(2000);
		system("cls");
		for(;e!=c;)
		{	
		printf("��%d����������һ��%d~%d������:",f,a,b);
		scanf("%d",&e);
		if(e>b||e<a) printf("������������,������һ��%d~%d������\n",a,b);
		else {
			  if(e>c) {printf("����\n");b=e;f=f%d+1;}
			  if(e<c) {printf("С��\n");a=e;f=f%d+1;}
			}
		}
   		printf("��%d����BOOM!\n",f);
		printf("�Ƿ����¿�ʼ��Ϸ����y/n��\n");
		i=getche();
    }
	printf("��Ϸ����");
}