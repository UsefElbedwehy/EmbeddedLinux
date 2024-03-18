#include <iostream>

#include <unistd.h>
#include <sys/types.h>

using namespace std;

char *getlogin(void);

int main()
{

cout << "UserID: " <<  getuid() << " ,Username: " <<  getlogin() << endl;


}