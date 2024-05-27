#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2)
{
    int answer = 0;

    // �迭�� ���̰� �ٸ��ٸ� ���̰� ������ �� ũ��.
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

    // �迭�� ���̰� ���ٸ� �� �迭�� ��� ������ ���� �� 
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