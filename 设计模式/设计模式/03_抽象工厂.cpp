/*工厂方法模式
	又先进了一步，先进在一个工厂中可以创建不同的产品族，可以创建一组产品：工厂与产品的组合
	我们可以创造一个具体的工厂，然后去调用这个工厂产生这个工厂建造的不同的产品
	能够得到不同厂家的不同产品

	返回的是别人家产品的基类的指针，然后人家可以去控制人家的产品去了
*/
#include<iostream>
using	namespace std;
class Fruit{
public:
	virtual void sayname(){
		cout << "fruit\n";
	}
};
class FruitFactory
{
public:
	virtual Fruit* getApple(){
		return new Fruit();
	}
	virtual Fruit* getBanana(){
		return new Fruit();
	}
};
//南方香蕉
class SouthBanana : public Fruit{
public:
	virtual void sayname()	{
		cout << "South Banana \n" << endl;
	}
};
//南方苹果
class SouthApple : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "South Apple \n" << endl;
	}
};
//北方香蕉
class NorthBanana : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "North Banana \n" << endl;
	}
};
//北方苹果
class NorthApple : public Fruit
{
public:
	virtual void sayname(){
		cout << "North Apple \n" << endl;
	}
};
class SourthFruitFactory : public FruitFactory
{
public:
	virtual Fruit* getApple(){
		return new SouthApple();
	}
	virtual Fruit* getBanana()	{
		return new SouthBanana();
	}
};
class NorthFruitFactory : public FruitFactory
{
public:
	virtual Fruit* getApple(){
		return new NorthApple();
	}
	virtual Fruit* getBanana(){
		return new NorthBanana();
	}
};
void main()
{
	FruitFactory * ff = NULL;
	Fruit *fruit = NULL;

	ff = new SourthFruitFactory();
	fruit = ff->getApple();
	fruit->sayname();
	fruit = ff->getBanana();
	fruit->sayname();

	delete fruit;
	delete ff;

	ff = new NorthFruitFactory();
	fruit = ff->getApple();
	fruit->sayname();
	fruit = ff->getBanana();
	fruit->sayname();

	delete fruit;
	delete ff;

	cout << "hello\n";
	system("pause");
}
