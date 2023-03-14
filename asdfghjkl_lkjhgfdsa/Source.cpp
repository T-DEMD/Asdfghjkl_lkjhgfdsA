#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector <string> vs;

int main()
{
	string asdfg;
	string file_name;
	cin >> file_name;
	file_name;
	ifstream ifs(file_name);
	if (!ifs)
	{
		cerr;
	}

	while (getline(ifs, asdfg))
	{
		cout << "getline: " << asdfg << endl << endl;
		vector<char> vch;
		for (char ch : asdfg)
		{
			vch.push_back(ch);
		}

		reverse(vch.begin(), vch.end());
		string s;
		for (int i = 0; i < vch.size(); i++)
		{
			s += vch[i];
		}

		vs.push_back(s);
	}

	reverse(vs.begin(), vs.end());

	for (int i = 0; i < vs.size(); i++)
	{
		cout << vs[i] << endl;
	}

	ofstream ofs(file_name);
	if (!ofs)
	{
		cerr;
	}

	for (int i = 0; i < vs.size(); i++)
	{
		ofs << vs[i] << endl;
	}

	return 0;
}