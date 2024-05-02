#include "datauser.h"
int indx_or_arr = -1;
bool signup(user users[], string name, string email, string password, float ballans, string phone, massage& m)
{
	name.resize(name.size() - 1);
	email.resize(email.size() - 1);
	password.resize(password.size() - 1);
	phone.resize(phone.size() - 1);
	if (!(email.find("@user.bank") == string::npos)) {
		if (!(findemail(email, users))) {
			if (!(ballans<300)) {
				if (!(findphone(phone, users))) {
					indx_or_arr++;
					users[indx_or_arr].useraccount.username = name;
					users[indx_or_arr].useraccount.paseword =password;
					users[indx_or_arr].useraccount.email = email;
					users[indx_or_arr].ballans = ballans;
					users[indx_or_arr].phone = phone;
					users[indx_or_arr].acountNumber = (rand() % 101) + 100;
					while (findaccsign(users[indx_or_arr].acountNumber, users)) {
						users[indx_or_arr].acountNumber = (rand() % 101) + 100;
					}
					return true;
				}
				m.failer.setString("This Phone Number already Exists");
				return false;
			}
			m.failer.setString("Minimum balance is 300");
			return false;
		}
		m.failer.setString("Email already Exists");
		
		return false;
	}

	m.failer.setString("Invalid Email Format ");
	
	return false;
}

bool login(user users[], string email, string password, massage& m)
{
	if (findemail(email,users) && findpassword(password,users)) {
		return true;
	}

		m.failer.setString("Invalid Email or Password");
		return false;

}
