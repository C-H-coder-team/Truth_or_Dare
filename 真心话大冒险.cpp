#include<iostream>
#include<ctime> 
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<fstream> 
#include<windows.h>
using namespace std;
int main()
{
	int a;
	string input;
	bool i;
	i=true;	//ȷ��bool��ֵ 
	srand(time(0)); //��������� 
	while(i=true)
	{
		system("cls");
		cout<<"��ӭ����fanjun���ǵ��������Ļ���ð�գ�ѡ��ʮ�ֵ�disgusting������������ע��"<<endl<<"�Ƿ�ʼ��"<<endl;//��ʾ��Ϣ 
		cin>>input; //�����ַ��� 
		if(input=="��")//�ж����� 
		{
		
			a=1+rand()%9;
			{
			if (a==1)
        printf("���㾴����ĸ�׵�΢�Ÿ�ɾ��");
			if (a==2)
        printf("�������һ������");
			if (a==3)
        printf("����ʦ���");
			if (a==4)
        printf("��Чѡ��");
			if (a==5)
        printf("�������ʦ��ǰ����Ϸ");
			if (a==6)
        printf("������ϲ�����˵�΢��ɾ��");
			if(a==7)
        printf("������Ȧ�﹫���������� û �� ��");
			if (a==8)
        printf("��Чѡ��");
			if (a==9)
        printf("��д��ҵ");
       } //�ж��� 
		}
		else i=false;//��ֵ 
		cout<<endl;	//���� 
		Sleep(1500);//���� 
	}
	
	return 0;//����0 
}
