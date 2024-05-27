#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> answer;
    int startidx = 0;
    int endidx = 0;

    for (size_t i = 0; i < my_string.length(); ++i)
    {
        if (my_string[i] != ' ')
        {
            startidx = i;
            int length = 0;
            for (size_t j = i + 1; j <= my_string.length(); j++)
            {
                ++length;
                if (my_string[j] == ' ' || my_string[j] == 0)
                {
                    break;
                }
            }
            answer.push_back(my_string.substr(startidx, length));
            i += length;
        }

    }
    return answer;
}

int main()
{
    solution(" i    love  you");
    return 0;
}