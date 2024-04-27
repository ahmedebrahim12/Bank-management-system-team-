#include "trans.h"
#include "files.h"
#include "updates.h"
#include "datauser.h"

Font coolvetica;
RectangleShape mouesRect(Vector2f(10, 20));
Mouse ms;
Text bank;
String stringtouserp;
String stringtodetailsp;

struct Header
{
	Sprite backgrondheader;
	Sprite boxheader;
}h;
struct logins
{
	//Sprite backgrondsign;
	Sprite value1;
	Sprite value2;
	Sprite button1;
	Sprite button2;
	Text emailtext;
	Text passtext;
	Text inbutton1;
	Text mase;
	Text inbutton2;
}l;
struct Signin
{
	//Sprite backgrondsign;
	Sprite value1;
	Sprite value2;
	Sprite value3;
	Sprite value4;
	Sprite value5;
	Sprite button1;
	Sprite button2;
	Text emailtext;
	Text passtext;
	Text numbertext;
	Text nametext;
	Text balunstext;
	Text mase;
	Text inbutton1;
	Text inbutton2;
}s;
struct user_page {
	Sprite box1;
	Sprite box2;
	Sprite box3;
	Sprite box4;
	Sprite box5;
	Sprite box6;
	Sprite logout;
	Text deposit;
	Text withdraw;
	Text send;
	Text loan;
	Text balanse;
	Text details;
	Text userpage;
	Text hello;
	Text telogout;
	Text name;
}u_p;
struct deposit_page {
	Sprite value1;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text masse;
	Text depositpage;
	Text deposit;
}d_p;
struct withdraw_page {
	Sprite value1;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text masse;
	Text withdrawpage;
	Text withdraw;
}w_p;
struct loan_page {
	Sprite value1;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text masse;
	Text loanpage;
	Text loan;
}l_p;
struct balance_page {
	Sprite boutton1;
	Text textbutton1;
	Text masse;
	Text balancepage;
	Text balance;
}b_p;
struct send_page {
	Sprite value1;
	Sprite value2;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text masse;
	Text sendpage;
	Text send1;
	Text send2;
}s_p;
struct details_page {
	Sprite boutton1;
	Sprite boutton2;
	Sprite boutton3;
	Sprite boutton4;
	Sprite boutton5;
	Sprite boutton6;
	Text textbutton1;
	Text textbutton2;
	Text textbutton3;
	Text textbutton4;
	Text textbutton5;
	Text textbutton6;
	Text idmss;
	Text namemss;
	Text emailmss;
	Text passmss;
	Text phonemss;
	Text id;
	Text name;
	Text email;
	Text pass;
	Text phone;
	Text trans;
	Text detilspage;
}de_p;
struct edname_page {
	Sprite value1;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text namepage;
	Text name;
}en_p;
struct edemail_page {
	Sprite value1;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text emailpage;
	Text email;
}ee_p;
struct edpass_page {
	Sprite value1;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text passpage;
	Text pass;
}es_p;
struct edphone_page {
	Sprite value1;
	Sprite boutton1;
	Sprite boutton2;
	Text textbutton1;
	Text textbutton2;
	Text phonepage;
	Text phone;
}ep_p;
struct trans_page {
	Sprite b1;
	Text bt1;
	Text transpage;
}tr_p;
massage m;

void setsignin(Signin& signininfun, Texture sigintexinfun[]);
void setheader(Header& header, Texture& headertexture, Texture& boxtexture);
void setlogin(logins& loginfun, Texture sigintexinfun[]);
void setuserpage(user_page& user, Texture sigintexinfun[]);
void setdepositpage(deposit_page& depo, Texture sigintexinfun[]);
void setwithdrawpage(withdraw_page& with, Texture sigintexinfun[]);
void setloanpage(loan_page& lo, Texture sigintexinfun[]);
void setbalancepage(balance_page& bl, Texture sigintexinfun[]);
void setsendpage(send_page& send, Texture sigintexinfun[]);
void setdetailspage(details_page& det, Texture sigintexinfun[]);
void setednamepage(edname_page& edn, Texture sigintexinfun[]);
void setedemailpage(edemail_page& ede, Texture sigintexinfun[]);
void setedpasspage(edpass_page& edps, Texture sigintexinfun[]);
void setedphonepage(edphone_page& edpo, Texture sigintexinfun[]);
void settranspage(trans_page& trans, Texture sigintexinfun[]);
void setmassages(massage& m);


