#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<int> solution(string myString)
{
    vector<int> answer;
    stringstream sstr(myString);
    
    string strtemp;
    while (getline(sstr, strtemp, 'x'))
    {
        answer.push_back(strtemp.size());
    }

    if ('x' == *(myString.end() - 1))
    {
        answer.push_back(0);
    }
    return answer;
}

int main()
{
    solution("oxooxoxxox");
    return 0;
}