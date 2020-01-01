//Copyright 2008 Google Inc

//BSD

//土1703-1 仇亚恒 20170608

//对data.h中类的具体功能进行实现，注释见函数。

#include "时间类/date.h"
#include <iostream>
using namespace std;
Date::Date()   //调用无参函数赋初值
{
	year=0;
	month=0;
	day=0;
}
Date::Date(int y,int m,int d) //传值
{
	year=y;
	month=m;
	day=d;
}
Date:: ~Date()  // 调用析构函数
{
cout << "析构函数被调用" << endl;
}

//获取参数值

void Date::SetYear(int y)  
{
	year=y;
}
void Date::SetMonth(int m)
{
	month=m;
}
void Date::SetDay(int d)
{
	day=d;
}

//返回参数值

int Date::GetYear()  
{
	return year;
}
int Date::GetMonth()  
{
	return month;
}
int Date::GetDay()
{
	return day;
}
bool Date::Isleapyear()  //年份除以400，得0为真，否则为假
{
	bool isleapyear=false;
	if(year%400==0)
		isleapyear=true;
	if(year%400!=0&&year%4==0)
		isleapyear=true;
	return isleapyear;
}

//分两类情况，1.本月最后一天，明天为月份加一，天数为1
//2.不是本月最后一天，月份不变，天数加一

void Date::GetTomorrow()
{
//用if语句实现
	if(month==1&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==3&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==5&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==7&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==8&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==10&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==12&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(isleapyear()==true&&month==2&&day<29) 
		cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
    if(isleapyear()==false&&month==2&&day<28) 
		cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==4&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==6&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==9&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==11&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;

	if(month==1&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==3&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==5&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==7&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==8&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==10&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(isleapyear()==true&&month==2&&day==29) 
		cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(isleapyear()==false&&month==2&&day==28) 
		cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==4&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==6&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==9&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==11&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==12&&day==31) cout<<"Tomorrow is:"<<year+1<<"  1"<<"  1"<<endl;
}

//分两类情况，1.本月第一天，前一天为月份减一，天数为月份的最大天数
//2.不是本月第一天，月份不变，天数 减一

void Date::GetYesterday()
{
	if(month==1&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==3&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==5&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==7&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==8&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==10&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==12&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(isleapyear()==true&&month==2&&(day<29&&day>1)) 
		cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
    if(isleapyear()==false&&month==2&&(day<28&&day>1)) 
		cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==4&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==6&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==9&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==11&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;

	if(month==1&&day==1) cout<<"Yesterday is:"<<year-1<<"  "<<"12"<<"  "<<"31"<<endl;
	if(month==2&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==5&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(month==7&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(month==8&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(month==10&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(isleapyear()==true&&month==3&&day==1) 
		cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"29"<<endl;
	if(isleapyear()==false&&month==3&&day==1)
		cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"28"<<endl;
	if(month==4&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==6&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==9&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==11&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==12&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  30"<<endl;
}

//月份最大是31天，对于4,6,9，11不能超过30天，
//2月闰年不能超过29，平年不超过28
//月份只能是1到12
void Date::ErrorInput()
{
	if(month<1||month>12) cout<<"input error"<<endl;
	if(day<1) cout<<"input error"<<endl;
	if(month==1&&day>31) cout<<"input error"<<endl;
	if(month==3&&day>31) cout<<"input error"<<endl;
	if(month==5&&day>31) cout<<"input error"<<endl;
	if(month==7&&day>31) cout<<"input error"<<endl;
	if(month==8&&day>31) cout<<"input error"<<endl;
	if(month==10&&day>31) cout<<"input error"<<endl;
	if(month==12&&day>31) cout<<"input error"<<endl;
	if(isleapyear()==true&&month==2&&day>29) 
		cout<<"input error"<<endl;
    if(isleapyear()==false&&month==2&&day>28) 
		cout<<"input error"<<endl;
	if(month==4&&day>30) cout<<"input error"<<endl;
	if(month==6&&day>30) cout<<"input error"<<endl;
	if(month==9&&day>30) cout<<"input error"<<endl;
	if(month==11&&day>30) cout<<"input error"<<endl;
}

//输出中文日期

void Date::DisplayChineseDate()
{
	cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
}

//输出英文日期
void Date::DisplayAmericaDate()
{
	if(month=1) 
		cout<<"January"<<day<<","<<year<<endl;
	else if(month=2) 
		cout<<"February"<<day<<","<<year<<endl;
	else if(month=3) 
		cout<<"March"<<day<<","<<year<<endl;
	else if(month=4) 
		cout<<"April"<<day<<","<<year<<endl;
	else if(month=5) 
		cout<<"May"<<day<<","<<year<<endl;
	else if(month=6) 
		cout<<"June"<<day<<","<<year<<endl;
	else if(month=7) 
		cout<<"July"<<day<<","<<year<<endl;
	else if(month=8) 
		cout<<"August"<<day<<","<<year<<endl;
	else if(month=9) 
		cout<<"September"<<day<<","<<year<<endl;
	else if(month=10) 
		cout<<"October"<<day<<","<<year<<endl;
	else if(month=11) 
		cout<<"November"<<day<<","<<year<<endl;
	else if(month=12) 
		cout<<"December"<<day<<","<<year<<endl;
}

//输出是否为闰年

void Date::Leapyear()
{
	if(isleapyear()==true)  cout<<"今年是闰年"<<endl;
	else cout<<"今年不是闰年"<<endl;
}

//基姆拉尔森计算公式求得某天星期几

void Date::NumbersOfWeek()
{
	int w;
	w=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
	if(w==0)
		cout<<year<<"年"<<month<<"月"<<day<<"日"<<"是星期日"<<endl;
	else
		cout <<year<<"年"<<month<<"月"<<day<<"日"<<"今天是星期"<<w<<endl;
}
//输出日历信息

void Date::PrintCalendar()
{
	int i,j,l=1,d=1,a;
	j=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			a=31;
		else if (month==4||month==6||month==9||month==11) 
			a=30;
		else if (isleapyear()==true&&month==2) 
			a=29;	
		else if (isleapyear()==false&&month==2)
			a=28;
	//循环输出日历信息
	cout<<"*********************************"<<endl;
	cout<<"sun  mon  tue  wed  thu  fri  sta"<<endl;
	for(i=0;i<=j;i++)
	{
		cout<<"     ";
		l=l+1;
	}
	for(d=1;d<=a;d++)
	{
		cout<<d<<"   ";
		l=l+1;
		if(l==8)
		{
			cout<<"\n";
		    l=1;
		}
	}
	cout<<"\n"<<"*********************************"<<endl;
}
//主函数，测试各个函数功能是否实现
int main(void)
{
	int y,m,d;
	Date date;
	cout<<"please input date :";
	cin>>y>>m>>d;  //输入值
	//调用各个函数
	date.setYear(y);
	date.setMonth(m);
	date.setDay(d);
	date.getTomorrow();
	date.getYesterday();
	date.error();
	date.displayChineseDate();
	date.displayAmericaDate();
	date.leapyear();
	date.numbersOfWeek();
	date.printCalendar();
	return 0;
}