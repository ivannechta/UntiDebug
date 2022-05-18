#pragma once
#include <windows.h>
#include <debugapi.h>

bool f01() {
	return IsDebuggerPresent();
}
bool f02() {
	BOOL tmp;
	CheckRemoteDebuggerPresent(GetCurrentProcess(),&tmp);
	return tmp;
}
bool f03() {
	DWORD tmp=666;
	SetLastError(tmp);
	OutputDebugString(L"Hello");
	return GetLastError()==tmp;
}
bool f04() {	
	return FindWindow(L"OLLYDBG", 0);	
}
bool f05() {
	long tmp1,tmp2;
	HKEY currentKey;
	tmp1 = RegOpenKeyEx(HKEY_CLASSES_ROOT, L"dllfile\\shell\\Open with Olly&Dbg\\command", 0, KEY_ENUMERATE_SUB_KEYS | KEY_QUERY_VALUE , &currentKey);
	tmp2 = RegOpenKeyEx(HKEY_CLASSES_ROOT, L"exefile\\shell\\Open with Olly&Dbg\\command", 0, KEY_ENUMERATE_SUB_KEYS | KEY_QUERY_VALUE , &currentKey);
	return (tmp1 == ERROR_SUCCESS) || (tmp2 == ERROR_SUCCESS);
}





