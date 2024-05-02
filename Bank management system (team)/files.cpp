#include "files.h"
#include <fstream>
void write(user users[])
{

	fstream out("the data.txt", ios::out);
	if (!out)
	{
		cout << "the file is not found";
		return;
	}
	for (int i = 0; i <= indx_or_arr; i++) {

		if (users[i].useraccount.username.empty())
		{
			continue;
		}
		out << users[i].acountNumber << " " << users[i].useraccount.username << " " << users[i].useraccount.email << " "
			<< " " << users[i].ballans << " " << users[i].phone << " " << users[i].useraccount.paseword << " " << users[i].transactioncount << endl;

		for (int j = 0; j < users[i].transactioncount; j++)
		{
			out << users[i].usertransactions[j].recpient << " " << users[i].usertransactions[j].transactionamount << " " << users[i].usertransactions[j].typetransaction << endl;
		}
	}
	out.close();
}

void read(user users[])
{
	fstream in("the data.txt", ios::in);
	if (!in)
	{
		cout << "the file is not found";
		return;
	}
	cout << "hi";
	for (int i = 0; !in.eof(); i++) {

		cout << users[i].transactioncount;
		indx_or_arr++;
		in >> users[i].acountNumber >> users[i].useraccount.username >> users[i].useraccount.email >>
			users[i].ballans >> users[i].phone >> users[i].useraccount.paseword >> users[i].transactioncount;

		cout << users[i].transactioncount;
		for (int j = 0; j < users[i].transactioncount; j++)
		{

			in >> users[i].usertransactions[j].recpient >> users[i].usertransactions[j].transactionamount >> users[i].usertransactions[j].typetransaction;
		}
	}

	in.close();
}
