/*	Задание 05. Подсчёт цифр числа (Count of Number Digits)
*
*	Дано целое число. Подсчитайте количество цифр в нём.
*
*	Формат входных данных [input]
*	Функция принимает целое число.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[Sample function input 1]: 15
*	[Sample function output 1]: 2
*
*	[Sample function input 2]: 9
*	[Sample function output 2]: 1
*
*	[Sample function input 3]: 0
*	[Sample function output 3]: 1
*
*	[Sample function input 4]: -15
*	[Sample function output 4]: 2
*/


#include "Tasks.h"

int task05(long number) {
    int k = 0;
    if (number == 0) {
        k++;
    }
    if (number < 0) {
        number *= -1;
    }
    while (number > 0)
    {

        number /= 10;
        k++;
    }

	return k;
}