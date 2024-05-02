#include "trans.h"

bool transwithdraw(user users[], float num, massage& m)
{
	if (num <= users[thisuser].ballans)
	{
		users[thisuser].ballans -= num;
		users[thisuser].transactioncount++;
		transactions temptransaction;
		temptransaction.recpient = "no-recipient";
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
		temptransaction.recpient = "no-recipient";
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

bool transballans(user users[], int id, float num, massage& m)
{
	if (findacc(id, users))
	{
		if (num <= users[thisuser].ballans)
		{
			users[thisuser].transactioncount = users[thisuser].transactioncount + 1;
			users[thisuser].ballans -= num;
			users[otheaccnumber].ballans += num;
			users[thisuser].usertransactions[users[thisuser].transactioncount - 1].transactionamount = num;
			users[thisuser].usertransactions[users[thisuser].transactioncount - 1].typetransaction = "push-trans";
			users[thisuser].usertransactions[users[thisuser].transactioncount - 1].recpient = users[otheaccnumber].useraccount.username;
			users[otheaccnumber].transactioncount = users[otheaccnumber].transactioncount + 1;
			users[otheaccnumber].usertransactions[users[otheaccnumber].transactioncount - 1].transactionamount = num;
			users[otheaccnumber].usertransactions[users[otheaccnumber].transactioncount - 1].typetransaction = "get-trans";
			users[otheaccnumber].usertransactions[users[otheaccnumber].transactioncount - 1].recpient = users[thisuser].useraccount.username;

			return true;

		}
		m.failer.setString("your bon't have this money");
		return false;
	}
	m.failer.setString("this account number is not found");

	return false;
}

bool translean(user users[], float num, massage& m)
{
	if (users[thisuser].ballans >= (0.25 * num))
	{


		users[thisuser].transactioncount = users[thisuser].transactioncount + 1;
		users[thisuser].ballans = users[thisuser].ballans + num;
		users[thisuser].usertransactions[users[thisuser].transactioncount - 1].transactionamount = num;
		users[thisuser].usertransactions[users[thisuser].transactioncount - 1].typetransaction = "lean";
		users[thisuser].usertransactions[users[thisuser].transactioncount - 1].recpient = "No-recpient";
		return true;


	}
	m.failer.setString("your can't take lean");
	return false;










}
