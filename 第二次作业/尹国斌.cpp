#include <iostream>

/*Note:
    (��ע)װ��ָ��
    ���ӻ�����100��
    ���ϻ�����200��
    ������װ�����������װ�ұߣ�������ƽ�⡣ÿ�߸�װ���٣�
    ����ʼ�շ���һ��
    let co=14  //����14��
    let cw=3

    let ow=100
    let ww=200
    let to=co*ow
    let tw=cw*ww  //total
    let ttl=to+tw
    let es=ttl/2
    let lhso=es/ow  //left hold
    let rhso=co-lhso  //
*/
using namespace std;

int main()
{
    int WATERMELON_WEIGHT = 200;
    int CONTAINERS_WATERMELON = 3;
    int ORANGE_WEIGHT = 100;
    int CONTAINERS_ORANGE = 14;
    int TotalWatermelon = WATERMELON_WEIGHT * CONTAINERS_WATERMELON;
    int TotalOrange = ORANGE_WEIGHT * CONTAINERS_ORANGE;
    int TotalTruckLoad = TotalOrange + TotalWatermelon;
    int eachSide = TotalTruckLoad / 2;
    int leftHoldsomeOrange = eachSide / ORANGE_WEIGHT;
    int righHoldsomeOrange = CONTAINERS_ORANGE - leftHoldsomeOrange;
    cout<<"LEFT:"<<leftHoldsomeOrange<<endl<<"RIGHT:"<<righHoldsomeOrange;
    return 0;
}
