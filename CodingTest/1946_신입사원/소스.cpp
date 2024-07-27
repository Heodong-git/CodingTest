#include <iostream>
#include <vector>
#include <utility>

struct Score
{
	int document;
	int interview;
};

std::vector<std::pair<int, Score>> v;

int max = 0;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::vector<std::pair<int, Score>> v;
	std::vector<bool> checkvector;

	int T;
	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N;
		std::cin >> N;

		max = N;

		for (int j = 0; j < N; j++)
		{
			int docu, inter;
			std::cin >> docu >> inter;

			Score s;
			s.document = docu;
			s.interview = inter;
			v.push_back({ j , s });
		}

		for (int i = 0; i < v.size(); i++)
		{
			int current = i;
			bool documentcheck = false;
			bool interviewcheck = false;
			for (int j = 0; j < v.size(); j++)
			{
				if (current == j)
				{
					continue;
				}

				Score curscore = v[current].second;
				Score difscore = v[j].second;
				if (curscore.document > difscore.document)
				{
					documentcheck = true;
				}
				if (curscore.interview > difscore.interview)
				{
					interviewcheck = true;
				}
				if (true == documentcheck && true == interviewcheck)
				{
					--max;
					break;
				}

				documentcheck = false;
				interviewcheck = false;
			}
		}

		std::cout << max << std::endl;

		v.clear();
		max = 0;
	}

	return 0;
}