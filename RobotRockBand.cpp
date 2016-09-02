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
	int t, k;
	long long K, count, n, i, a, b, c, d;
	in >> t;
	for(k=1; k<=t; k++){
		in >> n >> K;
		int a1[n], a2[n], a3[n], a4[n];
		for(i=0; i<n; ++i)
			in >> a1[i];
		for(i=0; i<n; ++i)
			in >> a2[i];
		for(i=0; i<n; ++i)
			in >> a3[i];
		for(i=0; i<n; ++i)
			in >> a4[i];
		count = 0;
		for(a=0; a<n; ++a)
			for(b=0; b<n; ++b)
				for(c=0; c<n; ++c)
					for(d=0; d<n; ++d)
						if((a1[a]^a2[b]^a3[c]^a4[d])==K)
							count++;
		out << "Case #" << k << ": "<< count << '\n';
	}
	in.close();
	out.close();
	return 0;
}
