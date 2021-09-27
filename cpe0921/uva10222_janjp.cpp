#include"bits/stdc++.h"
using namespace std;

char decode(char c){
	switch(c){
		case ']':
			return 'p';
			break;
		case '[':
			return 'o';
			break;
		case '\'':
			return 'l';
			break;
		case ';':
			return 'k';
			break;
		case '.':
			return 'm';
			break;
		case ',':
			return 'n';
			break;
		case 'P':
		case 'p':
			return 'i';
			break;
		case 'O':
		case 'o':
			return 'u';
			break;
		case 'I':
		case 'i':
			return 'y';
			break;
		case 'U':
		case 'u':
			return 't';
			break;
		case 'Y':
		case 'y':
			return 'r';
			break;
		case 'T':
		case 't':
			return 'e';
			break;
		case 'R':
		case 'r':
			return 'w';
			break;
		case 'E':
		case 'e':
			return 'q';
			break;
		case 'L':
		case 'l':
			return 'j';
			break;
		case 'K':
		case 'k':
			return 'h';
			break;
		case 'J':
		case 'j':
			return 'g';
			break;
		case 'H':
		case 'h':
			return 'f';
			break;
		case 'G':
		case 'g':
			return 'd';
			break;
		case 'F':
		case 'f':
			return 's';
			break;
		case 'D':
		case 'd':
			return 'a';
			break;
		case 'M':
		case 'm':
			return 'b';
			break;
		case 'N':
		case 'n':
			return 'v';
			break;
		case 'B':
		case 'b':
			return 'c';
			break;
		case 'V':
		case 'v':
			return 'x';
			break;
		case 'C':
		case 'c':
			return 'z';
			break;
		default:
			return c;
	}
}

void solve(){
	string s = "";
	getline(cin, s);
	for (auto c:s)
		cout << decode(c);
	cout << endl;
}

int main(){
	string s;
	getline(cin, s);
	int t = stoi(s);
	while (t--)
		solve();
	return 0;
}

