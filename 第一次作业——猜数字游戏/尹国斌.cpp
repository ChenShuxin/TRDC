#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int judge(int num,int min,int max,int answer)
{
    if(num==answer)return 3;
    if((num>min) && (num <answer))
        return 1;
    if((num<max) && (num >answer))
        return 2;
    if((num>max) || (num <min))return 4;

}

int main()
{
    int players,MAX,MIN,temp,reply,count=1;
    char hahaha='n';
    do{
    cout << "��������Ϸ����:";
    cin >> players;
    cout <<"�����������ޣ��ÿո������";
    cin >>MIN>>MAX;
    //int answers;
    //cin>>answers;
    int answers=MIN+rand()%(MAX-MIN+1);
    cout << answers<<endl;
    Sleep(2000);
    system("Cls");
    do
    {
        cout<<"��"<<count<<"����������һ��"<<MIN<<"~"<<MAX<<"������:";
        cin>>reply;
        temp=judge(reply,MIN,MAX,answers);
        switch(temp)
        {
            case 4:cout<<"������������������һ��"<<MIN<<"~"<<MAX<<"������:"<<endl;count--;break;
            case 3:cout<<"��"<<count<<"����Boom!!!"<<endl;break;
            case 2:cout<<"����"<<endl;MAX=reply;break;
            case 1:cout<<"С��"<<endl;MIN=reply;break;
        }
        //cout<<"temp="<<temp<<endl;
        count=count%players;
        count++;
    }while(temp!=3);
    cout<<"PLAY AGAIN?(y or n)";
    cin>>hahaha;
    system("Cls");
    }while(hahaha=='y');
       return 0;
}
