#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Infomation
{
    int number;
    int rank;
};

bool Compair(const Infomation& A, const Infomation& B)
{
    return A.rank < B.rank;
}

int solution(vector<int> rank, vector<bool> attendance) 
{
    int answer = 0;
    vector<Infomation> vInfo;
    for (size_t i = 0; i < rank.size(); i++)
    {
        if (true == attendance[i])
        {
            Infomation Info;
            Info.number = i;
            Info.rank = rank[i];
            vInfo.push_back(Info);
        }
    }

    sort(vInfo.begin(), vInfo.end(), Compair);

    answer = 10000 * vInfo[0].number + 100 * vInfo[1].number + vInfo[2].number;

    return answer;
}

int main()
{
    solution({ 3, 7, 2, 5, 4, 6, 1 }, { false, true, true, true, true, false, false });

    return 0;
}