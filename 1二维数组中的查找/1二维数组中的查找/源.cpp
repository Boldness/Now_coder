/*在一个有规律的二维数组中查找具体的某个数字*/
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
		while (row >=0 && i<col){ //col是右边界
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
		cout << "找到了" << endl;
	}
	else{
		cout << "没找到" << endl;
	}
	system("pause");
}