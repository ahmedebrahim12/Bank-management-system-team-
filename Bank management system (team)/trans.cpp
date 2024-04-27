#include "trans.h"

bool transwithdraw(user users[], float num, massage& m)
{
	if (num <= users[thisuser].ballans)
	{
		users[thisuser].ballans -= num;
		users[thisuser].transactioncount++;
		transactions temptransaction;
		temptransaction.recpient = "no recipient";
		temptransaction.transactionamount = num;
		temptransaction.typetransaction = "withdraw";
		users[thisuser].usertransactions[users[thisuser].transactioncount - 1] = temptransaction;
		return true;
	}
	else
	{
		m.failer.setString("you don't have enough money");
		return false;
	}
}

bool transdeposite(user users[], float num, massage& m)
{
	if (num >= 100)
	{
		users[thisuser].ballans += num;
		users[thisuser].transactioncount++;
		transactions temptransaction;
		temptransaction.recpient = "no recipient";
		temptransaction.transactionamount = num;
		temptransaction.typetransaction = "deposit";
		users[thisuser].usertransactions[users[thisuser].transactioncount - 1] = temptransaction;
		return true;
	}
	else
	{
		m.failer.setString("least amount to deposit is 100");
		return false;
	}
	return false;
}

bool transballans(user users[], int id, float num2, massage& m)
{












	return false;
}

bool translean(user users[], float num, massage& m)
{











	return false;
}
