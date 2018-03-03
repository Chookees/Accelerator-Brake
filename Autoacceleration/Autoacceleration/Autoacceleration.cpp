// Autoacceleration.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>


using namespace std;



int main()
{
	//Intro
	cout << "######################################"<<endl;
	cout << "##  For Acceleration press Arrow Up ##"<<endl;
	cout << "##  For braking Arrow Down	    ##"<<endl;
	cout << "##  For roll out release all        ##"<<endl;
	cout << "######################################"<<endl;
	cout << "	 Press enter for start	    "<<endl;
	cout << "	 Press ESC to exit			" << endl;

	cin.get();
	//Clear screen
	system("CLS");

	//Variables
	double speed = 1;
	double acceleration = 2;;
	double brakepower = 0.85;
	double speeddegnor = 0.99;
	

	while (!GetAsyncKeyState(VK_ESCAPE))
	{


		while (GetAsyncKeyState(VK_UP))
		{
			//Acceleration Setup
			#pragma region Acceleration Setup
			if (speed >= 267)
			{
				acceleration = 1;
			}

			else if (speed >= 265)
			{
				acceleration = 1.0001;
			}

			else if (speed >= 260)
			{
				acceleration = 1.0003;
			}

			else if (speed >= 255)
			{
				acceleration = 1.0008;
			}

			else if (speed >= 250)
			{
				acceleration = 1.001;
			}

			else if (speed >= 240)
			{
				acceleration = 1.002;
			}

			else if (speed >= 230)
			{
				acceleration = 1.005;
			}

			else if (speed >= 215)
			{
				acceleration = 1.008;
			}

			else if (speed >= 200)
			{
				acceleration = 1.01;
			}

			else if (speed >= 170)
			{
				acceleration = 1.02;
			}

			else if (speed >= 150)
			{
				acceleration = 1.06;
			}

			else if (speed >= 130)
			{
				acceleration = 1.1;
			}

			else if (speed >= 100)
			{
				acceleration = 1.14;
			}

			else if (speed >= 90)
			{
				acceleration = 1.18;
			}

			else if (speed >= 70)
			{
				acceleration = 1.2;
			}

			else if (speed >= 50)
			{
				acceleration = 1.4;
			}

			else if (speed >= 30)
			{
				acceleration = 1.6;
			}

			else if (speed >= 10)
			{
				acceleration = 1.75;
			}

			else if (speed >= 5)
			{
				acceleration = 1.95;
			}

			else if (speed < 1)
			{
				acceleration = 3;
			}
#pragma endregion

			if (speed >= 267)
			{
				Sleep(200);
				cout << setprecision(3) << speed << "kmh" << endl;
				
			}
			else
			{	
				speed = speed * acceleration;
				int time;

				if (speed >= 250)
				{
					time = 100;
				}

				else if (speed >= 150)
				{
					time = 200;
				}

				else
				{
					time = 400;
				}
				Sleep(time);
				cout <<setprecision(3) << speed << "kmh" << endl;
			}					
		}

		while (GetAsyncKeyState(VK_DOWN))
		{
			if (speed <= 1)
			{
				Sleep(200);
				cout << setprecision(3) << speed << "kmh" << endl;
			}

			else
			{
				int time;

				if (speed >= 250)
				{
					time = 100;
				}

				else if (speed >= 150)
				{
					time = 200;
				}

				else
				{
					time = 400;
				}
				Sleep(time);
				speed = speed * brakepower;
				cout << setprecision(3) << speed << "kmh" << endl;
			}

		}
		if (speed <= 1)
		{

			Sleep(400);
			cout << setprecision(3) << speed << "kmh" << endl;
		}

		else
		{
			int time;

			if (speed >= 250)
			{
				time = 100;
			}

			else if (speed >= 150)
			{
				time = 200;
			}

			else
			{
				time = 400;
			}
			Sleep(time);
			speed = speed * speeddegnor;
			cout << setprecision(3) << speed << "kmh" << endl;
		}
		
	}
    return 0;
}

