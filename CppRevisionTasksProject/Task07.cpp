/*	Задание 07. Максимальная цифра числа (Number Digit Max)
*
*	Дано целое число. Найдите максимальную цифру данного числа.
*
*	Формат входных данных [input]
*	Функция принимает целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить максимальную цифру заданного числа.
*
*	[Sample function input 1]: 123456789
*	[Sample function output 1]: 9
*
*	[Sample function input 2]: 13254
*	[Sample function output 2]: 5
*
*	[Sample function input 3]: 0
*	[Sample function output 3]: 0
*
*	[Sample function input 4]: -15
*	[Sample function output 4]: 5
*/


#include "Tasks.h"

int task07(long number) {
	//cout << number << endl;
	if (number < 0) {
		number *= -1;
	}
	int k = 0;
	
	while(number % 10 == 0) {
		number = number / 10;
		if (number == 0) {
			return 0;
			break;
		}
	}
	

	while (number % 10 != 0) {
		if (number == 0) {
			break;
		}
		if (k < number % 10) {
			k = number % 10;
		}
		number /= 10;

	}


	return k;
}