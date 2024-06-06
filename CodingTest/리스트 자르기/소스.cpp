#include <string>
#include <vector>

using namespace std;


vector<int> solution(int n, vector<int> slicer, vector<int> num_list) 
{
    vector<int> answer;
	int interval = -1;
	switch (n)
	{
	case 1:
	{
		for (size_t i = 0; i <= slicer[1]; i++)
		{
			answer.push_back(num_list[i]);
		}
		break;
	}
	case 2:
	{
		for (size_t i = slicer[0]; i < num_list.size(); i++)
		{
			answer.push_back(num_list[i]);
		}
		break;
	}
	case 3:
	{
		for (size_t i = slicer[0]; i <= slicer[1]; i++)
		{
			answer.push_back(num_list[i]);
		}
		break;
	}
	case 4:
	{
		for (size_t i = slicer[0]; i <= slicer[1]; i += slicer[2])
		{
			answer.push_back(num_list[i]);
		}
		break;
	}
	}

    return answer;
}

// 입력값 〉 2, [0, 1, 1], [10, 8, 6, 4, 2]
// 기댓값 〉[10, 8, 6, 4, 2]
int main()
{

	solution(2, { 0, 1, 1 }, { 10, 8 ,6 , 4 , 2 });
	return 0;
}