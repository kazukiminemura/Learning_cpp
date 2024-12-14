#include <iostream>
#include <cstdlib>
using namespace std;

#ifdef WINDOWS
#define CURRENT
#else
#define CURRENT "./"
#endif

const char FILENAME[] = CURRENT "main_return_value";

int main(){
    if(system(FILENAME) == 0){
        cout << "the program run successfuly" << endl;
        return EXIT_SUCCESS;
    } else {
        cout << "failed to run the program" << endl;
        return EXIT_FAILURE;
    }
}