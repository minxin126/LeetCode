/***********************************************************************
*author:min and kai
*function:�ҵ���������������
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
		int sz = numbers.size();     //szΪnumbers���������Ԫ�صø���
		vector<int> index; //�������µĶ���ΪIndex
		for (int i = 0; i < sz; i++)
			for (int j = i + 1; j < sz; j++)
				if (numbers[i] + numbers[j] == target) //�������ú͵���Ŀ��ֵ
				{
					index.push_back(i + 1);  //����i��1��ʼ��������������index����µĶ���
					index.push_back(j + 1);  //����j��1��ʼ��������������index����µĶ���
					return index;//���������������
				}
	}
};
int main()
{
	Solution s;   //��Ķ���
	vector<int> in;  //Ӧ������������Ķ���Ϊin
	int n, t;
	cout << "����n��";
	cin >> n;
	cout << "����t:";
	while (n--)
	{
		cin >> t;
		in.push_back(t);   //���ν�Ԫ����ӵ�������
	}
	cout << "������һ��Ŀ��ֵ��";
	cin >> t;
	in = s.twoSum(in, t);   //���ö����µķ��������ҽ�index����µĶ��󴫸���In����
	cout << in[0] << ' ' << in[1] << endl;//�����һ���͵ڶ���Ԫ�ص�Ԫ�أ�in���������������������ţ�
	return 0;
}
//�ֱ�ʹ��vector��������������˶�������
//in���󣺴���n���������ֵ
//index�����������������ļ��������������