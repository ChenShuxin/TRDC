#include<stdio.h>
int main()
{
	int CountOrange=14;
	int CountWatermelonIntegration=3;
	int OrangeWeight=100;
	int WatermelonWeightIntegration=200;
	int TotalOrange=CountOrange*OrangeWeight;
	int TotalWatermelonIntegration=CountWatermelonIntegration*WatermelonWeightIntegration;
	int TruckTotal=TotalOrange+TotalWatermelonIntegration;
	int EachSize=TruckTotal/2;
	int LeftOrangeCount=EachSize/OrangeWeight;
	int RightOrangeCount=CountOrange-LeftOrangeCount;
	printf("�������%d��\n�ұ�����%d�䣬����%d��",LeftOrangeCount,RightOrangeCount,CountWatermelonIntegration);
	return 0;
}
