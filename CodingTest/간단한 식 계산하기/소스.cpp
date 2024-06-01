#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> signs = { "+", "-", "*" };
vector<string> valuestrs = {};

int solution(string binomial) 
{
    int answer = 0;
    
    string sign;
    for (size_t i = 0; i < signs.size(); i++)
    {
        if (string::npos != binomial.find(signs[i]))
        {
            sign = signs[i];
            break;
        }
    }

    stringstream strstream(binomial);
    string valuestr;
    while (getline(strstream, valuestr, sign[0]))
    {
        valuestrs.push_back(valuestr);
    }

    if (sign[0] == '+')
    {
        answer = stoi(valuestrs[0]) + stoi(valuestrs[1]);
    }
    else if (sign[0] == '-')
    {
        answer = stoi(valuestrs[0]) - stoi(valuestrs[1]);
    }
    else if (sign[0] == '*')
    {
        answer = stoi(valuestrs[0]) * stoi(valuestrs[1]);
    }

    return answer;
}
