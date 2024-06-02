#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(string myString)
{
    vector<string> answer;
    stringstream sstrtemp(myString);
    string strtemp;
    while (getline(sstrtemp, strtemp,'x'))
    {
        if (strtemp.size() == 0)
        {
            continue;
        }
        answer.push_back(strtemp);
    }

    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    solution("dxxxccxbbbxaaaa");
    return 0;
}