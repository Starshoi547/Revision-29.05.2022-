/*	Задание 01. Квадраты натуральных чисел (Squares of Natural Numbers)
*
*	По данному целому числу N распечатайте все квадраты натуральных чисел, 
*	не превосходящие N, в порядке возрастания. В случае некоректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	Функция должна получать натуральное число.
* 
*	Формат выходных данных [output]
*	Функция должн возвращать строку, которая содержит ответ на задачу.
*
*	[Sample function input 1]: 50
*	[Sample function output 1]: 1 4 9 16 25 36 49
*
*	[Sample function input 2]: -50
*	[Sample function output 2]: 0
*
*	[Sample function input 3]: 0
*	[Sample function output 3]: 0
*/

#include "Tasks.h"

string task01(int number) {
	int n = 1;
	string message;
	if (number <= 0) {
		return "0";
	}
	while (n*n <= number)
	{
		message = message + to_string(n * n);
		n++;
		if (n * n <= number)
		{
			message = message + " ";
		}
	};

	return message;
}