#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	map <char,int> m;
	vector <string> v;
	for (int i = 0; i < 2; i++) {
		string s; cin >> s;
		v.push_back(s);
	}
	bool flag = 0;
	if (v[0].size() != v[1].size())
		cout << "NO" <<endl;
	
	else{
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < v[i].size(); j++) {
				m[v[i][j]]++;
			}
		}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < v[i].size(); j++) {
				if (m[v[i][j]] % 2 != 0){
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			cout << "No" << endl;
		else
			cout << "Yes"<< endl;
	}
	
	return 0;
}
