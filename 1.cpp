#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
//1431 시리얼번호
using namespace std;
int integer(string Su) {
	int sum = 0;
	for (int i = 0; i < Su.size(); i++) {
		if (Su[i] >= 48 && Su[i] <= 57) sum += Su[i]-'0';
	}
	return sum;
}
bool cmp(const string &a, const string &b) {
	if (a.size() > b.size()) return false;
	else if (a.size() < b.size()) return true;
	else if (integer(a) > integer(b)) return false;
	else if (integer(a) < integer(b)) return true;
	else if (a > b) return false;
	else return true;
}
int main() {
	int N;
	cin >> N;
	vector<string> Ar;
	string M;
	for (int i = 0; i < N; i++) {
		cin >> M;
		Ar.push_back(M);
	}
	sort(Ar.begin(), Ar.end(),cmp);
	for (int i = 0; i < N; i++) cout << Ar[i] << endl;
}