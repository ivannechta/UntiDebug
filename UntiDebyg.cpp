
#include <iostream>


using namespace std;
#include "DebugDetect.h"

int main()
{
    if (f01()) cout << "01:Debugger found\n";
    if (f02()) cout << "02:Debugger found\n";
    if (f03()) cout << "03:Debugger found\n";
    if (f04()) cout << "04:Debugger found\n";  
    if (f05()) cout << "05:Debugger found\n";
    cout << "Exit\n";
}
