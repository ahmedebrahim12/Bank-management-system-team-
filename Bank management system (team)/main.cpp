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
	user data[200];
	read(data);

	indx_or_arr--;




	RenderWindow windows(VideoMode(1366, 768), "Bank", Style::Fullscreen); 

	Texture headertexture, boxtexture, valuetexure, buttontexture, boxboutontexture;
	Texture singintextureve[] = { valuetexure, buttontexture,boxboutontexture };




	setheader(h, headertexture, boxtexture);
	setsignin(s, singintextureve);
	setlogin(l, singintextureve);
	setuserpage(u_p, singintextureve);
	setdepositpage(d_p, singintextureve);
	setwithdrawpage(w_p, singintextureve);
	setloanpage(l_p, singintextureve);
	setbalancepage(b_p, singintextureve);
	setsendpage(s_p, singintextureve);
	setdetailspage(de_p, singintextureve);
	setednamepage(en_p, singintextureve);
	setedemailpage(ee_p, singintextureve);
	setedpasspage(es_p, singintextureve);
	setedphonepage(ep_p, singintextureve);
	settranspage(tr_p, singintextureve);
	setmassages(m);
	////////////////////////////////////////////////////////////////////////////


	Texture backgroundtextur;
	backgroundtextur.loadFromFile("photos/background_2.png");
	Sprite background;
	background.setTexture(backgroundtextur);

	while (true)
	{

		m.failer.setString(" ");
		if (loginpage(data, background, windows))
		{
			if (!windows.isOpen())
			{
				break;
			}
			stringtouserp = " ";
			while (userpage(data, background, windows, stringtouserp) == true)
			{
				if (!windows.isOpen())
				{
					break;
				}
				if (stringtouserp == "Deposit")
				{
					m.failer.setString(" ");
					if (depositpage(data, background, windows) != true) { continue; }

					if (!windows.isOpen())
					{
						break;
					}
				}
				if (stringtouserp == "Withdraw")
				{
					m.failer.setString(" ");
					if (withdrawpage(data, background, windows) != true) { continue; }
					if (!windows.isOpen())
					{
						break;
					}
				}
				if (stringtouserp == "Send")
				{
					m.failer.setString(" ");
					if (sendpage(data, background, windows) != true) { continue; }
					if (!windows.isOpen())
					{
						break;
					}
				}
				if (stringtouserp == "Loan")
				{
					m.failer.setString(" ");
					if (loanpage(data, background, windows) != true) { continue; }
					if (!windows.isOpen())
					{
						break;
					}
				}
				if (stringtouserp == "Balance")
				{
					if (balancepage(data, background, windows) != true) { continue; }
					if (!windows.isOpen())
					{
						break;
					}
				}
				if (stringtouserp == "Details")
				{
					stringtodetailsp = " ";
					while (detailspage(data, background, windows, stringtodetailsp) == true)
					{
						if (!windows.isOpen())
						{
							break;
						}
						if (stringtodetailsp == "name")
						{
							if (namepage(data, background, windows) != true) { continue; }
							if (!windows.isOpen())
							{
								break;
							}
						}
						if (stringtodetailsp == "email")
						{
							m.failer.setString(" ");
							if (emailpage(data, background, windows) != true) { continue; }
							if (!windows.isOpen())
							{
								break;
							}
						}
						if (stringtodetailsp == "pass")
						{
							if (passpage(data, background, windows) != true) { continue; }
							if (!windows.isOpen())
							{
								break;
							}
						}
						if (stringtodetailsp == "phone")
						{
							if (phonepage(data, background, windows) != true) { continue; }
							if (!windows.isOpen())
							{
								break;
							}
						}
						if (stringtodetailsp == "trans")
						{
							if (transpage(data, background, windows) != true) { continue; }
							if (!windows.isOpen())
							{
								break;
							}
						}
					}
				}
			}
		}
		else {
			m.failer.setString(" ");
			if (signinpage(data, background, windows))
			{
				if (!windows.isOpen())
				{
					break;
				}
				stringtouserp = " ";
				while (userpage(data, background, windows, stringtouserp) == true)
				{
					if (!windows.isOpen())
					{
						break;
					}
					if (stringtouserp == "Deposit")
					{
						m.failer.setString(" ");
						if (depositpage(data, background, windows) != true) { continue; }
						if (!windows.isOpen())
						{
							break;
						}
					}
					if (stringtouserp == "Withdraw")
					{
						m.failer.setString(" ");

						if (withdrawpage(data, background, windows) != true) { continue; }
						if (!windows.isOpen())
						{
							break;
						}
					}
					if (stringtouserp == "Send")
					{
						m.failer.setString(" ");

						if (sendpage(data, background, windows) != true) { continue; }
						if (!windows.isOpen())
						{
							break;
						}
					}
					if (stringtouserp == "Loan")
					{
						m.failer.setString(" ");

						if (loanpage(data, background, windows) != true) { continue; }
						if (!windows.isOpen())
						{
							break;
						}
					}
					if (stringtouserp == "Balance")
					{
						if (balancepage(data, background, windows) != true) { continue; }
						if (!windows.isOpen())
						{
							break;
						}
					}
					if (stringtouserp == "Details")
					{
						stringtodetailsp = " ";
						while (detailspage(data, background, windows, stringtodetailsp) == true)
						{
							if (!windows.isOpen())
							{
								break;
							}
							if (stringtodetailsp == "name")
							{
								if (namepage(data, background, windows) != true) { continue; }
								if (!windows.isOpen())
								{
									break;
								}
							}
							if (stringtodetailsp == "email")
							{
								m.failer.setString(" ");

								if (emailpage(data, background, windows) != true) { continue; }
								if (!windows.isOpen())
								{
									break;
								}
							}

							if (stringtodetailsp == "pass")
							{
								if (passpage(data, background, windows) != true) { continue; }
								if (!windows.isOpen())
								{
									break;
								}
							}
							if (stringtodetailsp == "phone")
							{
								if (phonepage(data, background, windows) != true) { continue; }
								if (!windows.isOpen())
								{
									break;
								}
							}
							if (stringtodetailsp == "trans")
							{
								if (transpage(data, background, windows) != true) { continue; }
								if (!windows.isOpen())
								{
									break;
								}
							}
						}
					}
				}
			}
			else { continue; }
		}
		if (userpage(data, background, windows, stringtouserp) != true) { continue; }

	}

	write(data);

	return 0;
}

