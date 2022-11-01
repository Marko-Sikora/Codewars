// DESCRIPTION:
// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

// The output should be two capital letters with a dot separating them.

// It should look like this:

// Sam Harris => S.H

// patrick feeney => P.F

#include <string>
using namespace std;

std::string abbrevName(std::string name)
{

    int z = 0;
    string namefl;
    string surnamefl;

    for (int i = 0; i <= name.size(); i++)
    {
        if (name[i] == ' ')
        {
            namefl = toupper(name[0]);
            surnamefl = toupper(name[i + 1]);
        }
    }
    string zwrot = namefl + "." + surnamefl;
    return zwrot;
}