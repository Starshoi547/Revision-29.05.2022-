/*	Задание 03. Все целые степени двойк (All Integer Powers of Two)
*
*	По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
*	В случае некоректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	Функция должна получать натуральное число.
*
*	Формат выходных данных [output]
*	Функция должн возвращать строку, которая содержит ответ на задачу.
*
*	[Sample function input 1]: 40
*	[Sample function output 1]: 1 2 4 8 16 32
*
*	[Sample function input 2]: 1
*	[Sample function output 2]: 1
* 
*	[Sample function input 3]: 0
*	[Sample function output 3]: 0
*
*	[Sample function input 4]: -40
*	[Sample function output 4]: 0
*/

#include "Tasks.h"

string task03(int number) {
	if (number <= 0)
	{
		return "0";
	}
	
	int n = 2;
	string message = "1";

	while (n <= number) {
		message = message + " " + to_string(n);
		n *= 2;
		
		//cout << message << endl;
	}
	return message;
}