#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n)
{
    vector<int> answer;
    answer.push_back(num_list[0]);
    
    for (int i = n; i < num_list.size(); i += n)
    {
        answer.push_back(num_list[i]);
    }


    return answer;
}

int main()
{
    vector<int> v;
    v = { 4, 2, 6, 1, 7, 6 };

    solution(v, 2);

    return 0;
}