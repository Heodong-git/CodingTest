#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) 
{
    string answer = "";
    
    vector<vector<char>> chars;
    chars.resize(my_string.length() / m);
    for (size_t i = 0; i < chars.size(); i++)
    {
        chars[i].resize(m);
    }
    
    int currentidx = 0;
    for (size_t i = 0; i < my_string.length() / m; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            chars[i][j] = my_string[currentidx];
            ++currentidx;
        }
    }
   
    for (size_t i = 0; i < my_string.length() / m; i++)
    {
        answer += chars[i][c - 1];
    }
    
    return answer;
}

int main()
{
    solution("ihrhbakrfpndopljhygc", 4, 2);
    return 0;
}