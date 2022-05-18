#include <iostream>
#include "DebugDetect.h"
using namespace std;

int main()
{
    if (f01()) cout << "Method 01: Detected Debugger\n";
    if (f02()) cout << "Method 02: Detected Debugger\n";
    if (f03()) cout << "Method 03: Detected Debugger\n";
    if (f04()) cout << "Method 04: Detected Debugger\n";
    if (f05()) cout << "Method 05: Detected Debugger\n";
    if (f06()) cout << "Method 06: Detected Debugger\n";
    if (f07()) cout << "Method 07: Detected Debugger\n";

    cout << "Put VisualStudio Breakpoint here\n";
}

