/*	Задание 06. Подсчёт суммы цифр числа (Sum of Number Digits)
*
*	Дано целое число. Подсчитайте сумму его цифр.
*
*	Формат входных данных [input]
*	Функция принимает целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[Sample function input 1]: 123456
*	[Sample function output 1]: 21
*
*	[Sample function input 2]: 9
*	[Sample function output 2]: 9
*
*	[Sample function input 3]: 0
*	[Sample function output 3]: 0
*
*	[Sample function input 4]: -15
*	[Sample function output 4]: 6
*/


#include "Tasks.h"

int task06(long number) {
	int sum = 0;

	if (number < 0) {
		number *= -1;
	}

	while(number % 10 == 0) {
		number = number / 10;
		if (number == 0) {
			break;
		}
	}

	while (number % 10 != 0) {
		sum += number % 10;
		number /= 10;
	}

	return sum;
}