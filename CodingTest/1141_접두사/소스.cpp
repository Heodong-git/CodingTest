#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	int N;
	std::cin >> N;
	std::vector<std::string> v;
	v.resize(N);

	for (int i = 0; i < N; i++)
	{
		std::cin >> v[i];
	}

	// 정렬
	sort(v.begin(), v.end());

	int result = N;
	int curidx = 0;
	for (int i = 0; i < N - 1; i++)
	{
		curidx = i;
		// 접두사인지 체크, 반환값이 0 이면 접두사임 
		if (0 == v[i + 1].find(v[curidx]))
		{
			--result;
		}
	}

	printf("%d", result);

	return 0;
}