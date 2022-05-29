#pragma once
#include "Tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(50) == "1 4 9 16 25 36 49"
		&& task01(-50) == "0"
		&& task01(0) == "0"
		&& task01(49) == "1 4 9 16 25 36 49"
		&& task01(1) == "1"
		&& task01(2) == "1"
		&& task01(3) == "1"
		&& task01(4) == "1 4"
		&& task01(10) == "1 4 9"
		&& task01(20) == "1 4 9 16"
		&& task01(25) == "1 4 9 16 25"
		&& task01(40) == "1 4 9 16 25 36";

	cout << "Task 01: Squares of Natural Numbers" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(15) == 3
		&& task02(49) == 7
		&& task02(1) == 0
		&& task02(-15) == 0
		&& task02(0) == 0
		&& task02(2) == 2
		&& task02(3) == 3
		&& task02(4) == 2
		&& task02(5) == 5
		&& task02(6) == 2
		&& task02(7) == 7
		&& task02(8) == 2
		&& task02(9) == 3
		&& task02(10) == 2
		&& task02(11) == 11
		&& task02(13) == 13
		&& task02(17) == 17
		&& task02(23) == 23
		&& task02(29) == 29
		&& task02(31) == 31;

	cout << "Task 02: The Smallest Natural Divisor" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(40) == "1 2 4 8 16 32"
		&& task03(1) == "1"
		&& task03(0) == "0"
		&& task03(-40) == "0"
		&& task03(2) == "1 2"
		&& task03(5) == "1 2 4"
		&& task03(10) == "1 2 4 8"
		&& task03(20) == "1 2 4 8 16"
		&& task03(100) == "1 2 4 8 16 32 64"
		&& task03(500) == "1 2 4 8 16 32 64 128 256"
		&& task03(1000) == "1 2 4 8 16 32 64 128 256 512"
		&& task03(10000) == "1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192";

	cout << "Task 03: All Integer Powers of Two" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = task04(30) == "NO"
		&& task04(32) == "YES"
		&& task04(0) == "ERROR"
		&& task04(-32) == "ERROR"
		&& task04(-64) == "ERROR"
		&& task04(-512) == "ERROR"
		&& task04(1) == "YES"
		&& task04(2) == "YES"
		&& task04(4) == "YES"
		&& task04(8) == "YES"
		&& task04(16) == "YES"
		&& task04(32) == "YES"
		&& task04(64) == "YES"
		&& task04(128) == "YES"
		&& task04(256) == "YES"
		&& task04(512) == "YES"
		&& task04(3) == "NO"
		&& task04(7) == "NO"
		&& task04(10) == "NO"
		&& task04(20) == "NO"
		&& task04(40) == "NO"
		&& task04(50) == "NO";

	cout << "Task 04: An Exact Power of Two" << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = task05(15) == 2
		&& task05(9) == 1
		&& task05(0) == 1
		&& task05(-15) == 2
		&& task05(1234567890) == 10
		&& task05(900) == 3
		&& task05(11111) == 5
		&& task05(999999) == 6
		&& task05(1000000) == 7;

	cout << "Task 05: Count of Number Digits" << (result ? RIGHT : WRONG) << endl;
}


void testingTask06() {
	bool result = task06(123456) == 21
		&& task06(9) == 9
		&& task06(0) == 0
		&& task06(-15) == 6
		&& task06(15) == 6
		&& task06(-9) == 9
		&& task06(-123456) == 21
		&& task06(1234567890) == 45
		&& task06(-1234567890) == 45
		&& task06(123456789) == 45
		&& task06(-123456789) == 45
		&& task06(900) == 9
		&& task06(-900) == 9
		&& task06(11111) == 5
		&& task06(-11111) == 5
		&& task06(999999) == 54
		&& task06(-999999) == 54
		&& task06(1000000) == 1
		&& task06(-1000000) == 1;

	cout << "Task 06: Sum of Number Digits" << (result ? RIGHT : WRONG) << endl;
}

void testingTask07() {
	bool result = task07(123456789) == 9
		&& task07(13254) == 5
		&& task07(0) == 0
		&& task07(-15) == 5
		&& task07(15) == 5
		&& task07(-9) == 9
		&& task07(-123456) == 6
		&& task07(1234567890) == 9
		&& task07(-1234567890) == 9
		&& task07(-123456789) == 9
		&& task07(900) == 9
		&& task07(-900) == 9
		&& task07(11111) == 1
		&& task07(-11111) == 1
		&& task07(999999) == 9
		&& task07(-999999) == 9
		&& task07(1000000) == 1
		&& task07(-1000000) == 1;

	cout << "Task 07: Number Digit Max" << (result ? RIGHT : WRONG) << endl;
}