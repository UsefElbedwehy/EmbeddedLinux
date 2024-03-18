<h1> EXERCISE 1 </h1>
    
<h3>  Create a command to show the usre id and the user name </h3>

<p>

<h4>First, what is command?</h4>

<strong>command</strong> is an application run from iserspace having name ,location ,input ,and output.Do not have GUI. 

to get user id, use <strong>getuid()</strong> 

to know how to use it, you can use the command window to write: 

> $ man getuid 

![Linux Programmer's Manual ](getuid_terminal.png "man getuid")

to get user name, use getlogin()

to know how to use it, you can use the command window to write: 

> $ man getlogin

![Linux Programmer's Manual! ](getlogin_terminal.png "man getlogin")

the code:

<code>
  
    #include <iostream>
    #include <unistd.h>
    #include <sys/types.h>

    using namespace std;
    char *getlogin(void);

    int main()
    {
    cout << "UserID: " <<  getuid() << " ,Username: " <<  getlogin() << endl;
    }

</code>

> $ g++ main.cpp -o userinfo

> $ userinfo

!["No such file"](NoSuchFile.png "Error")

because to run a command ,it must be placed in one of certain directories

to know these directories:

> $ echo $PATH

I will choose /usr/bin

> $ sudo cp userinfo /usr/bin

> userinfo

!["terminal"](userinfo_screen.png "print id and name")


</p>