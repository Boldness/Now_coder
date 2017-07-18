/*��������ģʽ
	���Ƚ���һ�����Ƚ���һ�������п��Դ�����ͬ�Ĳ�Ʒ�壬���Դ���һ���Ʒ���������Ʒ�����
	���ǿ��Դ���һ������Ĺ�����Ȼ��ȥ��������������������������Ĳ�ͬ�Ĳ�Ʒ
	�ܹ��õ���ͬ���ҵĲ�ͬ��Ʒ

	���ص��Ǳ��˼Ҳ�Ʒ�Ļ����ָ�룬Ȼ���˼ҿ���ȥ�����˼ҵĲ�Ʒȥ��
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
//�Ϸ��㽶
class SouthBanana : public Fruit{
public:
	virtual void sayname()	{
		cout << "South Banana \n" << endl;
	}
};
//�Ϸ�ƻ��
class SouthApple : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "South Apple \n" << endl;
	}
};
//�����㽶
class NorthBanana : public Fruit
{
public:
	virtual void sayname()
	{
		cout << "North Banana \n" << endl;
	}
};
//����ƻ��
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
