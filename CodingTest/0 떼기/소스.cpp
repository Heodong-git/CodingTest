#include <string>
#include <vector>

using namespace std;

string solution(string n_str) 
{
    string answer = "";
	int index = -1;
	// 1�����̽�. ��ù��°�� 0�� ���Ծ�. �׷���
	if (n_str[0] == '0')
	{
		for (size_t i = 1; i < n_str.length(); i++)
		{
			if (n_str[i] != '0')
			{
				index = i;
				break;
			}
		}
		answer = n_str.substr(index, n_str.length() - index);
	}
	else
	{
		answer = n_str;
	}
	

    return answer;
}