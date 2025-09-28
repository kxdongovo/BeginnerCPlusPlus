#include <iostream>
using namespace std;

void varable()
{
	//常量
	const int a = 30;
	//或者在 文件头
	//   #define ZERO 0
}

void dataType()
{
	//整形  sizeof 可以返回占用的字节数
	bool isDay = true; //8位 1字节
	char name = '泥'; //8位 1字节
	short a = 1; //16位 2字节 
	int b = 2; //32或16位（一般32） 4字节
	long c = 3; //32位 4字节
	long long d = 4; //64位  8字节

	//无符号整形  在前面加 unsigned
	unsigned short e = 0;

	//浮点类型
}

