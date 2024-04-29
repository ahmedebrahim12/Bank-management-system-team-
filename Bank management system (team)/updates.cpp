#include "updates.h"

bool upname(user users[], string name)
{

	users[thisuser].useraccount.username = name;








	return true;
}

bool upemail(user users[], string email, massage& m)
{
	if(findemail(email,users)){
		m.failer.setString(" ~This Email already existed ");
	
		return false;
	}
	if (users[thisuser].useraccount.email.find("@user.bank") == string::npos) {
		m.failer.setString(" ~ Invalid Email ~ ");

		return false;
	}
	users[thisuser].useraccount.email = email;


	return true;
}

bool uppass(user users[], string pass)
{
	users[thisuser].useraccount.paseword = pass;




	return true;
}

bool upphone(user users[], string phone)
{
	users[thisuser].phone = phone;



	return true;
}
