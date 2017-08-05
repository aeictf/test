#include "stdafx.h"
#include <iostream>
#include <fstream> 
using namespace std;
int main(int argc, char *argv[])
{
	if (argc == 1)
		cout << "Can't find a file" << endl;
	else {
		ifstream infile(argv[1]);
		int n = 0;
		char c;
		while (!infile.eof()) {
			infile.get(c);
			while (c != '\n' && !infile.eof())
				infile.get(c);
			n++;
		}
		cout << "Number of lines" << ' ' << n << endl;
	}

	return 0;
}

