//write include statements
#include<string>
#include<iostream>
#include "sequence.h"

//write using statements for cin cout
using std::cin; using std::cout;

int main()
{
	int userInput;

	

	do
	{
		cout << "Menu\n"
			 << "\n"
			 << "1-Get GC Content\n"
			 << "2-Get DNA Complement\n"
			 << "3-Exit\n\n";
		
		cin >> userInput;
		cout << "\n";

		if (userInput == 1)
		{	
			string dna;
			cout << "Enter your DNA string in FASTA format. To see the GC Content\n" ;
			cin >> dna;
			cout << "\n";
			double total = get_gc_content(dna);
			cout << "The total of GC in the DNA string is: " << total << "%\n\n";
		}
		else if (userInput == 2)
		{
			string dna;
			cout <<"Enter your DNA string in FASTA format. For a DNA Complement \n";
			cin >> dna;
			cout << "\n";
			string output = get_dna_complement(dna);
			cout << "this is the output of " << dna << " is:    " << output << "\n\n";
		}
		
	} while (userInput != 3);
	

	return 0;
}

