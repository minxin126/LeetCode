/*********************************************************************
Description:
寻找一个字符串中不同字符的最长的子串，然后输出具体的子串的长度。

**********************************************************************/
#include"iostream"
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {//设计编程，从第一次实习开始
		int  size, i = 0, j, k, max = 0;
		size = s.size();//s为对应的字符串
		for (j = 0; j < size; j++) {
			for (k = i; k < j; k++) //k和i再次同步

				if (s[k] == s[j]) {//如果元素相同
					i = k + 1;//i领先一个，继续去比较
					break;
				}

			if (j - i + 1 > max)
				max = j - i + 1;//max逐渐增加
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

	//for (int i = 0; i < 4; i++)//相当于判断
	//{
	//	cout << "i:" << i << endl;
	//}
}