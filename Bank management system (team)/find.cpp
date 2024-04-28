#include "find.h"
int otheaccnumber = -1;
int thisuser = -1;
bool findemail(string email, user users[])
{
	for (int i = 0; i < sizeof(users); i++)
	{
		if (email == users[i].useraccount.email)
		{
			return true;
		}
	}
	return false;










	
}

bool findpassword(string pass, user users[])
{
	for (int i = 0; i < sizeof(users); i++)
	{
		if (pass == users[i].useraccount.paseword)
		{
			thisuser = i;
			return true;
		}
	}
	return false;









	
}

bool findphone(string pho, user users[])
{
















	return false;
}

bool findacc(int acc, user users[])
{















	return false;
}

bool findaccsign(int acc, user users[])
{













	return false;
}
