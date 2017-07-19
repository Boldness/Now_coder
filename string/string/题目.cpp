#include<iostream>
using namespace std;
/*1.编写一个宏，输入两个数字，返回较小的*/
#define MIN(A,B)  ((A)<=(B)?(A):(B))
/*2.预编译的作用，为了防止重复包含的情况
	下面那个是为了实现混合编程
	c和c++实现方式不一样，c++的函数名字地址保存是会含有参数类型以及个数
	使用下面那个是说明下面这段代码是用C风格进行编译
	因此实现了混合编程
*/
#ifndef __INCvxWorksh
#define __INCvxWorksh
#ifdef __cplusplus
extern "C"{
#endif
#ifdef __cplusplus
}
#endif
#endif
/*3.实现编写类String的构造函数，析构函数，赋值函数*/
class String{
public:
	 String(const char *str =nullptr);
	 String(const String&other);
	 ~String(void);
	 String&operator=(const String&other);
private:
	char *m_data;
};
String::String(const char *str){
	if (str == nullptr){
		m_data = new char[1];
		*m_data = '\0';
	}
	else{
		int length = strlen(str);
		m_data = new char[length+1];
		strcpy(m_data,str);
	}
}
String::~String(void){
	delete[] m_data;
}
String::String(const String&other){
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data,other.m_data);
}
String& String::operator=(const String&other){
	if (this == &other){
		return *this;
	}
	else
	{
		delete[]m_data;
		int length = strlen(other.m_data);
		m_data = new char[length + 1];
		strcpy(m_data, other.m_data);
	}
}