bool loginpage(user users[], Sprite background, RenderWindow& windows);
bool signinpage(user users[], Sprite background, RenderWindow& windows);
bool userpage(user users[], Sprite background, RenderWindow& windows, String& stringinfun);
bool depositpage(user users[], Sprite background, RenderWindow& windows);
bool withdrawpage(user users[], Sprite background, RenderWindow& windows);
bool loanpage(user users[], Sprite background, RenderWindow& windows);
bool balancepage(user users[], Sprite background, RenderWindow& windows);
bool sendpage(user users[], Sprite background, RenderWindow& windows);
bool detailspage(user users[], Sprite background, RenderWindow& windows, String& stringinfun);
bool namepage(user users[], Sprite background, RenderWindow& windows);
bool emailpage(user users[], Sprite background, RenderWindow& windows);
bool passpage(user users[], Sprite background, RenderWindow& windows);
bool phonepage(user users[], Sprite background, RenderWindow& windows);
bool transpage(user users[], Sprite background, RenderWindow& windows);



void drawheader(Header& header, RenderWindow& thatwindow);
void drawsign(Signin& signininfun, RenderWindow& thatwindow);
void drawlogin(logins& loginfun, RenderWindow& thatwindow);
void deawuserpage(user_page& user, RenderWindow& thatwindow);
void drawdepositpage(deposit_page& depo, RenderWindow& thatwindow);
void drawwithdrawpage(withdraw_page& with, RenderWindow& thatwindow);
void drawloanpage(loan_page& lo, RenderWindow& thatwindow);
void drawbalancepage(balance_page& bl, RenderWindow& thatwindow);
void drawsendpage(send_page& send, RenderWindow& thatwindow);
void drawdetailspage(details_page& det, RenderWindow& thatwindow);
void drawednamepage(edname_page& edn, RenderWindow& thatwindow);
void drawemailpage(edemail_page& ede, RenderWindow& thatwindow);
void drawpasspage(edpass_page& edps, RenderWindow& thatwindow);
void drawphonepage(edphone_page& edpo, RenderWindow& thatwindow);
void drawmassage(massage& m, RenderWindow& thatwindow);
void drawtranspage(trans_page trans, RenderWindow& thatwindow);





int main()
{
	//RenderWindow windows(VideoMode(1366, 768), "Bank", Style::Default);
	//Texture headertexture, boxtexture, valuetexure, buttontexture, boxboutontexture;
	//Texture singintextureve[] = { valuetexure, buttontexture,boxboutontexture };
	//Texture backgroundtextur;
	//backgroundtextur.loadFromFile("photos/background_2.png");
	//Sprite background;
	//background.setTexture(backgroundtextur);
	return 0;
}

void setsignin(Signin& signininfun, Texture sigintexinfun[])
{






}

void setheader(Header& header, Texture& headertexture, Texture& boxtexture)
{
	boxtexture.loadFromFile("photos/main_box copy.png");
	header.boxheader.setTexture(boxtexture);
	boxtexture.setSmooth(true);
	header.boxheader.setPosition(38, 177);
	///////////////////////////////////////////////////////////////////////////////////
	headertexture.loadFromFile("photos/header copy.png");
	header.backgrondheader.setTexture(headertexture);
	headertexture.setSmooth(true);
	header.backgrondheader.setPosition(79, 0);
	///////////////////////////////////////////////////////////////////////////////////

}

void setlogin(logins& loginfun, Texture sigintexinfun[])
{





}

void setuserpage(user_page& user, Texture sigintexinfun[])
{





}

void setdepositpage(deposit_page& depo, Texture sigintexinfun[])
{




}

void setwithdrawpage(withdraw_page& with, Texture sigintexinfun[])
{









}

void setloanpage(loan_page& lo, Texture sigintexinfun[])
{








}

