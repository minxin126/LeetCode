/***********************************************************************
*author:min and kai
*function:找到两个加数的索引
*time:2019-3-31
*version:ver 1.0
************************************************************************/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 0;
class Solution
{
public:
	vector<int> twoSum(vector<int>&numbers, int target)
	{
		int sz = numbers.size();     //sz为numbers这个向量中元素得个数
		vector<int> index; //向量的新的对象为Index
		for (int i = 0; i < sz; i++)
			for (int j = i + 1; j < sz; j++)
				if (numbers[i] + numbers[j] == target) //两个数得和等于目标值
				{
					index.push_back(i + 1);  //返回i从1开始数的索引，存入index这个新的对象
					index.push_back(j + 1);  //返回j从1开始数的索引，存入index这个新的对象
					return index;//返回这个向量对象
				}
	}
};
int main()
{
	Solution s;   //类的对象
	vector<int> in;  //应该是这个向量的对象为in
	int n, t;
	cout << "输入n：";
	cin >> n;
	cout << "输入t:";
	while (n--)
	{
		cin >> t;
		in.push_back(t);   //依次将元素添加到向量中
	}
	cout << "再输入一个目标值：";
	cin >> t;
	in = s.twoSum(in, t);   //调用对象下的方法，并且将index这个新的对象传覆盖In对象
	cout << in[0] << ' ' << in[1] << endl;//输出第一个和第二个元素的元素（in对象中两个加数的索引号）
	return 0;
}
//分别使用vector这个向量，创建了二个对象：
//in对象：存入n个输入的数值
//index：将两个满足条件的加数存入这个向量