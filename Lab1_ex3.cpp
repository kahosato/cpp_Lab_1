#include <cctype>
#include <cassert>
#include <cstring>
#include <stdexcept>
#include <iostream>
using namespace std;

const size_t NO_OF_CHARS = 100;

void ChangeHateToLove(char*);

int main(int argc, char* argv[])
{
    try
    {
        char *pString = new char[NO_OF_CHARS];

        strcpy(pString, "These Imperial College students hate, absolutely hate, C++.  Whatever!");

        ChangeHateToLove(pString);

        cout << endl << pString << endl;

        // Clean up after ourselves
        delete [] pString;
    }
    catch( const std::exception& ex )
    {
        std::cerr << "main: Caught " << ex.what() << std::endl;
        return -1;
    }
}

void ChangeHateToLove(char* pString)
{
	if(pString == NULL)
	{
		throw std::invalid_argument("Did you give an empty string?");
	}
	while(*pString != '\0')
	{
		if(strncmp(pString, "hate", 4) == 0 ){
			if (!isalpha(*(pString+4))){
				strncpy(pString, "love", 4);
				pString += 4;
			}
		}
		++pString;
	}
}

