//Auther Jimmy Pham Ho
//Date 08/31/2018
#include <iostream>
#include <string>
using namespace std;


double convertToCelsius(double Fahernheit)
{
	double r;
	r = Fahernheit * 5 / 9 + 32;
	return r;
} // end of convertToCelsius function

double convertToFahern(double Celsius)
{
	double r2;
	r2 = (Celsius - 32) * 5 / 9;
	return r2;
} // end of converToFahern function

int main()
{
	double z;

	double tempArray[5] = { 0.0 };
	for (int i = 0; i < size(tempArray); i++)
	{
		cout << "Enter the temperature at 8:00 >> ";
		cin >> tempArray[i];
		z = convertToFahern(tempArray[i]);
		cout << "The temp conversion is " << z << endl;
	}

	//declare variables
	
	/*double temp1;*/

	/*string userInput;*/

	//enter input items

	system("pause");
	return 0;
	
} //end of main function


//cout << "Chose what to convert: Fahrenheit to Celsius: type FtoC or Celsius To Fahrenheit: type CtoF .\n";
//cout << "And please fully copy one of the choses, so the conversion will work properly.\n";
//cin >> userInput;
//
//if (userInput == "FtoC")
//{
//	cout << "Please enter temperature in fahrenheit: ";
//	cin >> temp1;
//
//	z = convertToCelsius(temp1);
//	cout << "Temperature in celsius is = " << z << endl;
//
//	system("pause");
//	return 0;
//}
//
//else if (userInput == "CtoF")
//{
//	cout << "Please enter temperature in celsius: ";
//	cin >> temp1;
//
//	z = convertToFahern(temp1);
//
//
//	system("pause");
//	return 0;
//}
//else if (userInput != "FtoC" || "CtoF")
//{
//	cout << "Error: you have not type any of the chose that was shown above" << endl;
//	system("pause");
//	return 0;
//}