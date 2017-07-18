/*
	���󹤳��ǽ����������Ȩ��������һ��������������õ�һ����Ʒ��ȥ����һ������
	ͨ��������ͬ�Ĺ����õ���ͬ�Ĳ�Ʒ��ͨ����ͬ�Ĺ����з��صĲ�Ʒ����ָ��ȥ��ɵ���
	��ͬ��Ʒ�Ĺ��ܡ�
*/
#include <iostream>
using namespace std;
class Fruit
{
public:
	virtual void sayname(){
		cout << "fruit\n";
	}
};
class FruitFactory
{
public:
	virtual Fruit* getFruit(){
		return new Fruit();
	}
};
//�㽶
class Banana : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "Banana \n" << endl;
	}
};
//�㽶����
class BananaFactory : public  FruitFactory
{
public:
	virtual Fruit* getFruit()
	{
		return new Banana;
	}
};
//ƻ��
class Apple : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "Apple \n" << endl;
	}
};
//ƻ������
class AppleFactory : public  FruitFactory
{
public:
	virtual Fruit* getFruit()
	{
		return new Apple;
	}
};

void main_02()
{
	FruitFactory * ff = NULL;
	Fruit *fruit = NULL;

	//1�����㽶����
	ff = new BananaFactory();
	fruit = ff->getFruit();
	fruit->sayname();

	delete fruit;
	delete ff;

	//2����ƻ������
	ff = new AppleFactory();
	fruit = ff->getFruit();
	fruit->sayname();

	delete fruit;
	delete ff;

	cout << "hello....\n";
	system("pause");
}
