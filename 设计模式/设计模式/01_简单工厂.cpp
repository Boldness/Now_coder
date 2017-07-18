#include<iostream>
#include<string>
using namespace std;
class Operation{
public:
	double a, b;
	virtual double GetResult() = 0;
};
class AddOperation :public Operation{
	virtual double GetResult(){
		return a + b;
	}
};
class SubOperation :public Operation{
	virtual double GetResult(){
		return a - b;
	}
};
class MultiOpration :public Operation{
	virtual double GetResult(){
		return a * b;
	}
};
class DivOperation :public Operation{
	virtual double GetResult(){
		return a / b;
	}
};
class OperationFactory{
public:
	static Operation*CreateOperation(char c){
		switch (c)
		{
		case'+':
			return new AddOperation();
			break;
		case'-':
			return new SubOperation();
			break;
		case'*':
			return new DivOperation();
			break;
		case'/':
			return new DivOperation();
			break;
		}
	}
};
/*
	主要体会思想：
	依赖倒置：  上层和底层都去依赖接口 面向对象编程 
	控制翻转：  创建对象的权利交给操作人员来完成
	对象注入：  我不创建了，你创建好给我就是了，我拥有它的抽象基类指针，
				这样你创建好在给我，我可以直接调用
	简单工厂的思想：你想用什么样的对象，根据条件去创建
*/
void main_01()
{
	Operation*oper1 =  OperationFactory::CreateOperation('+');
	oper1->a = 100;
	oper1->b = 200;
	cout<<oper1->GetResult()<<endl;
	system("pause");
}
