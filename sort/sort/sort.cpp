/*�������򷽷�*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution
{
public:
	void Insert_Sort(vector<int> &a, int num);
	void Simple_Sort(int *a, int n);
	void Pop_Sort(int *a, int n);
	void Qucik_Sort(int *a,int l,int r);
	void Shell_Sort(int *a,int n);
	void Heap_Sort(int *a,int n);
	void Merge_Sort(int *a,int l,int mid,int r);
	void Isdradix_sort(int *arr,int begin,int end);
	void Binary_Search(int *a,int n,int x);
};
void Solution::Insert_Sort(vector<int> &a, int num){
	int i=0,j=0, key=0;
	for (int i = 1; i < num;i++){
		int key = a[i];
		for ( j = i; j>0 && a[j - 1] > key; j--){
			a[j] = a[j - 1];
		}
		a[j] = key; //����ڱ�Ԫ�ر�֮ǰ��Ԫ�ش󣬾ͷ����Լ��ڵĿ����漴�ɣ�����ʯͷ���Լ��Ľ�Ѿ��
	}
/*
	�������򷨣�ʱ�临�Ӷ�Ϊnƽ��
	�ӵڶ���Ԫ�ؿ�ʼ�����������ڳ�����Ȼ���֮ǰ��Ԫ�ؽ��бȽϣ��������ǰ���Ԫ��С��
	�ͺ������ཻ��λ�ã�ֱ����1��Ԫ��Ϊֹ

*/
}
void main()
{
	vector<int> a = {44,66,22,45,78,98,34};
	Solution aa;
	aa.Insert_Sort(a,a.size());
	for (auto p : a){   //����ѭ������������Ԫ��
		cout << p << " ";
	}
 	cout << "hello" << endl;
	system("pause");
} 