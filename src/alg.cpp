// Copyright 2022 NNTU-CS
#include <cstdint>
#include <iostream>
#include "alg.h"
#include <ctime>
using namespace std;


bool checkPrime(uint64_t value) {
	for (int i = 2; i < sqrt(value); i++)
	{
		if (value % i == 0)
		{
			return false;

		}
	}
	return true;
}

uint64_t nPrime(uint64_t n) {

	uint64_t n;
	int nPrime;
	cin >> n;
	cout << nPrime(n);
	uint64_t prime = 1;
	if (n == 1) return 2;
	for (int i = 1; i < n; i++)
	{
		prime += 2;
		while (checkPrime(prime) == 0)
		{
			prime += 2;
		}
	}
	return prime;
}

uint64_t nextPrime(uint64_t value) {
if (value == 2) return 3;
	 if (checkPrime(value) == 1) value += 2;
	  if (value % 2 == 0) value += 1;
	   while (checkPrime(value) == 0) value += 2;
	    return value;
}

uint64_t sumPrime(uint64_t hbound) {
	uint64_t prime = 3;
	uint64_t sum = 2;
	if (hbound <= 2) return 0;
	while (prime < hbound) {
		if (checkPrime(prime) == 1) sum += prime;
		prime += 2;
	}
	return sum;
}
