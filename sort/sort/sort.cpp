/*八种排序方法*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution
{
public:
	void Insert_Sort(vector<int> &a, int num);
	void Simple_Sort(vector<int> &a, int n);
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
		a[j] = key; //如果哨兵元素比之前的元素大，就放在自己挖的坑里面即可：搬起石头砸自己的脚丫子
	}
/*
	插入排序法，时间复杂度为n平方
	从第二个元素开始，往后依次挖出来，然后和之前的元素进行比较，如果比其前面的元素小，
	就和它互相交换位置，直到第1个元素为止
*/
}
void Solution::Simple_Sort(vector<int> &a, int n){
	for (int i = 0; i < n; i++){
		int key = a[i];
		int index = i;//这里都是相对位置，起始地址
		for (int j = i + 1; j < n; j++){
			if (a[j] < key){
				key = a[j];
				index = j;
			}
		}
			int tmp = a[i];
			a[index] = tmp;
			a[i] = key;
	}
}
void main()
{
	vector<int> a = {44,66,22,45,78,98,34};
	Solution aa;
	//aa.Insert_Sort(a,a.size());
	aa.Simple_Sort(a,a.size());
	for (auto p : a){   //这里循环遍历容器内元素
		cout << p << " ";
	}
 	cout << "hello" << endl;
	system("pause");
} 