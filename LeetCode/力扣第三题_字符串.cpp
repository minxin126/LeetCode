/*********************************************************************
Description:
Ѱ��һ���ַ����в�ͬ�ַ�������Ӵ���Ȼ�����������Ӵ��ĳ��ȡ�

**********************************************************************/
#include"iostream"
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {//��Ʊ�̣��ӵ�һ��ʵϰ��ʼ
		int  size, i = 0, j, k, max = 0;
		size = s.size();//sΪ��Ӧ���ַ���
		for (j = 0; j < size; j++) {
			for (k = i; k < j; k++) //k��i�ٴ�ͬ��

				if (s[k] == s[j]) {//���Ԫ����ͬ
					i = k + 1;//i����һ��������ȥ�Ƚ�
					break;
				}

			if (j - i + 1 > max)
				max = j - i + 1;//max������
		}
		return max;
	}
};
int main()
{
	string s = "abcabcbb";
	cout << "s:abcabcbb" << endl;
	Solution Sol;
	int result = 0;
	result = Sol.lengthOfLongestSubstring(s);
	cout << "max:" << result << endl;

	//for (int i = 0; i < 4; i++)//�൱���ж�
	//{
	//	cout << "i:" << i << endl;
	//}
}