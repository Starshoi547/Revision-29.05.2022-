/*	Задание 02. Наименьший натуральный делитель (The Smallest Natural Divisor)
*
*	Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
*	Если данные введены некорректно, то выведите ноль.
*
*	Формат входных данных [input]
*	Функция принимает целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[Sample function input 1]: 15
*	[Sample function output 1]: 3
*
*	[Sample function input 2]: 49
*	[Sample function output 2]: 7
*
*	[Sample function input 3]: 1
*	[Sample function output 3]: 0
*
*	[Sample function input 4]: -15
*	[Sample function output 4]: 0
*/


#include "Tasks.h"

int task02(int number) {
	int n = number, k = number;
	if (number < 2)
	{
		return 0;
	}
	
	while (n > 0) {
		if ((number % n) == 0 && (number / n) > (number / k) && n != 1) 
		{
			k = n;
		}
		n--;
		
	}
	return k;
}