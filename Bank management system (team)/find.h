#pragma once
#ifndef FIND_H
#define FIND_H
#include "entities.h"
#include "global_v.h"
bool findemail(string email, user users[]);
bool findpassword(string pass, user users[]);
bool findphone(string pho, user users[]);
bool findacc(int acc, user users[]);
bool findaccsign(int acc, user users[]);
#endif