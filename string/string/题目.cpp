#include<iostream>
using namespace std;
/*1.��дһ���꣬�����������֣����ؽ�С��*/
#define MIN(A,B)  ((A)<=(B)?(A):(B))
/*2.Ԥ��������ã�Ϊ�˷�ֹ�ظ����������
	�����Ǹ���Ϊ��ʵ�ֻ�ϱ��
	c��c++ʵ�ַ�ʽ��һ����c++�ĺ������ֵ�ַ�����ǻẬ�в��������Լ�����
	ʹ�������Ǹ���˵��������δ�������C�����б���
	���ʵ���˻�ϱ��
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
/*3.ʵ�ֱ�д��String�Ĺ��캯����������������ֵ����*/
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





