#include <iostream>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
#include<string>
#include<windows.h>
using namespace std;
int maxnum=0,input,num;
char in;
 void start()
    {
        cout<<"��ѡ���Ѷ�\n";
        cout<<"1��������0-100\n";
        cout<<"2���м���0-1000\n";
        cout<<"3�� ��������0-10000\n";
        cin>>in;
switch(in)
{
    case '1':maxnum=100;cout<<"С�˼�����ӭ�������ģʽ�����������µ�0-100������\n";break;
    case '2':maxnum=1000;cout<<"��ʿ����ӭ�����м�ģʽ��������0-1000������\n";break;
    case '3':maxnum=10000;cout<<"��m����ӭ���������������������������ɣ���������д��ɶ\n";break;
}
  num=rand()%maxnum;




    }
void game()
{
    cin>>input;
 if(input>maxnum)
{
    cout<<"�ⶼ��������ѵ����ֶ�����(�V_�V)\n";
    game();
}
  else if(input<num)
{
    cout<<"���в��У�̫С��(���ި���)\n";
    game();
}
 else if(input>num)
{
    cout<<"����������ִ���(��_��)\n";
    game();
}
 else if(input=num)
{

    cout<<"��ϲ��ɹ��ˣ��t(������)�q\n";
    cout<<"������һ�ְ�Ӣ�ۣ�\n";
    cout<<"y(es) or n(o)\n";
    cin>>in;
    switch(in)
    {
        case 'y':system("cls");start();game();
        case 'n':return;
    }
}
}

int main()
{
    cout << "��������Ϸ" << endl;
    srand(time(NULL));
   start();
     game();
}
