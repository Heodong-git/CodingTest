#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string my_string, vector<int> indices) 
{
    string answer = "";
    string str;
    str = my_string;
    for (size_t i = 0; i < indices.size(); i++)
    {
        int idx = indices[i];
        str[idx] = ' ';
    }

    stringstream sstr(str);
    string strtemp;
    while (getline(sstr, strtemp, ' '))
    {
        answer += strtemp;
    }

    return answer;
}

int main()
{
    solution("apporoograpemmemprs", { 1, 16, 6, 15, 0, 10, 11, 3 });

    return 0;
}