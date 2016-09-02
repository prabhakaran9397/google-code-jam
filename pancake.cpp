#include<bits/stdc++.h>
using namespace std;

void flip(string arr, int i)
{
	int temp, start = 0;
	while (start < i)
	{
		temp = arr[start];
		arr[start] = arr[i];
		arr[i] = temp;
		start++;
		i--;
	}
}

int pancakeSort(string arr, int n)
{
	for (int curr_size = n; curr_size > 1; --curr_size)
	{
		char mi = *max_element(arr, arr+curr_size);
		if (mi != curr_size-1)
		{
			flip(arr, mi);
			flip(arr, curr_size-1);
		}
	}
}

int main(void)
{
	int t;
	ifstream in;
	ofstream out;
	in.open("input");
	out.open("output");
	in >> t;
	for(k=1; k<=t; k++)
	{
		out << "Case #" << k << ": " <<  << endl;
	}
	in.close();
	out.close();
	return 0;
}