void setbalancepage(balance_page& bl, Texture sigintexinfun[])
{









}

void setsendpage(send_page& send, Texture sigintexinfun[])
{









}

void setdetailspage(details_page& det, Texture sigintexinfun[])
{









}

void setednamepage(edname_page& edn, Texture sigintexinfun[])
{






}

void setedemailpage(edemail_page& ede, Texture sigintexinfun[])
{










}

void setedpasspage(edpass_page& edps, Texture sigintexinfun[])
{








}

void setedphonepage(edphone_page& edpo, Texture sigintexinfun[])
{





}

void settranspage(trans_page& trans, Texture sigintexinfun[])
{








}

void setmassages(massage& m)
{
	m.failer.setFont(coolvetica);
	m.failer.setCharacterSize(30);
	m.failer.setPosition(100, 654);
}




//////////////////////////////////////////////////////////////////////////////




bool loginpage(user users[], Sprite background, RenderWindow& windows)
{
	string input[2];
	Text input_text[2];
	int input_index = 0;
	for (int i = 0; i < 2; i++)
	{
		input_text[i].setPosition(845, 347 + i * 88);
		input_text[i].setCharacterSize(18);
		input_text[i].setFont(coolvetica);
	}

	while (windows.isOpen())
	{
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);

		if (mouesRect.getGlobalBounds().intersects(l.button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			for (int i = 0; i < 2; i++)
			{
				if (input[i].empty())
					input[i] = "0";
			}

			if (login(users,input[0],input[1],m))
			{
				return true;
			}

			for (int i = 0; i < 2; i++)
			{
				input[i].resize(0);
			}
		}

		if (mouesRect.getGlobalBounds().intersects(l.button2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
		}

		for (int i = 0; i < 2; i++)
		{
			input_text[i].setString(input[i]);
		}
	}

	Event event;
	while (windows.pollEvent(event))
	{
		if (event.type == Event::Closed)
		{
			windows.close();
		}


		if (event.type == Event::TextEntered)
		{
			input[input_index] += static_cast<char>(event.text.unicode);
		}
	}

	if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
	{
		input_index++;
		input_index %= 2;
	}

	if (Keyboard::isKeyPressed(Keyboard::Backspace) && input[input_index].size() > 0)
	{
		input[input_index].resize(input[input_index].size() - 1);
	}
	if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter && input_index == 0)
	{
		for (int i = 0; i < 2; i++)
		{
			if (input[i].empty())
			input[i] = "0";
		}
		if (login(users, input[0], input[1], m))
		{
			thisuser = indx_or_arr;
			return true;
		}
		for (int i = 0; i < 2; i++)
		{
			input[i].resize(0);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		input_text[i].setString(input[i]);
	}
	windows.clear();
	windows.draw(background);
	for (int i = 0; i < 2; i++)
	{
		windows.draw(input_text[i]);
	}
	windows.display();
}

bool signinpage(user users[], Sprite background, RenderWindow& windows)
{
	string input[5];
	Text input_text[5];
	int input_index=0;
	for (int i = 0; i < 5; i++)
	{
		input_text[i].setPosition(845, 234 + i * 82);
		input_text[i].setCharacterSize(18);
		input_text[i].setFont(coolvetica);
	}

	while (windows.isOpen())
	{
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);

		if (mouesRect.getGlobalBounds().intersects(s.button1.getGlobalBounds())&& Mouse::isButtonPressed(Mouse::Left))
		{
			for (int i = 0; i < 5; i++)
			{
				if (input[i].empty())	
					input[i] = "0";
			}

			if (signup(users, input[0], input[1], input[2], stof(input[3]), input[4], m))
			{
				thisuser = indx_or_arr;
				return true;
			}

			for (int i = 0; i < 5; i++)
			{
				input[i].resize(0);
			}
		}

		if (mouesRect.getGlobalBounds().intersects(s.button2.getGlobalBounds())&& Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
		}

		for (int i = 0; i < 5; i++)
		{
			input_text[i].setString(input[i]);
		}
	}

	Event event;
	while (windows.pollEvent(event))
	{
		if (event.type == Event::Closed)
		{
			windows.close();
		}

		if (event.type == Event::TextEntered)
		{
			if (input_index < 3)
			{
				input[input_index] += static_cast<char>(event.text.unicode);
			}
			else
			{
				if (isdigit(static_cast<char>(event.text.unicode)))
				{
					input[input_index] += static_cast<char>(event.text.unicode);
				}
			}
		}

		if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
		{
			input_index++;
			input_index %= 5;
		}

		if (input_index < 3)
		{
			if (Keyboard::isKeyPressed(Keyboard::Backspace)	&& input[input_index].size() > 0)
			{
				input[input_index].resize(input[input_index].size() - 1);
			}
		}
		else {
			if (input[input_index].size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::Backspace)
			{
				input[input_index].resize(input[input_index].size() - 1);
			}
		}

		if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter && input_index == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				if (input[i].empty())
					input[i] = "0";
			}
			if (signup(users, input[0], input[1], input[2], stof(input[3]), input[4], m))
			{
				thisuser = indx_or_arr;
				return true;
			}

			for (int i = 0; i < 5; i++)
			{
				input[i].resize(0);
			}
		}

	}
	for (int i = 0; i < 5; i++)
	{
		input_text[i].setString(input[i]);
	}
	windows.clear();
	windows.draw(background);
	for (int i = 0; i < 5; i++)
	{
		windows.draw(input_text[i]);
	}

	windows.display();
}

