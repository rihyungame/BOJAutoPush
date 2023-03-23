#include <iostream>
#include <string>
#define ALPHABET 26

enum alpha_bet {
	a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
};

int main()
{
	std::string inString;
	int count = 0;
	char result = '\0';
	int arr[26] = { 0 };		
	int temp = 0;

	std::cin >> inString;

	for (int count = 0; count < inString.size(); count++) {
		if (inString[count] == 65 || inString[count] == 97)
			arr[a]++;
		else if (inString[count] == 66 || inString[count] == 98)
			arr[b]++;
		else if (inString[count] == 67 || inString[count] == 99)
			arr[c]++;
		else if (inString[count] == 68 || inString[count] == 100)
			arr[d]++;
		else if (inString[count] == 69 || inString[count] == 101)
			arr[e]++;
		else if (inString[count] == 70 || inString[count] == 102)
			arr[f]++;
		else if (inString[count] == 71 || inString[count] == 103)
			arr[g]++;
		else if (inString[count] == 72 || inString[count] == 104)
			arr[h]++;
		else if (inString[count] == 73 || inString[count] == 105)
			arr[i]++;
		else if (inString[count] == 74 || inString[count] == 106)
			arr[j]++;
		else if (inString[count] == 75 || inString[count] == 107)
			arr[k]++;
		else if (inString[count] == 76 || inString[count] == 108)
			arr[l]++;
		else if (inString[count] == 77 || inString[count] == 109)
			arr[m]++;
		else if (inString[count] == 78 || inString[count] == 110)
			arr[n]++;
		else if (inString[count] == 79 || inString[count] == 111)
			arr[o]++;
		else if (inString[count] == 80 || inString[count] == 112)
			arr[p]++;
		else if (inString[count] == 81 || inString[count] == 113)
			arr[q]++;
		else if (inString[count] == 82 || inString[count] == 114)
			arr[r]++;
		else if (inString[count] == 83 || inString[count] == 115)
			arr[s]++;
		else if (inString[count] == 84 || inString[count] == 116)
			arr[t]++;
		else if (inString[count] == 85 || inString[count] == 117)
			arr[u]++;
		else if (inString[count] == 86 || inString[count] == 118)
			arr[v]++; 
		else if (inString[count] == 87 || inString[count] == 119)
			arr[w]++;
		else if (inString[count] == 88 || inString[count] == 120)
			arr[x]++;
		else if (inString[count] == 89 || inString[count] == 121)
			arr[y]++;
		else if (inString[count] == 90 || inString[count] == 122)
			arr[z]++;
	}

	for (int count = 0; count < ALPHABET; count++) {
		if (arr[count] > temp) {
			temp = arr[count];
			result = 'A' + count;
		}
		else if (arr[count] == temp && temp != 0)
			result = '?';
	}

	std::cout << result;

	return 0;
}