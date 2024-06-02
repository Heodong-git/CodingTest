#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) 
{
    int answer = 0;
	for (size_t i = 0; i < arr.size(); i++)
	{
		for (size_t j = 0; j < arr[i].size(); j++)
		{
			if (arr[i][j] != arr[j][i]) 
			{
				return answer;
			}
		}
	}
	
	answer = 1;
    return answer;
}

int main()
{
	solution({ {19, 498, 258, 587 }, {63, 93, 7, 75}, {258, 7, 1000, 73},{587, 754, 723, 1} });
	

	return 0;
}