bool userpage(user users[], Sprite background, RenderWindow& windows, String& stringinfun)
{













	return false;
}

bool depositpage(user users[], Sprite background, RenderWindow& windows)
{















	return false;
}

bool withdrawpage(user users[], Sprite background, RenderWindow& windows)
{












	return false;
}

bool loanpage(user users[], Sprite background, RenderWindow& windows)
{












	return false;
}

bool balancepage(user users[], Sprite background, RenderWindow& windows)
{









	return false;
}

bool sendpage(user users[], Sprite background, RenderWindow& windows)
{












	return false;
}

bool detailspage(user users[], Sprite background, RenderWindow& windows, String& stringinfun)
{












	return false;
}

bool namepage(user users[], Sprite background, RenderWindow& windows)
{














	return false;
}

bool emailpage(user users[], Sprite background, RenderWindow& windows)
{























	return false;
}

bool passpage(user users[], Sprite background, RenderWindow& windows)
{
















	return false;
}

bool phonepage(user users[], Sprite background, RenderWindow& windows)
{















	return false;
}

bool transpage(user users[], Sprite background, RenderWindow& windows)
{















	return false;
}






////////////////////////////////////////////////////////////////////////////////





void drawheader(Header& header, RenderWindow& thatwindow)
{
	thatwindow.draw(header.boxheader);
	thatwindow.draw(header.backgrondheader);
}

void drawsign(Signin& signininfun, RenderWindow& thatwindow)
{








}

void drawlogin(logins& loginfun, RenderWindow& thatwindow)
{









}

void deawuserpage(user_page& user, RenderWindow& thatwindow)
{












}

void drawdepositpage(deposit_page& depo, RenderWindow& thatwindow)
{









}

void drawwithdrawpage(withdraw_page& with, RenderWindow& thatwindow)
{









}

void drawloanpage(loan_page& lo, RenderWindow& thatwindow)
{






}

void drawbalancepage(balance_page& bl, RenderWindow& thatwindow)
{














}

void drawsendpage(send_page& send, RenderWindow& thatwindow)
{








}

void drawdetailspage(details_page& det, RenderWindow& thatwindow)
{








}

void drawednamepage(edname_page& edn, RenderWindow& thatwindow)
{







}

void drawemailpage(edemail_page& ede, RenderWindow& thatwindow)
{







}

void drawpasspage(edpass_page& edps, RenderWindow& thatwindow)
{









}

void drawphonepage(edphone_page& edpo, RenderWindow& thatwindow)
{









}

void drawmassage(massage& m, RenderWindow& thatwindow)
{
	thatwindow.draw(m.failer);
}

void drawtranspage(trans_page trans, RenderWindow& thatwindow)
{







}


