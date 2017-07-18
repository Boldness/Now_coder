/*
	抽象工厂是将创建对象的权利交给了一个工厂，我们想得到一个产品就去创建一个工厂
	通过创建不同的工厂得到不同的产品，通过不同的工厂中返回的产品基类指针去完成调用
	不同产品的功能。
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
//香蕉
class Banana : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "Banana \n" << endl;
	}
};
//香蕉工厂
class BananaFactory : public  FruitFactory
{
public:
	virtual Fruit* getFruit()
	{
		return new Banana;
	}
};
//苹果
class Apple : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "Apple \n" << endl;
	}
};
//苹果工厂
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

	//1创建香蕉工厂
	ff = new BananaFactory();
	fruit = ff->getFruit();
	fruit->sayname();

	delete fruit;
	delete ff;

	//2创建苹果工厂
	ff = new AppleFactory();
	fruit = ff->getFruit();
	fruit->sayname();

	delete fruit;
	delete ff;

	cout << "hello....\n";
	system("pause");
}
