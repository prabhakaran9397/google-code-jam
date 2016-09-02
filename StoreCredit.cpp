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

	int t, k, C, I, i, j, ans_1, ans_2;
	in >> t;
	bitset<1001> P;
	for(k=1; k<=t; k++){
		P.reset();
		in >> C >> I;
		int a[I];
		for(i=0; i<I; i++)
			in >> a[i];
		for(i=0; i<I; i++){
			if(C-a[i]>-1 && P[C-a[i]]){
				ans_1 = i;
				for(j=0; j<I; j++){
					if(a[j] == C-a[i]){
						ans_2 = j;
						break;
					}
				}
				break;
			}
			P[a[i]] = 1;
		}
		out << "Case #" << k << ": "<< min(ans_1, ans_2)+1 << " " << max(ans_1, ans_2)+1 << endl;
	}
	in.close();
	out.close();
	return 0;
}
