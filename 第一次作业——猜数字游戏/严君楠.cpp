#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{  
	int a,c,m,M,number,min,max,guess,count;
	printf("��������Ϸ����:\n");
	scanf("%d\n",&a);
	printf("�����������ޣ��ÿո����:\n");
	scanf("%d %d\n",&m,&M);
	srand((unsigned)time(NULL));
	number=rand()%(M-m+1)+m;
    system("cls");
  do{
	  printf("������һ���� %d ~ %d",min,max);
	        scanf("%d",&guess);
			count ++;
			if(number>guess)
			{
				min=guess;
				printf("С��\n",guess);
			}
					else if(number<guess)
				{
					max=guess;
					printf("����\n",guess);
		}
			else if(a==guess)
				{
				printf("��Ϸ������ը��������:\n",count);
			}
	        else if(guess<min||guess>max)
			{
				printf("���������²�һ�����Ѷ���Χ�ڵ���\n",guess);
				scanf("%d",&guess);
            printf("�����Ƿ����¿�ʼ(Y-yes,N-no):\n");
            fflush(stdin);
            char c='Y';
			scanf("%c",&c);
			}
            if((c) !='Y')
        	break;
            return 0;
 }
