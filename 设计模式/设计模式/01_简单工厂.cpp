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
	��Ҫ���˼�룺
	�������ã�  �ϲ�͵ײ㶼ȥ�����ӿ� ��������� 
	���Ʒ�ת��  ���������Ȩ������������Ա�����
	����ע�룺  �Ҳ������ˣ��㴴���ø��Ҿ����ˣ���ӵ�����ĳ������ָ�룬
				�����㴴�����ڸ��ң��ҿ���ֱ�ӵ���
	�򵥹�����˼�룺������ʲô���Ķ��󣬸�������ȥ����
*/
void main_01()
{
	Operation*oper1 =  OperationFactory::CreateOperation('+');
	oper1->a = 100;
	oper1->b = 200;
	cout<<oper1->GetResult()<<endl;
	system("pause");
}
