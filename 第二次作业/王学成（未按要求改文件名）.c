#include<stdio.h>
main()
{
	int countorange=14;
	int countwatermelon=3;
	int orangeweight=100;
	int watermelonweight=200;
	int totalorange=countorange*orangeweight;
	int totalwatermelon=countwatermelon*watermelonweight;
	int total=totalorange+totalwatermelon;
    int equalside=total/2;
	int leftholdorange=equalside/orangeweight;
	int rightholdorange=countorange-leftholdorange;
	printf("��߷�%d������ӣ��ұ߷�%d������Ӻ�%d�������",leftholdorange,rightholdorange,countwatermelon);
}
