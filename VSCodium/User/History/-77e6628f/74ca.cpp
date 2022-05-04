#include <iostream>
#include <vector>

using namespace std;


vector<int> solution(int m, int n, vector<vector<int>> picture) {
	int numberOfA = 0;
	int maxA = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j > 0 && picture[i][j - 1] != picture[i][j]) {

			}	
		}
	}

	
	vector<int> answer = {numberOfA, maxA};
	return answer;
}

int main() {
	vector<vector<int>> picture = {{1, 1, 1, 0},{1, 2, 2, 0}, 
									{1, 0, 0, 1}, {0, 0, 0, 1}, 
									{0, 0, 0, 3}, {0, 0, 0, 3}};

	
	vector<int> answer = solution(6, 4, picture);
	cout << "[ ";
	for (auto c: answer) {
		cout << c << " ";
	}
	cout << "]" << endl;

	return 0;
}
