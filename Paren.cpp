#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ifstream in;
	ofstream out;
	in.open("input");
	out.open("output");

	int t, k, L, R, n;
	in >> t;
	for(k=1; k<=t; k++){
		in >> L >> R;
		n = min(L, R);
		n = (n * (n+1))/2;
		out << "Case #" << k << ": " << n << '\n';
	}
	in.close();
	out.close();
	return 0;
}
