// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
uint64_t p = 2;
while (p * p <=value) {
  if (value % p == 0) return false;
  else
    p++;
}
  return true;// вставьте код функции
}
uint64_t nPrime(uint64_t n) {
uint64_t p = 1, value{};
  for (int i = 1; i <= n; i++) {
    while (1) {
            p++;
            value = checkPrime(p);
            if (value) break;
         }
     }
     return p;
// вставьте код функции
}

uint64_t nextPrime(uint64_t value) {
uint64_t n = 1;
  while (!checkPrime(value+n)) {
      n++;
    }
    return value+n;// вставьте код функции
}
uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
  for (int i = 2; i < hbound; i++) {
    if (checkPrime(i)) sum += i;
}
    return sum;// вставьте код функции
}
