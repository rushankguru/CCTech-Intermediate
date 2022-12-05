
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main(int argc, char*argv[])
{
    string input = "";
    for (int i=1;i<argc;i++)
    {
        cout<<argv[i]<<" ";
        // input = input + argv[i] +" ";
    }
    // input = input + "\n";
    cout<<"\n";
    cout<<input<<endl;
    
}


