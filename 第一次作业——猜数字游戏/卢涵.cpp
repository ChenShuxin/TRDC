#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
int i,n,sl,sr,ans,a,a1;
char flag='y';
void fun()
{
	i=1;
	do{
		printf("��%d����������һ��%d~%d������:",i,sl,sr);
		scanf("%d",&a);
		while(a==a1)
			scanf("%d",&a);
		if(a<ans){
			printf("С��\n");
			sl=a;
		}
		if(a>ans){
			printf("����\n");
			sr=a;
		}
		if(a==ans){
			printf("��%d����Boom!!!\n",i);
			return ;
		}
		if(i<n)
			++i;
		else
			i=1;
		a1=a;
	}while(1);
}
int main()
{
	srand((unsigned)time(0));
	int t1,t2;
	while(flag=='y'){
		printf("��������Ϸ����:");
		scanf("%d",&n);
		printf("������������,�ÿո����:");
		scanf("%d%d",&sl,&sr);
		ans=rand()%(sr-sl);
		ans+=sl;
		printf("%d",ans);
		t1=clock();
		do{
			t2=clock();
		}while(t2-t1<2000);
		system("cls");
		fun();
		do{
			printf("�����Ƿ����¿�ʼ?  y(es) or n(o):");
			scanf("%c",&flag);
		}while(flag!='y'&&flag!='n');
		if(flag=='n')
			break;
		system("cls");
	}
	return 0;
}
