/*��һ���й��ɵĶ�ά�����в��Ҿ����ĳ������*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Soultion{
public:
	bool Find(int target,vector<vector<int>>array){
		int row = array.size() - 1;
		int col = array[0].size();
		int i = 0;
		while (row >=0 && i<col){ //col���ұ߽�
			if (target == array[row][i]){
				return true;
			}
			else if (target >= array[row][i]){
				i++;
			}
			else{
				row--;
			}
		}
		return false;
	}
};
void main(){
	vector<vector<int>>array = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }};
	Soultion pass;
	if (pass.Find(6, array)){
		cout << "�ҵ���" << endl;
	}
	else{
		cout << "û�ҵ�" << endl;
	}
	system("pause");
}