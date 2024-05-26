#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts)
{
    string answer = "";
    string str;

    for (size_t i = 0; i < my_strings.size(); ++i)
    {
        str = my_strings[i];
        int s = parts[i][0];
        int e = parts[i][1];

        for (int j = s; j <= e; j++)
        {
            answer += str[j];
        }
    }
    return answer;
}

int main()
{
    solution({ "progressive", "hamburger", "hammer", "ahocorasick" }, { {0, 4} ,{1, 2},{3, 5},{7, 7} });


    return 0;
}