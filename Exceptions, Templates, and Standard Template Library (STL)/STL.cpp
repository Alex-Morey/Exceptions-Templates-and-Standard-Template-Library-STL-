//Alexander Morey
//CIS 1202
//4/30/2024

#include <iostream>
#include <cctype>

using namespace std;

char character(char start, int offset);
char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

int main()
{
	char start = 'a';
	int offset = 0;
	start = character(start, offset);
	cout << start << endl << endl;
}

char character(char start, int offset)
{
	int letter;
	cout << "input letter: ";
	cin >> start;
	if (isalpha(start))
	{
		for (int i = 0; i < 26; ++i)
		{
			if (start == alphabet[i])
			{
				letter = i;
			}
		}
		cout << "input number: ";
		cin >> offset;
		if (((offset + letter) > 25) || ((offset + letter) < 0))
		{
			cout << "\ninvalidRangeExpection\n\n";
		}
		else
		{
			start = alphabet[letter + offset];
			return start;
		}
	}
	else
	{
		cout << "\ninvalidCharacterExcpeption\n\n";
	}
}