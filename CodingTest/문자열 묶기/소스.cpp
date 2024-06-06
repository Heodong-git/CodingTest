#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> strArr) 
{
    int answer = 0;
    map<int, vector<string>> stringsmap;

    int strlength = -1;
    for (size_t i = 0; i < strArr.size(); i++)
    {
        strlength = strArr[i].length();
        string str = to_string(strlength);
        stringsmap[strlength].push_back(strArr[i]);
    }

    map<int, vector<string>>::iterator startiter = stringsmap.begin();
    map<int, vector<string>>::iterator enditer = stringsmap.end();

    int maxsize = 0;
    for (; startiter != enditer; ++startiter)
    {
         int cursize = ((*startiter).second).size();
         if (maxsize <= cursize) 
         {
             maxsize = cursize;
         }
    }

    answer = maxsize;

    return answer;
}

int main()
{
    solution({ "a", "bc", "d", "efg", "hi" });
    return 0;
}