#include<bits/stdc++.h>
using namespace std;

int count(string a)
{
	int c = 0, i, l=a.size();
	bool alpha[26];
	memset(alpha, 0, sizeof(alpha));
	for(i=0; i<l; ++i)
		if(a[i]>='A' && a[i]<='Z')
			alpha[a[i]-'A']=1;
	for(i=0; i<26; ++i)
		if(alpha[i])
			c++;
	return c;
}

string tie(string a, string b)
{
	int l1 = a.size(), i;
	int l2 = b.size();
	bool a1[26];
	bool a2[26];
	memset(a1, 0, sizeof(a1));
	memset(a2, 0, sizeof(a2));
	for(i=0; i<l1; ++i)
		if(a[i]>='A' && a[i]<='Z')
			a1[a[i]-'A']=1;
	for(i=0; i<l2; ++i)
		if(b[i]>='A' && b[i]<='Z')
			a2[b[i]-'A']=1;
	for(i=0; i<26; ++i){
		if(a[i] & b[i]){
		} else {
			if(a1[i])
				return a;
			if(a2[i])
				return b;
		}
	}
}

int main(void)
{
	int t, k, n, i;
	string lead;
	ifstream in;
	ofstream out;
	in.open("input");
	out.open("output");
	in >> t;
	for(k=1; k<=t; k++)
	{
		in >> n;
		in.ignore();
		vector<string> name(n);
		for(i=0; i<n; ++i)
			getline(in, name[i]);
		lead = name[0];
		for(i=1; i<n; ++i)
		{
			if(count(lead) < count(name[i])){
				lead = name[i];
			} else if (count(lead) == count(name[i])) {
				lead = tie(lead, name[i]);
			}
		}
		out << "Case #" << k << ": " << lead << '\n';
	}
	in.close();
	out.close();
	return 0;
}
