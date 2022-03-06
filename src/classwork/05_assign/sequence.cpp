//write include statements 
#include <iostream>
#include "sequence.h"



// gc-content
double get_gc_content(const string& dna){
    double total, gcContent;
    char searching1 = 'G';
    char searching2 = 'C';
    double counter1 = 0; 
    double counter2 = 0;

    for (int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == searching1){
            counter1++;
        }
        else if (dna[i] == searching2){
            counter2++;
        }
    }

    gcContent = counter1 + counter2;
    total = gcContent / dna.length();

    return total;
}


// reverse_string
string get_reverse_string(string dna){
    string reverse;
    
    for (int i = dna.size() - 1; i >= 0; --i)
    {
        reverse += dna[i];
    }

    return reverse;
}


// dna-complement
string get_dna_complement(string dna){
    string reverse;
    string store;
    string list { store };

    for (size_t i = 0; i < dna.size(); i++)
    {
        if (dna[i] == 'A')
        {
            dna[i] = 'T'; 
            list += 'T';
        }

        else if (dna[i] == 'T')
        {
            dna[i] = 'A';
            list += 'A';
        }

        else if (dna[i] == 'C')
        {
            dna[i] = 'G';
            list += 'G';
        }

        else if (dna[i] == 'G')
        {
            dna[i] = 'C';
            list += 'C';
        }
        reverse = get_reverse_string(list);
    }
    return reverse;

}
