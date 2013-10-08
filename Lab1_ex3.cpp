#include <cassert>
#include <cstring>

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
    // do stuff in here...
}
