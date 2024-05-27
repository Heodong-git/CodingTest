#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2)
{
    int answer = 0;

    // 배열의 길이가 다르다면 길이가 긴쪽이 더 크다.
    if (arr1.size() != arr2.size())
    {
        if (arr1.size() < arr2.size())
        {
            answer = -1;
        }
        else
        {
            answer = 1;
        }
    }

    // 배열의 길이가 같다면 각 배열의 모든 원소의 합을 비교 
    if (arr1.size() == arr2.size())
    {
        int arr1result = 0;
        int arr2result = 0;
        for (size_t i = 0; i < arr1.size(); i++)
        {
            arr1result += arr1[i];
            arr2result += arr2[i];
        }

        if (arr1result < arr2result)
        {
            answer = -1;
        }
        else if (arr1result > arr2result)
        {
            answer = 1;
        }
        else
        {
            answer = 0;
        }
    }


    return answer;
}

int main()
{
    solution({ 1, 2, 3, 4, 5 }, { 3, 3, 3, 3, 3 });

    return 0;
}