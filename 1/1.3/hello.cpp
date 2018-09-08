#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    char name[1024];
    if(getlogin_r(name, 1024))
	exit(EXIT_FAILURE);
    cout << "Hello, " << name << endl;
    exit(EXIT_SUCCESS);
}
