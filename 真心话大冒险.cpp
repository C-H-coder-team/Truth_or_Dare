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
	i=true;	//确定bool的值 
	srand(time(0)); //随机数因子 
	while(i=true)
	{
		system("cls");
		cout<<"欢迎来到fanjun弱智到爆的真心话大冒险，选择都十分的disgusting，请广大朋友们注意"<<endl<<"是否开始？"<<endl;//提示信息 
		cin>>input; //输入字符串 
		if(input=="是")//判断主体 
		{
		
			a=1+rand()%9;
			{
			if (a==1)
        printf("把你敬爱的母亲的微信给删了");
			if (a==2)
        printf("请揍你的一个朋友");
			if (a==3)
        printf("跟老师表白");
			if (a==4)
        printf("无效选项");
			if (a==5)
        printf("在你的老师面前玩游戏");
			if (a==6)
        printf("把你最喜欢的人的微信删了");
			if(a==7)
        printf("在朋友圈里公开发：‘我 没 对 象’");
			if (a==8)
        printf("无效选项");
			if (a==9)
        printf("不写作业");
       } //判定组 
		}
		else i=false;//改值 
		cout<<endl;	//换行 
		Sleep(1500);//休眠 
	}
	
	return 0;//返回0 
}