void setsignin(Signin& signininfun, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[0].setSmooth(true);
	signininfun.value1.setTexture(sigintexinfun[0]);
	signininfun.value1.setPosition(835, 225);
	signininfun.value2.setTexture(sigintexinfun[0]);
	signininfun.value2.setPosition(835, 306);
	signininfun.value3.setTexture(sigintexinfun[0]);
	signininfun.value3.setPosition(835, 389);
	signininfun.value4.setTexture(sigintexinfun[0]);
	signininfun.value4.setPosition(835, 470);
	signininfun.value5.setTexture(sigintexinfun[0]);
	signininfun.value5.setPosition(835, 545);
	//////////////////////////////////////////////////////////////////////
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	signininfun.button1.setTexture(sigintexinfun[1]);
	signininfun.button1.setPosition(261.5, 302.5);
	signininfun.button2.setTexture(sigintexinfun[1]);
	signininfun.button2.setPosition(261.5, 452.5);
	////////////////////////////////////////////////////////////////////// text
	signininfun.nametext.setFont(coolvetica);
	signininfun.nametext.setString("name:");
	signininfun.nametext.setPosition(745, 225);
	signininfun.emailtext.setFont(coolvetica);
	signininfun.emailtext.setString("email:");
	signininfun.emailtext.setPosition(745, 305);
	signininfun.passtext.setFont(coolvetica);
	signininfun.passtext.setString("password:");
	signininfun.passtext.setPosition(690, 390);
	signininfun.balunstext.setFont(coolvetica);
	signininfun.balunstext.setString("baluns:");
	signininfun.balunstext.setPosition(735, 470);
	signininfun.numbertext.setFont(coolvetica);
	signininfun.numbertext.setString("phone:");
	signininfun.numbertext.setPosition(735, 545);
	signininfun.inbutton1.setFont(coolvetica);
	signininfun.inbutton1.setString("signin");
	signininfun.inbutton1.setPosition(288.69 + 3, 313.06 - 3);
	signininfun.inbutton1.setCharacterSize(41.67);
	signininfun.inbutton2.setFont(coolvetica);
	signininfun.inbutton2.setString("login");
	signininfun.inbutton2.setPosition(294.56 + 6, 465.56 - 4);
	signininfun.inbutton2.setCharacterSize(41.67);
	signininfun.mase.setFont(coolvetica);
	signininfun.mase.setString("you already have account?");
	signininfun.mase.setPosition(162.75, 412.64 - 8);
	signininfun.mase.setCharacterSize(35.08);






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
	///////////////////////////////////////////////////////////////
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[0].setSmooth(true);
	loginfun.value1.setTexture(sigintexinfun[0]);
	loginfun.value1.setPosition(834, 334);
	loginfun.value2.setTexture(sigintexinfun[0]);
	loginfun.value2.setPosition(834, 422);
	///////////////////////////////////////////////////////////////
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	loginfun.button1.setTexture(sigintexinfun[1]);
	loginfun.button1.setPosition(965, 532);
	loginfun.button2.setTexture(sigintexinfun[1]);
	loginfun.button2.setPosition(498.5, 505.5);
	/////////////////////////////////////////////////////////////// text
	loginfun.emailtext.setFont(coolvetica);
	loginfun.emailtext.setString("email:");
	loginfun.emailtext.setPosition(720, 330 - 2);
	loginfun.emailtext.setCharacterSize(43);
	loginfun.passtext.setFont(coolvetica);
	loginfun.passtext.setString("password:");
	loginfun.passtext.setPosition(640, 410 + 2);
	loginfun.passtext.setCharacterSize(43);
	loginfun.inbutton1.setFont(coolvetica);
	loginfun.inbutton1.setString("login");
	loginfun.inbutton1.setPosition(994.56 + 11, 540.21);
	loginfun.inbutton1.setCharacterSize(41.67);
	loginfun.inbutton2.setFont(coolvetica);
	loginfun.inbutton2.setString("signin");
	loginfun.inbutton2.setPosition(525.69, 519.06 - 8);
	loginfun.inbutton2.setCharacterSize(41.67);
	loginfun.mase.setFont(coolvetica);
	loginfun.mase.setString("you don't have account?");
	loginfun.mase.setPosition(61.29 - 2, 520.48 - 4);
	loginfun.mase.setCharacterSize(41.67);




}

