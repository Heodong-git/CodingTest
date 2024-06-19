#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    int size = numbers.size();
    sort(numbers.begin(), numbers.end());

    int first, second;
    first = numbers[0] * numbers[1];
    second = numbers[size - 1] * numbers[size - 2];

    answer = max(first, second);

    return answer;
}