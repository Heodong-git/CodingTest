#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) 
{
    vector<int> answer;
	for (size_t i = 0; i < delete_list.size(); i++)
	{
		int deletevalue = delete_list[i];
		arr.erase(remove(arr.begin(), arr.end(), deletevalue), arr.end());
	}
	answer = arr;
    return answer;
}


int main()
{
	solution({ 293, 1000, 395, 678, 94 }, { 94, 777, 104, 1000, 1, 12 });

	return 0;
}