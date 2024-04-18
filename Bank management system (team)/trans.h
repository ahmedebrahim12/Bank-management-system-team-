#pragma once
#ifndef TRANS_H
#define TRANS_H
#include "find.h"
bool transwithdraw(user users[], float num, massage& m);
bool transdeposite(user users[], float num, massage& m);
bool transballans(user users[], int id, float num2, massage& m);
bool translean(user users[], float num, massage& m);
#endif // !TRANS_H