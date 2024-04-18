#pragma once
#ifndef ENTITIES_H
#define ENTITIES_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
using namespace std;
using namespace sf;
struct account
{
	string username;
	string email;
	string paseword;
};
struct transactions
{
	float transactionamount = 0;
	string typetransaction = "";
	string recpient = "";
};
struct user
{
	account useraccount;
	transactions usertransactions[50];
	string phone;
	int acountNumber;
	int age;
	int transactioncount = 0;
	bool frazen = false;
	float ballans;
};
struct massage {
	Text failer;
};
#endif
