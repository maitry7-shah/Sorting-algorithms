#include<stdio.h>

int *store_int(int _xyz) {
  int CELL = _xyz;
  return &CELL;
}