#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;



int main()
{
	cout<<" instructions on how to use this program"<<endl;
	cout<<" enter a sentence to be parsed"<<endl;
	cout<<" at the moment program only registers non cap letters"<<endl;
	cout<<" use the insert key to toggle the macro on and off"<<endl;
	cout<<" when you want to change the sentence: do the following"<<endl;
	cout<<" 1. toggle the macro off"<<endl;
	cout<<" 2. use the end key to toggle for new sentence"<<endl;
	cout<<" 3. when the option for new sentence appears, use the end key to toggle again"<<endl;
	cout<<" 4. enter new sentence and then you can use the insert key as usual."<<endl;
	cout<<" enjoying annyoing people!"<<endl;
	bool toggle = false;
	bool newSentence = false;
	//string parsing
	const int SIZE = 50;
	int	stringLength;
	char strIn[SIZE]; 

	
	cout<< "Please enter the sentence you would like to send: ";
	cin.getline(strIn, SIZE);

	//get length of string
	stringLength = (unsigned)strlen(strIn);
	while (true)
	{
		//check for toggle
		//toggle code
		//toggle is detected when the insert key is pressed down
		if(GetKeyState(VK_INSERT) == 1){
			toggle = true;
		}
		if(GetKeyState(VK_END) == 1){
				cout<< "Please enter the sentence you would like to send: ";
				cin.getline(strIn, SIZE);

				//get length of string
				stringLength = (unsigned)strlen(strIn);
		}

		
		while(toggle == true)
		{
			//get the foreground window
			HWND hwnd;

			hwnd = GetForegroundWindow();

			//set the foreground window to be the active window
			SetActiveWindow(hwnd);

			//input event
			INPUT ip;

			//pause for 1 seconds
			Sleep(1100);

			//toggle is detected when the insert key is pressed down
			if(GetKeyState(VK_INSERT) == 1){
				toggle = false;
				break;
			}
			

			//set up a keyboard event
			ip.type = INPUT_KEYBOARD;
			ip.ki.wScan = 0;
			ip.ki.time = 0;
			ip.ki.dwExtraInfo = 0;

			for (int i = 0; i < stringLength; i++)
			{
				//keystroke generation algorithm
				if (strIn[i]=='a')
				{
					//press key
					ip.ki.wVk = 0x41;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'b')
				{
					//press key
					ip.ki.wVk = 0x42;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'c')
				{
					//press key
					ip.ki.wVk = 0x43;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'd')
				{
					//press key
					ip.ki.wVk = 0x44;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'e')
				{
					//press key
					ip.ki.wVk = 0x45;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'f')
				{
					//press key
					ip.ki.wVk = 0x46;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'g')
				{
					//press key
					ip.ki.wVk = 0x47;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'h')
				{
					//press key
					ip.ki.wVk = 0x48;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'i')
				{
					//press key
					ip.ki.wVk = 0x49;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'j')
				{
					//press key
					ip.ki.wVk = 0x4A;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'k')
				{
					//press key
					ip.ki.wVk = 0x4B;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'l')
				{
					//press key
					ip.ki.wVk = 0x4C;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'm')
				{
					//press key
					ip.ki.wVk = 0x4D;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'n')
				{
					//press key
					ip.ki.wVk = 0x4E;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'o')
				{
					//press key
					ip.ki.wVk = 0x4F;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'p')
				{
					//press key
					ip.ki.wVk = 0x50;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'q')
				{
					//press key
					ip.ki.wVk = 0x51;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'r')
				{
					//press key
					ip.ki.wVk = 0x52;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 's')
				{
					//press key
					ip.ki.wVk = 0x53;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 't')
				{
					//press key
					ip.ki.wVk = 0x54;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'u')
				{
					//press key
					ip.ki.wVk = 0x55;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'v')
				{
					//press key
					ip.ki.wVk = 0x56;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'w')
				{
					//press key
					ip.ki.wVk = 0x57;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'x')
				{
					//press key
					ip.ki.wVk = 0x58;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'y')
				{
					//press key
					ip.ki.wVk = 0x59;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else if (strIn[i] == 'z')
				{
					//press key
					ip.ki.wVk = 0x5A;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
				else
				{
					//press space key
					ip.ki.wVk = VK_SPACE;
					ip.ki.dwFlags = 0;
					SendInput(1, &ip, sizeof(INPUT));
					//release key
					ip.ki.dwFlags = KEYEVENTF_KEYUP;
					SendInput(1, &ip, sizeof(INPUT));
				}
			}
			//press return key
				ip.ki.wVk = VK_RETURN;
				ip.ki.dwFlags = 0;
				SendInput(1, &ip, sizeof(INPUT));
				//release key
				ip.ki.dwFlags = KEYEVENTF_KEYUP;
				SendInput(1, &ip, sizeof(INPUT));

				
			
			
		}
	}
	




}