void setuserpage(user_page& user, Texture sigintexinfun[])
{
	sigintexinfun[2].loadFromFile("photos/Rounded Rectangle 1 _ copy.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[1].setSmooth(true);
	sigintexinfun[2].setSmooth(true);
	///////////////////////////////////////////////////
	user.box1.setTexture(sigintexinfun[2]);
	user.box1.setPosition(150, 375);
	///////////////////////////////////////////////////
	user.box2.setTexture(sigintexinfun[2]);
	user.box2.setPosition(541, 375);
	///////////////////////////////////////////////////
	user.box3.setTexture(sigintexinfun[2]);
	user.box3.setPosition(929, 375);
	///////////////////////////////////////////////////
	user.box4.setTexture(sigintexinfun[2]);
	user.box4.setPosition(150, 622);
	///////////////////////////////////////////////////
	user.box5.setTexture(sigintexinfun[2]);
	user.box5.setPosition(541, 622);
	///////////////////////////////////////////////////
	user.box6.setTexture(sigintexinfun[2]);
	user.box6.setPosition(929, 622);
	///////////////////////////////////////////////////
	user.logout.setTexture(sigintexinfun[1]);
	user.logout.setPosition(107.5, 14.5);
	//////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	///////////////////////////////////////////////////
	user.deposit.setFont(coolvetica);
	user.deposit.setString("Deposit");
	user.deposit.setPosition(205.9, 378.28 - 6);
	user.deposit.setCharacterSize(56.06);
	///////////////////////////////////////////////////
	user.withdraw.setFont(coolvetica);
	user.withdraw.setString("Withdraw");
	user.withdraw.setPosition(577.46, 381.28 - 6);
	user.withdraw.setCharacterSize(54.64);
	///////////////////////////////////////////////////
	user.send.setFont(coolvetica);
	user.send.setString("send");
	user.send.setPosition(1015.7, 379.29 - 6);
	user.send.setCharacterSize(57.54);
	///////////////////////////////////////////////////
	user.loan.setFont(coolvetica);
	user.loan.setString("Loan");
	user.loan.setPosition(231.64, 619.09 - 4);
	user.loan.setCharacterSize(65.57);
	///////////////////////////////////////////////////
	user.balanse.setFont(coolvetica);
	user.balanse.setString("Balance");
	user.balanse.setPosition(592.83, 622.58 - 4);
	user.balanse.setCharacterSize(60.57);
	///////////////////////////////////////////////////
	user.details.setFont(coolvetica);
	user.details.setString("Details");
	user.details.setPosition(996.39, 625 - 4);
	user.details.setCharacterSize(58.7);
	///////////////////////////////////////////////////
	user.userpage.setFont(coolvetica);
	user.userpage.setString("User page");
	user.userpage.setPosition(565.9, 13.64 - 2);
	user.userpage.setCharacterSize(67.29);
	///////////////////////////////////////////////////
	user.hello.setFont(coolvetica);
	user.hello.setString("Hello");
	user.hello.setPosition(522.29, 204.45);
	user.hello.setCharacterSize(75);
///////////////////////////////////////////////////////
	user.telogout.setFont(coolvetica);
	user.telogout.setString("log out");
	user.telogout.setPosition(125.41 + 4, 24.83 - 4);
	user.telogout.setCharacterSize(41.67);




}

void setdepositpage(deposit_page& depo, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	depo.value1.setTexture(sigintexinfun[0]);
	depo.value1.setPosition(608.56, 377.5);
	////////////////////////////////////////////////
	depo.boutton1.setTexture(sigintexinfun[1]);
	depo.boutton1.setPosition(604.5, 487.5);
	////////////////////////////////////////////////
	depo.boutton2.setTexture(sigintexinfun[1]);
	depo.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	depo.textbutton1.setFont(coolvetica);
	depo.textbutton1.setString("enter");
	depo.textbutton1.setPosition(636.34, 496.79);
	depo.textbutton1.setCharacterSize(41.67);
	////////////////////////////////////////////////
	depo.textbutton2.setFont(coolvetica);
	depo.textbutton2.setString("Back");
	depo.textbutton2.setPosition(109.29, 226.26);
	depo.textbutton2.setCharacterSize(41.67);
	////////////////////////////////////////////////
	depo.deposit.setFont(coolvetica);
	depo.deposit.setString("Deposit:");
	depo.deposit.setPosition(413.68 + 2, 369.16 - 6);
	depo.deposit.setCharacterSize(49.72);
	////////////////////////////////////////////////
	depo.masse.setFont(coolvetica);
	depo.masse.setString("enter the value you need to deposit");
	depo.masse.setPosition(339.85, 219.04);
	depo.masse.setCharacterSize(55.93);
	////////////////////////////////////////////////
	depo.depositpage.setFont(coolvetica);
	depo.depositpage.setString("Deposit page");
	depo.depositpage.setPosition(516.33, 19.45 - 4);
	depo.depositpage.setCharacterSize(63.4);



}

void setwithdrawpage(withdraw_page& with, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	with.value1.setTexture(sigintexinfun[0]);
	with.value1.setPosition(608.56, 377.5);
	////////////////////////////////////////////////
	with.boutton1.setTexture(sigintexinfun[1]);
	with.boutton1.setPosition(604.5, 487.5);
	////////////////////////////////////////////////
	with.boutton2.setTexture(sigintexinfun[1]);
	with.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	with.textbutton1.setFont(coolvetica);
	with.textbutton1.setString("enter");
	with.textbutton1.setPosition(636.34, 496.79);
	with.textbutton1.setCharacterSize(40);
	////////////////////////////////////////////////
	with.textbutton2.setFont(coolvetica);
	with.textbutton2.setString("Back");
	with.textbutton2.setPosition(109.29, 226.26);
	with.textbutton2.setCharacterSize(41.6);
	////////////////////////////////////////////////
	with.withdraw.setFont(coolvetica);
	with.withdraw.setString("Withdraw:");
	with.withdraw.setPosition(411 - 20, 378 - 10);
	with.withdraw.setCharacterSize(49.72);
	////////////////////////////////////////////////
	with.masse.setFont(coolvetica);
	with.masse.setString("enter the value you need to withdraw");
	with.masse.setPosition(339.85, 219.04);
	with.masse.setCharacterSize(56);
	////////////////////////////////////////////////
	with.withdrawpage.setFont(coolvetica);
	with.withdrawpage.setString("Withdraw page");
	with.withdrawpage.setPosition(516.33, 19.45 - 4);
	with.withdrawpage.setCharacterSize(63.4);








}

void setloanpage(loan_page& lo, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	lo.value1.setTexture(sigintexinfun[0]);
	lo.value1.setPosition(608.56, 377.5);
	////////////////////////////////////////////
	lo.boutton1.setTexture(sigintexinfun[1]);
	lo.boutton1.setPosition(604.5, 487.5);
	////////////////////////////////////////////
	lo.boutton2.setTexture(sigintexinfun[1]);
	lo.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	lo.textbutton1.setFont(coolvetica);
	lo.textbutton1.setString("enter");
	lo.textbutton1.setPosition(636.34, 496.79);
	lo.textbutton1.setCharacterSize(40);
	////////////////////////////////////////////////
	lo.textbutton2.setFont(coolvetica);
	lo.textbutton2.setString("Back");
	lo.textbutton2.setPosition(109.29, 226.26);
	lo.textbutton2.setCharacterSize(41.6);
	////////////////////////////////////////////////
	lo.loan.setFont(coolvetica);
	lo.loan.setString("Loan:");
	lo.loan.setPosition(480.91 + 3, 373.81 - 7);
	lo.loan.setCharacterSize(49.72);
	////////////////////////////////////////////////
	lo.masse.setFont(coolvetica);
	lo.masse.setString("enter the value you need to loan");
	lo.masse.setPosition(339.85, 219.04);
	lo.masse.setCharacterSize(56);
	////////////////////////////////////////////////
	lo.loanpage.setFont(coolvetica);
	lo.loanpage.setString("Loan page");
	lo.loanpage.setPosition(516.33, 19.45 - 4);
	lo.loanpage.setCharacterSize(63.4);







}

void setbalancepage(balance_page& bl, Texture sigintexinfun[])
{
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[1].setSmooth(true);
	///////////////////////////////////////////
	bl.boutton1.setTexture(sigintexinfun[1]);
	bl.boutton1.setPosition(68.5, 216.5);
	///////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	///////////////////////////////////////////
	bl.textbutton1.setFont(coolvetica);
	bl.textbutton1.setString("Back");
	bl.textbutton1.setPosition(109.29, 226.26);
	bl.textbutton1.setCharacterSize(41.6);
	////////////////////////////////////////////
	bl.balancepage.setFont(coolvetica);
	bl.balancepage.setString("Balance page");
	bl.balancepage.setPosition(516.33, 19.45 - 4);
	bl.balancepage.setCharacterSize(63.4);
	/////////////////////////////////////////////
	bl.masse.setFont(coolvetica);
	bl.masse.setString("your balance");
	bl.masse.setPosition(477.6, 309.82);
	bl.masse.setCharacterSize(78.54);








}

void setsendpage(send_page& send, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	send.value1.setTexture(sigintexinfun[0]);
	send.value1.setPosition(604.8, 330.66);
	////////////////////////////////////////////////
	send.value2.setTexture(sigintexinfun[0]);
	send.value2.setPosition(604.8, 421.66);
	////////////////////////////////////////////
	send.boutton1.setTexture(sigintexinfun[1]);
	send.boutton1.setPosition(600.8, 504.6);
	////////////////////////////////////////////
	send.boutton2.setTexture(sigintexinfun[1]);
	send.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	send.textbutton1.setFont(coolvetica);
	send.textbutton1.setString("enter");
	send.textbutton1.setPosition(632.34, 511.79);
	send.textbutton1.setCharacterSize(41.67);
	////////////////////////////////////////////////
	send.textbutton2.setFont(coolvetica);
	send.textbutton2.setString("Back");
	send.textbutton2.setPosition(109.29, 226.26);
	send.textbutton2.setCharacterSize(41.6);
	////////////////////////////////////////////////
	send.send1.setFont(coolvetica);
	send.send1.setString("to(ID):");
	send.send1.setPosition(455.46, 325.55 - 4);
	send.send1.setCharacterSize(49.72);
	////////////////////////////////////////////////
	send.send2.setFont(coolvetica);
	send.send2.setString("Much:");
	send.send2.setPosition(455 + 8, 419.25 - 8);
	send.send2.setCharacterSize(49.72);
	////////////////////////////////////////////////
	send.masse.setFont(coolvetica);
	send.masse.setString("enter the value you need to send");
	send.masse.setPosition(339.85, 219.04);
	send.masse.setCharacterSize(56);
	////////////////////////////////////////////////
	send.sendpage.setFont(coolvetica);
	send.sendpage.setString("send page");
	send.sendpage.setPosition(516.33, 19.45 - 4);
	send.sendpage.setCharacterSize(63.4);








}

void setdetailspage(details_page& det, Texture sigintexinfun[])
{
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[1].setSmooth(true);
	//////////////////////////////////////////////////////
	det.boutton1.setTexture(sigintexinfun[1]);
	det.boutton1.setPosition(1118.5, 293.5);
	//////////////////////////////////////////////////////
	det.boutton2.setTexture(sigintexinfun[1]);
	det.boutton2.setPosition(1118.5, 378.5);
	//////////////////////////////////////////////////////
	det.boutton3.setTexture(sigintexinfun[1]);
	det.boutton3.setPosition(1118.5, 480.5);
	//////////////////////////////////////////////////////
	det.boutton4.setTexture(sigintexinfun[1]);
	det.boutton4.setPosition(1118.5, 582.5);
	//////////////////////////////////////////////////////
	det.boutton5.setTexture(sigintexinfun[1]);
	det.boutton5.setPosition(1082.34, 21);
	//////////////////////////////////////////////////////
	det.boutton6.setTexture(sigintexinfun[1]);
	det.boutton6.setPosition(551.03, 653.78);
	//////////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	det.textbutton1.setFont(coolvetica);
	det.textbutton1.setString("Update");
	det.textbutton1.setPosition(1136.64, 302.46);
	det.textbutton1.setCharacterSize(41.67);
	////////////////////////////////////////////////
	det.textbutton2.setFont(coolvetica);
	det.textbutton2.setString("Update");
	det.textbutton2.setPosition(1136.64, 385.46);
	det.textbutton2.setCharacterSize(41.67);
	////////////////////////////////////////////////
	det.textbutton3.setFont(coolvetica);
	det.textbutton3.setString("Update");
	det.textbutton3.setPosition(1136.64, 488.46);
	det.textbutton3.setCharacterSize(41.67);
	////////////////////////////////////////////////
	det.textbutton4.setFont(coolvetica);
	det.textbutton4.setString("Update");
	det.textbutton4.setPosition(1136.64, 587.46);
	det.textbutton4.setCharacterSize(41.67);
	////////////////////////////////////////////////
	det.textbutton5.setFont(coolvetica);
	det.textbutton5.setString("Back");
	det.textbutton5.setPosition(1121.13, 29.98);
	det.textbutton5.setCharacterSize(41.67);
	////////////////////////////////////////////////
	det.textbutton6.setFont(coolvetica);
	det.textbutton6.setString("details");
	det.textbutton6.setPosition(555.99 + 6, 657.85);
	det.textbutton6.setCharacterSize(48);
	///////////////////////////////////////////////
	det.detilspage.setFont(coolvetica);
	det.detilspage.setString("Details page");
	det.detilspage.setPosition(516.33, 19.45 - 4);
	det.detilspage.setCharacterSize(63.4);
	///////////////////////////////////////////////
	det.idmss.setFont(coolvetica);
	det.idmss.setString("ID:");
	det.idmss.setPosition(80.85, 213.84);
	det.idmss.setCharacterSize(55.83);
	///////////////////////////////////////////////
	det.namemss.setFont(coolvetica);
	det.namemss.setString("Name:");
	det.namemss.setPosition(80.85, 300.71);
	det.namemss.setCharacterSize(55.83);
	///////////////////////////////////////////////
	det.emailmss.setFont(coolvetica);
	det.emailmss.setString("email:");
	det.emailmss.setPosition(80.85, 383.33);
	det.emailmss.setCharacterSize(55.83);
	///////////////////////////////////////////////
	det.passmss.setFont(coolvetica);
	det.passmss.setString("password:");
	det.passmss.setPosition(80.85, 483.74);
	det.passmss.setCharacterSize(55.83);
	///////////////////////////////////////////////
	det.phonemss.setFont(coolvetica);
	det.phonemss.setString("phone:");
	det.phonemss.setPosition(80.85, 575.6);
	det.phonemss.setCharacterSize(55.83);
	///////////////////////////////////////////////
	det.trans.setFont(coolvetica);
	det.trans.setString("transactins count:");
	det.trans.setPosition(83.2, 658.85);
	det.trans.setCharacterSize(52);








}

void setednamepage(edname_page& edn, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	edn.value1.setTexture(sigintexinfun[0]);
	edn.value1.setPosition(608.56, 377.5);
	////////////////////////////////////////////////
	edn.boutton1.setTexture(sigintexinfun[1]);
	edn.boutton1.setPosition(604.5, 487.5);
	////////////////////////////////////////////////
	edn.boutton2.setTexture(sigintexinfun[1]);
	edn.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	edn.textbutton1.setFont(coolvetica);
	edn.textbutton1.setString("enter");
	edn.textbutton1.setPosition(636.34, 496.79);
	edn.textbutton1.setCharacterSize(41.67);
	////////////////////////////////////////////////
	edn.textbutton2.setFont(coolvetica);
	edn.textbutton2.setString("Back");
	edn.textbutton2.setPosition(109.29, 226.26);
	edn.textbutton2.setCharacterSize(41.6);
	////////////////////////////////////////////////
	edn.name.setFont(coolvetica);
	edn.name.setString("New name:");
	edn.name.setPosition(413.68 - 30, 369.16);
	edn.name.setCharacterSize(49.72);
	////////////////////////////////////////////////
	edn.namepage.setFont(coolvetica);
	edn.namepage.setString("update name page");
	edn.namepage.setPosition(516.33 - 30, 19.45 - 4);
	edn.namepage.setCharacterSize(63.4);


}

void setedemailpage(edemail_page& ede, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	ede.value1.setTexture(sigintexinfun[0]);
	ede.value1.setPosition(608.56, 377.5);
	////////////////////////////////////////////////
	ede.boutton1.setTexture(sigintexinfun[1]);
	ede.boutton1.setPosition(604.5, 487.5);
	////////////////////////////////////////////////
	ede.boutton2.setTexture(sigintexinfun[1]);
	ede.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	ede.textbutton1.setFont(coolvetica);
	ede.textbutton1.setString("enter");
	ede.textbutton1.setPosition(636.34, 496.79);
	ede.textbutton1.setCharacterSize(41.67);
	////////////////////////////////////////////////
	ede.textbutton2.setFont(coolvetica);
	ede.textbutton2.setString("Back");
	ede.textbutton2.setPosition(109.29, 226.26);
	ede.textbutton2.setCharacterSize(41.6);
	////////////////////////////////////////////////
	ede.email.setFont(coolvetica);
	ede.email.setString("New email:");
	ede.email.setPosition(413.68 - 30, 369.16);
	ede.email.setCharacterSize(49.72);
	////////////////////////////////////////////////
	ede.emailpage.setFont(coolvetica);
	ede.emailpage.setString("update email page");
	ede.emailpage.setPosition(516.33 - 30, 19.45 - 4);
	ede.emailpage.setCharacterSize(63.4);









}

void setedpasspage(edpass_page& edps, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	edps.value1.setTexture(sigintexinfun[0]);
	edps.value1.setPosition(608.56, 377.5);
	////////////////////////////////////////////////
	edps.boutton1.setTexture(sigintexinfun[1]);
	edps.boutton1.setPosition(604.5, 487.5);
	////////////////////////////////////////////////
	edps.boutton2.setTexture(sigintexinfun[1]);
	edps.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	edps.textbutton1.setFont(coolvetica);
	edps.textbutton1.setString("enter");
	edps.textbutton1.setPosition(636.34, 496.79);
	edps.textbutton1.setCharacterSize(41.67);
	////////////////////////////////////////////////
	edps.textbutton2.setFont(coolvetica);
	edps.textbutton2.setString("Back");
	edps.textbutton2.setPosition(109.29, 226.26);
	edps.textbutton2.setCharacterSize(41.6);
	////////////////////////////////////////////////
	edps.pass.setFont(coolvetica);
	edps.pass.setString("New password:");
	edps.pass.setPosition(413.68 - 140, 369.16 - 3);
	edps.pass.setCharacterSize(49.72);
	////////////////////////////////////////////////
	edps.passpage.setFont(coolvetica);
	edps.passpage.setString("update password page");
	edps.passpage.setPosition(516.33 - 30, 19.45 - 4);
	edps.passpage.setCharacterSize(63.4);







}

void setedphonepage(edphone_page& edpo, Texture sigintexinfun[])
{
	sigintexinfun[0].loadFromFile("photos/Rounded Rectangle 4 copy 2.png");
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[0].setSmooth(true);
	sigintexinfun[1].setSmooth(true);
	////////////////////////////////////////////////
	edpo.value1.setTexture(sigintexinfun[0]);
	edpo.value1.setPosition(608.56, 377.5);
	////////////////////////////////////////////////
	edpo.boutton1.setTexture(sigintexinfun[1]);
	edpo.boutton1.setPosition(604.5, 487.5);
	////////////////////////////////////////////////
	edpo.boutton2.setTexture(sigintexinfun[1]);
	edpo.boutton2.setPosition(68.5, 216.5);
	////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	////////////////////////////////////////////////
	edpo.textbutton1.setFont(coolvetica);
	edpo.textbutton1.setString("enter");
	edpo.textbutton1.setPosition(636.34, 496.79);
	edpo.textbutton1.setCharacterSize(41.67);
	////////////////////////////////////////////////
	edpo.textbutton2.setFont(coolvetica);
	edpo.textbutton2.setString("Back");
	edpo.textbutton2.setPosition(109.29, 226.26);
	edpo.textbutton2.setCharacterSize(41.6);
	////////////////////////////////////////////////
	edpo.phone.setFont(coolvetica);
	edpo.phone.setString("New phone:");
	edpo.phone.setPosition(413.68 - 50, 369.16);
	edpo.phone.setCharacterSize(49.72);
	////////////////////////////////////////////////
	edpo.phonepage.setFont(coolvetica);
	edpo.phonepage.setString("update phone page");
	edpo.phonepage.setPosition(516.33 - 30, 19.45 - 4);
	edpo.phonepage.setCharacterSize(63.4);




}

void settranspage(trans_page& trans, Texture sigintexinfun[])
{
	sigintexinfun[1].loadFromFile("photos/Rounded Rectangle 2.png");
	sigintexinfun[1].setSmooth(true);
	//////////////////////////////////////////////////////
	trans.b1.setTexture(sigintexinfun[1]);
	trans.b1.setPosition(113.34, 22);
	//////////////////////////////////////////////////////
	coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
	trans.bt1.setFont(coolvetica);
	trans.bt1.setString("Back");
	trans.bt1.setPosition(135.71, 25.11);
	trans.bt1.setCharacterSize(56);
	//////////////////////////////////////
	trans.transpage.setFont(coolvetica);
	trans.transpage.setString("transactins page");
	trans.transpage.setPosition(391.88, 8.71);
	trans.transpage.setCharacterSize(82);







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
		for (int i = 0; i < 2; i++)
		{
			input_text[i].setString(input[i]);
		}
		if (mouesRect.getGlobalBounds().intersects(l.button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			for (int i = 0; i < 2; i++)
			{
				if (input[i].empty())
				{
					input[i] = "0";
				}
			}
			input[0].resize(input[0].size() - 1);
			if (login(users, input[0], input[1], m))
			{
				return true;
			}
			for (int i = 0; i < 2; i++)
			{
				input[i].resize(0);
			}
			input_index = 0;
		}

		if (mouesRect.getGlobalBounds().intersects(l.button2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
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

			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space)
			{
				input[input_index].resize(input[input_index].size() - 1);
			}

			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
			{
				input_index++;
				input_index %= 2;
			}

			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter && input_index == 0)
			{
				for (int i = 0; i < 2; i++)
				{
					if (input[i].empty())
					{
						input[i] = "0";
					}
				}
				input[0].resize(input[0].size() - 1);
				input[1].resize(input[1].size() - 1);
				if (login(users, input[0], input[1], m))
				{

					return true;
				}
				else {
					for (int i = 0; i < 2; i++)
					{
						input[i].resize(0);
						input_text[i].setString("");
					}
				}

			}
			if (Keyboard::isKeyPressed(Keyboard::Backspace) && input[input_index].size() > 0)
			{
				input[input_index].resize(input[input_index].size() - 1);
			}
			////////////////////////////////////////////////////////////////////////////(welcome to bank)
			coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
			bank.setFont(coolvetica);
			bank.setString("welcom to Bank");
			bank.setPosition(380, -10);
			bank.setCharacterSize(100);
			bank.setFillColor(Color::White);
			////////////////////////////////////////
			windows.clear();
			windows.draw(background);
			drawheader(h, windows);
			drawlogin(l, windows);
			drawmassage(m, windows);
			windows.draw(bank);
			//windows.draw(mouesRect);
			for (int i = 0; i < 2; i++)
			{
				windows.draw(input_text[i]);
			}
			windows.display();
		}
	}
	return true;
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
		for (int i = 0; i < 5; i++)
		{
			input_text[i].setString(input[i]);
		}
		if (mouesRect.getGlobalBounds().intersects(s.button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
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

		if (mouesRect.getGlobalBounds().intersects(s.button2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
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
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space)
			{
				input[input_index].resize(input[input_index].size() - 1);
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
			{
				input_index++;
				input_index %= 5;
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

			if (input_index > -1) {
				if (input_index < 3)
				{
					if (Keyboard::isKeyPressed(Keyboard::Backspace) && input[input_index].size() > 0)
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
			}
		}
		////////////////////////////////////////////////////////////////////////////(welcome to bank)
		coolvetica.loadFromFile("photos/fonts/coolvetica/coolvetica rg.otf");
		bank.setFont(coolvetica);
		bank.setString("welcom to Bank");
		bank.setPosition(380, -10);
		bank.setCharacterSize(100);
		bank.setFillColor(Color::White);
		/////////////////////////////////
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawsign(s, windows);
		drawmassage(m, windows);
		windows.draw(bank);
		for (int i = 0; i < 5; i++)
		{
			windows.draw(input_text[i]);
		}

		windows.display();
	}
	return 0;
}

bool userpage(user users[], Sprite background, RenderWindow& windows, String& stringinfun)
{
	Text name;
	name.setFont(coolvetica);
	name.setPosition(700.8, 207.32);
	name.setCharacterSize(71);
	while (windows.isOpen())
	{
		name.setString(users[thisuser].useraccount.username);
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		if (mouesRect.getGlobalBounds().intersects(u_p.logout.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
		}
		if (mouesRect.getGlobalBounds().intersects(u_p.box1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "Deposit";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(u_p.box2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "Withdraw";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(u_p.box3.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "Send";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(u_p.box4.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "Loan";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(u_p.box5.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "Balance";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(u_p.box6.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "Details";
			return true;
		}
		Event event;
		while (windows.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				windows.close();
			}
		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		deawuserpage(u_p, windows);
		windows.draw(name);
		windows.display();
	}












	return false;
}

bool depositpage(user users[], Sprite background, RenderWindow& windows)
{
	string input;
	Text inputtext;
	inputtext.setPosition(624.29, 382.88 - 2.2);
	inputtext.setFont(coolvetica);
	inputtext.setCharacterSize(35);

	while (windows.isOpen())
	{
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputtext.setString(input);
		if (mouesRect.getGlobalBounds().intersects(d_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			if (input.empty())
			{
				input = "0";
			}
			if (transdeposite(users, stof(input), m))
			{
				return false;
			}
			input.resize(0);
		}
		if (mouesRect.getGlobalBounds().intersects(d_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
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
				if (isdigit(static_cast<char>(event.text.unicode)))
				{
					input += static_cast<char>(event.text.unicode);
				}
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
			{
				if (input.empty())
				{
					input = "0";
				}
				if (transdeposite(users, stof(input), m))
				{
					return false;
				}
				input.resize(0);
			}
			if (input.size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace)
			{
				input.resize(input.size() - 1);
			}
		}

		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawdepositpage(d_p, windows);
		windows.draw(inputtext);
		drawmassage(m, windows);
		windows.display();

	}
    return true;

}

bool withdrawpage(user users[], Sprite background, RenderWindow& windows)
{
	string input;
	Text inputtext;
	inputtext.setPosition(624.29, 382.88 - 2.2);
	inputtext.setFont(coolvetica);
	inputtext.setCharacterSize(35);
	while (windows.isOpen())
	{
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputtext.setString(input);
		if (mouesRect.getGlobalBounds().intersects(d_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			if (input.empty())
			{
				input = "999999999999999999";
			}
			if (transwithdraw(users, stof(input), m))
			{
				return false;
			}
			input.resize(0);
		}

		if (mouesRect.getGlobalBounds().intersects(d_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
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
				if (isdigit(static_cast<char>(event.text.unicode)))
				{
					input += static_cast<char>(event.text.unicode);
				}
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
			{
				if (input.empty())
				{
					input = "0";
				}
				if (transwithdraw(users, stof(input), m))
				{
					return false;
				}
				input.resize(0);
			}
			if (input.size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace)
			{
				input.resize(input.size() - 1);
			}
		}

		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawwithdrawpage(w_p, windows);
		windows.draw(inputtext);
		drawmassage(m, windows);
		windows.display();

	}
    return true;

}

bool loanpage(user users[], Sprite background, RenderWindow& windows)
{
	
	string input;
	Text inputtext;
	inputtext.setCharacterSize(35);
	inputtext.setPosition(624.29, 382.88 - 2.2);
	inputtext.setFont(coolvetica);
	while (windows.isOpen()) {
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputtext.setString(input);
		if (mouesRect.getGlobalBounds().intersects(l_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			return false;
		}
		if (mouesRect.getGlobalBounds().intersects(l_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			if (input.empty()) {
				input = "999999999999999999999999999";
			}
			if (translean(users, stof(input),m)) {
				return false;
			}
			input.resize(0);
		}
		Event event;
		while (windows.pollEvent(event)) {
			if (event.type == Event::Closed) {
				windows.close();
			}
			if (event.type == Event::TextEntered) {
				if (isdigit(static_cast<char> (event.text.unicode))) {
					input += static_cast<char> (event.text.unicode);
				}
			}
			if (event.type == Event::KeyReleased&&event.key.code==Keyboard::Enter) {
				if (input.empty()) {
					input = "0";
				}
				if (translean(users, stof(input),m )) {
					return false;
				}
				input.resize(0);
			}
			if (input.size()>0 &&event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace) {
				input.resize(input.size() - 1);
			}
			
		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawloanpage(l_p, windows);
		drawmassage(m, windows);
		windows.draw(inputtext);
		windows.display();
	}
	return true;
}

bool balancepage(user users[], Sprite background, RenderWindow& windows)
{
	Text inputtext;
	inputtext.setCharacterSize(94.12);
	inputtext.setPosition(591.44, 451.16);
	inputtext.setFont(coolvetica);
	while (windows.isOpen()) {
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputtext.setString(to_string((int)users[thisuser].ballans));
		if (mouesRect.getGlobalBounds().intersects(b_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			return false;
		}
		Event event;
		while (windows.pollEvent(event)) {
			if (event.type == Event::Closed) {
				windows.close();
			}


		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawbalancepage(b_p, windows);
		windows.draw(inputtext);
		windows.display();
	}


	return true;
}

bool sendpage(user users[], Sprite background, RenderWindow& windows)
{
	string input[2];
	Text inputtext[2];
	int inputindex = 0;
	for (int i = 0; i < 2; i++)
	{
		inputtext[i].setPosition(619, 341 + i * 88);
		inputtext[i].setFont(coolvetica);
		inputtext[i].setCharacterSize(22);
	}
	while (windows.isOpen())
	{
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		for (int i = 0; i < 2; i++)
		{
			inputtext[i].setString(input[i]);
		}
		if (mouesRect.getGlobalBounds().intersects(s_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
		}
		if (mouesRect.getGlobalBounds().intersects(s_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			if (input[0].empty())
			{
				input[0] = "141";
			}
			if (input[1].empty()) {
				input[1] = "99999999999999999999999";
			}
			//input[0].resize(input[0].size() - 1);
			cout << input[0] << endl;
			cout << input[1] << endl;
			if (transballans(users, stoi(input[0]), stof(input[1]), m))
			{
				return false;
			}
			inputindex = 0;
			for (int i = 0; i < 2; i++)
			{
				input[i].resize(0);
			}
			cout << thisuser << endl;
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
				if (isdigit(static_cast<char>(event.text.unicode)))
				{
					input[inputindex] += static_cast<char>(event.text.unicode);
				}
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
			{
				inputindex++;
				inputindex %= 2;
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter && inputindex == 0)
			{
				for (int i = 0; i < 2; i++)
				{
					if (input[i].empty())
					{
						input[i] = "0";
					}
				}
				if (transballans(users, stoi(input[0]), stof(input[1]), m))
				{
					return false;
				}
				for (int i = 0; i < 2; i++)
				{
					input[i].resize(0);
				}
				cout << thisuser << endl;
			}
			if (input[inputindex].size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::Backspace)
			{
				input[inputindex].resize(input[inputindex].size() - 1);
			}
		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawsendpage(s_p, windows);
		drawmassage(m, windows);
		for (int i = 0; i < 2; i++)
		{
			windows.draw(inputtext[i]);
		}
		windows.display();
	}











	return true;
}

bool detailspage(user users[], Sprite background, RenderWindow& windows, String& stringinfun)
{
	Text id;
	Text name;
	Text email;
	Text pass;
	Text phone;
	Text trans;
	id.setFont(coolvetica);
	id.setPosition(80.85 + 50, 213.84);
	id.setCharacterSize(55.83);
	///////////////////////////////////////////
	name.setFont(coolvetica);
	name.setPosition(80.85 + 150, 300.71);
	name.setCharacterSize(55.83);
	///////////////////////////////////////////
	email.setFont(coolvetica);
	email.setPosition(80.85 + 150, 383.33);
	email.setCharacterSize(55.83);
	///////////////////////////////////////////
	pass.setFont(coolvetica);
	pass.setPosition(80.85 + 250, 483.74);
	pass.setCharacterSize(55.83);
	///////////////////////////////////////////
	phone.setFont(coolvetica);
	phone.setPosition(80.85 + 150, 575.6);
	phone.setCharacterSize(55.83);
	///////////////////////////////////////////
	trans.setFont(coolvetica);
	trans.setPosition(503.8, 659.51);
	trans.setCharacterSize(52);
	while (windows.isOpen())
	{
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		id.setString(to_string(users[thisuser].acountNumber));
		name.setString(users[thisuser].useraccount.username);
		email.setString(users[thisuser].useraccount.email);
		pass.setString(users[thisuser].useraccount.paseword);
		phone.setString(users[thisuser].phone);
		trans.setString(to_string(users[thisuser].transactioncount));
		if (mouesRect.getGlobalBounds().intersects(de_p.boutton5.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
		}
		if (mouesRect.getGlobalBounds().intersects(de_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "name";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(de_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "email";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(de_p.boutton3.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "pass";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(de_p.boutton4.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "phone";
			return true;
		}
		if (mouesRect.getGlobalBounds().intersects(de_p.boutton6.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			stringinfun = "trans";
			return true;
		}
		Event event;
		while (windows.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				windows.close();
			}
		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawdetailspage(de_p, windows);
		///////////////////////////////////////////
		windows.draw(id);
		windows.draw(name);
		windows.draw(email);
		windows.draw(pass);
		windows.draw(phone);
		windows.draw(trans);
		//////////////////////////////////////////
		windows.display();
	}











	return true;
}

bool namepage(user users[], Sprite background, RenderWindow& windows)
{
	string input;
	Text inputtext;
	inputtext.setCharacterSize(35);
	inputtext.setPosition(624.29, 382.88 - 2.2);
	inputtext.setFont(coolvetica);
	while (windows.isOpen()) {
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputtext.setString(input);
		if (mouesRect.getGlobalBounds().intersects(en_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			return false;
		}
		if (mouesRect.getGlobalBounds().intersects(en_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			if (input.empty()) {
				input = "0";
			}
			if (upname(users,input)) {
				return false;
			}
			input.resize(0);
		}
		Event event;
		while (windows.pollEvent(event)) {
			if (event.type == Event::Closed) {
				windows.close();
			}
			if (event.type == Event::TextEntered) {
				
					input += static_cast<char> (event.text.unicode);
			}
			
			if (input.size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace) {
				input.resize(input.size() - 1);
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter) {
				if (input.empty()) {
					input = "0";
				}
				if (upname(users, input)) {
					return false;
				}
				input.resize(0);
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space) {
				input.resize(input.size() - 1);
			}
		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawednamepage(en_p, windows);
		windows.draw(inputtext);
		windows.display();
	}
	return true;
}

bool emailpage(user users[], Sprite background, RenderWindow& windows)
{
	string input;
	Text inputetext;
	inputetext.setPosition(624.29, 382.88 - 2.2);
	inputetext.setCharacterSize(35);
	inputetext.setFont(coolvetica);
	while (windows.isOpen()) {

		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputetext.setString(input);

		if (mouesRect.getGlobalBounds().intersects(ee_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
		
			return false;
		}
		if(mouesRect.getGlobalBounds().intersects(ee_p.boutton1.getGlobalBounds())&&Mouse::isButtonPressed(Mouse::Left)){
			if (input.empty()) {
				input = '0';
			}
			if (upemail(users, input,m)) {
				return false;
			}

			
			input.resize(0);
		
		
		}

        Event event;
		while (windows.pollEvent(event)) {
			if (event.type == Event::Closed) {
				windows.close();
			} if (event.type == Event::TextEntered) {
				input+= static_cast<char>(event.text.unicode);
			}
			if (input.size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace) {
				input.resize(input.size() - 1);
			}


			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter) {
				if (input.empty()) {
					input = '0';
				}
				input.resize(input.size() - 1);
				if (upemail(users, input, m)) {
					return false;
				}

					input.resize(0);
				
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space)
			{
				input.resize(input.size() - 1);
			}



		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawemailpage(ee_p, windows);
	    windows.draw(inputetext);
		drawmassage(m, windows);
		windows.display();

	}

	return true;

}

bool passpage(user users[], Sprite background, RenderWindow& windows)
{
	string input;
		Text inputetext;
		inputetext.setPosition(624.29, 382.88 - 2.2);
		inputetext.setCharacterSize(35);
		inputetext.setFont(coolvetica);
		
	while (windows.isOpen()) {

		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputetext.setString(input);
		if (mouesRect.getGlobalBounds().intersects(es_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {


			return false;
		}
		if (mouesRect.getGlobalBounds().intersects(es_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			if (input.empty()) {
				input = "0";
			}if (uppass(users,input)) {
				return false;
			}
			input.resize(0);

		}

		Event event;
		while (windows.pollEvent(event)) {
			if (event.type == Event::Closed) {
				windows.close();
			} if (event.type == Event::TextEntered) {
				input += static_cast<char>(event.text.unicode);
			} 
			if (input.size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace) {
				input.resize(input.size() - 1);
			}


			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter) {
				if (input.empty()) {
					input = "0";
				}
				input.resize(input.size() - 1);

				if (uppass(users,input)) {
					return false;
				}
				
				input.resize(0);
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space)
			{
				input.resize(input.size() - 1);
			}



		}

		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawpasspage(es_p, windows);
		windows.draw(inputetext);
		windows.display();

	}


	return true;
}

bool phonepage(user users[], Sprite background, RenderWindow& windows)
{
	string input;
	Text inputtext;
	inputtext.setCharacterSize(35);
	inputtext.setPosition(624.29, 382.88 - 2.2);
	inputtext.setFont(coolvetica);
	while (windows.isOpen()) {
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		inputtext.setString(input);
		if (mouesRect.getGlobalBounds().intersects(ep_p.boutton2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			return false;
		}
		if (mouesRect.getGlobalBounds().intersects(ep_p.boutton1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left)) {
			if (input.empty()) {
				input = "0";
			}
			if (upphone(users, input)) {
				return false;
			}
			input.resize(0);
		}
		Event event;
		while (windows.pollEvent(event)) {
			if (event.type == Event::Closed) {
				windows.close();
			}
			if (event.type == Event::TextEntered) {

				if (isdigit(static_cast<char> (event.text.unicode))) {
					input += static_cast<char> (event.text.unicode);

				}
			


			}

			if (input.size() > 0 && event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace) {
				input.resize(input.size() - 1);
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter) {
				if (input.empty()) {
					input = "0";
				}
				input.resize(input.size() - 1);

				if (upphone(users, input)) {
					return false;
				}
				input.resize(0);
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space)
			{
				input.resize(input.size() - 1);
			}
			
		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawphonepage(ep_p, windows);
		windows.draw(inputtext);
		windows.display();
	}
	return true;
}





bool transpage(user users[], Sprite background, RenderWindow& windows)
{
	Text recpient[5];
	Text type[5];
	Text amount[5];
	for (int i = 0; i < 5; i++)
	{
		recpient[i].setPosition(72.04, 221.27 + i * 120);
		recpient[i].setFont(coolvetica);
		recpient[i].setCharacterSize(56);
		//////////////////////////////////////////////////
		type[i].setPosition(575.44, 234 + i * 108);
		type[i].setFont(coolvetica);
		type[i].setCharacterSize(56);
		///////////////////////////////////////////////////
		amount[i].setPosition(1065.81, 234 + i * 108);
		amount[i].setFont(coolvetica);
		amount[i].setCharacterSize(56);
	}
	while (windows.isOpen())
	{
		mouesRect.setPosition(ms.getPosition().x - 10, ms.getPosition().y);
		int indx;
		int indxarrtext = 4;
		indx = users[thisuser].transactioncount - 1;
		if (users[thisuser].transactioncount <= 5) {
			for (int i = indx; i >= 0; i--)
			{
				recpient[i].setString(users[thisuser].usertransactions[i].recpient);
				type[i].setString(users[thisuser].usertransactions[i].typetransaction);
				amount[i].setString(to_string(int(users[thisuser].usertransactions[i].transactionamount)));


			}
		}
		if (users[thisuser].transactioncount > 5) {
			for (int i = indx; i >= (users[thisuser].transactioncount - 5); i--)
			{
				recpient[indxarrtext].setString(users[thisuser].usertransactions[i].recpient);
				type[indxarrtext].setString(users[thisuser].usertransactions[i].typetransaction);
				amount[indxarrtext].setString(to_string(int(users[thisuser].usertransactions[i].transactionamount)));


				indxarrtext--;
			}

		}
		if (mouesRect.getGlobalBounds().intersects(tr_p.b1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
		{
			return false;
		}
		Event event;
		while (windows.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				windows.close();
			}
		}
		windows.clear();
		windows.draw(background);
		drawheader(h, windows);
		drawtranspage(tr_p, windows);
		for (int i = 4; i >= 0; i--)
		{
			windows.draw(recpient[i]);
			windows.draw(type[i]);
			windows.draw(amount[i]);

		}

		windows.display();
	}














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
	thatwindow.draw(signininfun.value1);
	thatwindow.draw(signininfun.value2);
	thatwindow.draw(signininfun.value3);
	thatwindow.draw(signininfun.value4);
	thatwindow.draw(signininfun.value5);
	thatwindow.draw(signininfun.button1);
	thatwindow.draw(signininfun.button2);
	thatwindow.draw(signininfun.nametext);
	thatwindow.draw(signininfun.emailtext);
	thatwindow.draw(signininfun.passtext);
	thatwindow.draw(signininfun.balunstext);
	thatwindow.draw(signininfun.numbertext);
	thatwindow.draw(signininfun.inbutton1);
	thatwindow.draw(signininfun.inbutton2);
	thatwindow.draw(signininfun.mase);







}

void drawlogin(logins& loginfun, RenderWindow& thatwindow)
{
	thatwindow.draw(loginfun.value1);
	thatwindow.draw(loginfun.value2);
	thatwindow.draw(loginfun.button1);
	thatwindow.draw(loginfun.button2);
	thatwindow.draw(loginfun.emailtext);
	thatwindow.draw(loginfun.passtext);
	thatwindow.draw(loginfun.inbutton1);
	thatwindow.draw(loginfun.inbutton2);
	thatwindow.draw(loginfun.mase);








}

void deawuserpage(user_page& user, RenderWindow& thatwindow)
{
	thatwindow.draw(user.box1);
	thatwindow.draw(user.box2);
	thatwindow.draw(user.box3);
	thatwindow.draw(user.box4);
	thatwindow.draw(user.box5);
	thatwindow.draw(user.box6);
	thatwindow.draw(user.logout);
	thatwindow.draw(user.deposit);
	thatwindow.draw(user.withdraw);
	thatwindow.draw(user.send);
	thatwindow.draw(user.loan);
	thatwindow.draw(user.balanse);
	thatwindow.draw(user.details);
	thatwindow.draw(user.userpage);
	thatwindow.draw(user.hello);
	thatwindow.draw(user.telogout);
	thatwindow.draw(user.name);











}

void drawdepositpage(deposit_page& depo, RenderWindow& thatwindow)
{
	thatwindow.draw(depo.value1);
	thatwindow.draw(depo.boutton1);
	thatwindow.draw(depo.boutton2);
	thatwindow.draw(depo.textbutton1);
	thatwindow.draw(depo.textbutton2);
	thatwindow.draw(depo.deposit);
	thatwindow.draw(depo.masse);
	thatwindow.draw(depo.depositpage);
	
}

void drawwithdrawpage(withdraw_page& with, RenderWindow& thatwindow)
{
	thatwindow.draw(with.value1);
	thatwindow.draw(with.boutton1);
	thatwindow.draw(with.boutton2);
	thatwindow.draw(with.textbutton1);
	thatwindow.draw(with.textbutton2);
	thatwindow.draw(with.withdraw);
	thatwindow.draw(with.masse);
	thatwindow.draw(with.withdrawpage);

}

void drawloanpage(loan_page& lo, RenderWindow& thatwindow)
{
	thatwindow.draw(lo.value1);
	thatwindow.draw(lo.boutton1);
	thatwindow.draw(lo.boutton2);
	thatwindow.draw(lo.textbutton1);
	thatwindow.draw(lo.textbutton2);
	thatwindow.draw(lo.loan);
	thatwindow.draw(lo.masse);
	thatwindow.draw(lo.loanpage);


}

void drawbalancepage(balance_page& bl, RenderWindow& thatwindow)
{

	thatwindow.draw(bl.boutton1);
	thatwindow.draw(bl.textbutton1);
	thatwindow.draw(bl.balance);
	thatwindow.draw(bl.masse);
	thatwindow.draw(bl.balancepage);



}

void drawsendpage(send_page& send, RenderWindow& thatwindow)
{
	thatwindow.draw(send.value1);
	thatwindow.draw(send.value2);
	thatwindow.draw(send.boutton1);
	thatwindow.draw(send.boutton2);
	thatwindow.draw(send.textbutton1);
	thatwindow.draw(send.textbutton2);
	thatwindow.draw(send.send1);
	thatwindow.draw(send.send2);
	thatwindow.draw(send.masse);
	thatwindow.draw(send.sendpage);







}

void drawdetailspage(details_page& det, RenderWindow& thatwindow)
{
	thatwindow.draw(det.boutton1);
	thatwindow.draw(det.boutton2);
	thatwindow.draw(det.boutton3);
	thatwindow.draw(det.boutton4);
	thatwindow.draw(det.boutton5);
	thatwindow.draw(det.boutton6);
	thatwindow.draw(det.textbutton1);
	thatwindow.draw(det.textbutton2);
	thatwindow.draw(det.textbutton3);
	thatwindow.draw(det.textbutton4);
	thatwindow.draw(det.textbutton5);
	thatwindow.draw(det.textbutton6);
	thatwindow.draw(det.idmss);
	thatwindow.draw(det.namemss);
	thatwindow.draw(det.emailmss);
	thatwindow.draw(det.passmss);
	thatwindow.draw(det.phonemss);
	thatwindow.draw(det.trans);
	thatwindow.draw(det.id);
	thatwindow.draw(det.name);
	thatwindow.draw(det.email);
	thatwindow.draw(det.pass);
	thatwindow.draw(det.phone);
	thatwindow.draw(det.detilspage);







}

void drawednamepage(edname_page& edn, RenderWindow& thatwindow)
{
	thatwindow.draw(edn.value1);
	thatwindow.draw(edn.boutton1);
	thatwindow.draw(edn.boutton2);
	thatwindow.draw(edn.textbutton1);
	thatwindow.draw(edn.textbutton2);
	thatwindow.draw(edn.name);
	thatwindow.draw(edn.namepage);
}

void drawemailpage(edemail_page& ede, RenderWindow& thatwindow)
{

	thatwindow.draw(ede.value1);
	thatwindow.draw(ede.boutton1); 
	thatwindow.draw(ede.boutton2);
	thatwindow.draw(ede.textbutton1);
	thatwindow.draw(ede.textbutton2);
	thatwindow.draw(ede.email);
	thatwindow.draw(ede.emailpage);



}

void drawpasspage(edpass_page& edps, RenderWindow& thatwindow)
{

	thatwindow.draw(edps.value1);
	thatwindow.draw(edps.boutton1);
	thatwindow.draw(edps.boutton2);
	thatwindow.draw(edps.textbutton1);
	thatwindow.draw(edps.textbutton2);
	thatwindow.draw(edps.pass);
	thatwindow.draw(edps.passpage);



}

void drawphonepage(edphone_page& edpo, RenderWindow& thatwindow)
{
	thatwindow.draw(edpo.value1);
	thatwindow.draw(edpo.boutton1);
	thatwindow.draw(edpo.boutton2);
	thatwindow.draw(edpo.textbutton1);
	thatwindow.draw(edpo.textbutton2);
	thatwindow.draw(edpo.phone);
	thatwindow.draw(edpo.phonepage);








}

void drawmassage(massage& m, RenderWindow& thatwindow)
{
	thatwindow.draw(m.failer);
}

void drawtranspage(trans_page trans, RenderWindow& thatwindow)
{
	thatwindow.draw(trans.b1);
	thatwindow.draw(trans.bt1);
	thatwindow.draw(trans.transpage);






}


