#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ifstream in;
	ofstream out;
	in.open("input");
	out.open("output");

	int t, k, i, n, j;
	string s, a;
	in >> t;
	in.ignore();
	for(k=1; k<=t; k++){
		getline(in, s);
		n = s.size();
		out << "Case #" << k << ": ";
		a.clear();
		for(i=n-1; i>=-1; --i){
			if(i>-1 && s[i]!=' '){
				a.push_back(s[i]);
			} else {
				reverse(a.begin(), a.end());
				out << a << ' ';
				a.clear();
			}
		}
		out << '\n';
	}
	in.close();
	out.close();
	return 0;
}
