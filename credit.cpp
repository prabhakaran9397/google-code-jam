#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, c, l, i, j, k;
	ifstream in;
	ofstream out;
	in.open("input");
	out.open("output");
	in >> t;
	for(k=1; k<=t; k++)
	{
		in >> c >> l;
		int p[l+1];
		for(i=1; i<=l; i++)
			in >> p[i];

		for(i=1; i<=l; i++)
			for(j=i+1; j<=l; j++)
				if(c == p[i]+p[j])
					goto o;
o:
		out << "Case #" << k << ": "<< i << " " << j << endl;
	}
	in.close();
	out.close();
	return 0;
}
