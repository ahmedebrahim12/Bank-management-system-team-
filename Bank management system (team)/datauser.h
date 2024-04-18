#pragma once
#ifndef DATAUSER_H
#define DATAUSER_H
#include "find.h"
bool signup(user users[], string name, string email, string password, float ballans, string phone, massage& m);
bool login(user users[], string email, string password, massage& m);
#endif // !DATAUSER_H