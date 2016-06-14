//xboxdude41
//austinnonos
#include <lvp\string.h>
#include <lvp\vector.h>
#include <lvp\gui_top.h>
#include <lvp\random.h>
#include <lvp\vector.h>

class PanelClass
{
	public:
		PanelClass();
		PanelClass(int mon, int x, int y);
		void DisplayPanelOn();
		void DisplayPanelOff();
		void DelPanel();
		int GetMon();
		bool IsDel();
	private: 
		bool del;
		int mon, x, y;
};

PanelClass::PanelClass()
:mon(0), x(0), y(0), del(true)
{
}

PanelClass::PanelClass(int amon, int ax, int ay)
:mon(amon), x(ax), y(ay), del(false)
{
}

void PanelClass::DisplayPanelOn() //panel display function
{
	SetFillColor(YELLOW);
	FilledRectangle(x, y, x + 100, y + 30);
	gotoxy(x + 50, y + 15);
	DrawCenteredText(mon);
}

void PanelClass::DisplayPanelOff() //panel display function
{
	SetFillColor(RED);
	FilledRectangle(x, y, x + 100, y + 30);
	gotoxy(x + 50, y + 15);
	DrawCenteredText(mon);
}

void PanelClass::DelPanel()//delete panel function
{
	del = true;
}

int PanelClass::GetMon()
{
	return mon;
}

bool PanelClass::IsDel()
{
	return del;
}

class BriefcaseClass
{
	public:
		BriefcaseClass();
		BriefcaseClass(int num, int mon, int x, int y, String mod);
		void Draw();
		bool IsHit(int x, int y);
		bool isopen();
		void opena();
		int GetMon();
	private:
		int num, mon, x, y;
		String mod;
		bool open;
};

BriefcaseClass::BriefcaseClass()
:num(0), mon(0), x(0), y(0), mod(""), open(true)
{
}

BriefcaseClass::BriefcaseClass(int anum, int amon, int ax, int ay, String amod)
:num(anum), mon(amon), x(ax), y(ay), mod(amod), open(false)
{
}

void BriefcaseClass::Draw()
{
	SetThickness(10);//Handle
	SetColor(BLACK);
	Rectangle(x + 50, y + 10, x + 100, y -25);
	SetThickness(2);//BriefCase
	SetFillColor(GRAY); 
	FilledRectangle(x, y, x + 150, y + 100);
	gotoxy(x + 80, y + 30);
	DrawCenteredText(num);
	gotoxy(x + 80, y + 60);
	DrawCenteredText(mod);
}

bool BriefcaseClass::IsHit(int x_, int y_)
/* Returns true if and only if point (x,y) is on the button */
{
	if (x_ >= x && x_ <= x + 150 && y_ >= y && y_ <= y + 100)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool BriefcaseClass::isopen()
{
	return open;
}

void BriefcaseClass::opena()
{
	SetThickness(10);//Handle
	SetColor(BLACK);
	Rectangle(x + 50, y + 10, x + 100, y -25);
	SetThickness(2);//BriefCase
	SetFillColor(BLACK); 
	FilledRectangle(x, y, x + 150, y + 100);
	gotoxy(x + 80, y + 30);
	DrawCenteredText(mon);
	open = true;
}

int BriefcaseClass::GetMon()
{
	return mon;
}

class GameplayClass
{
	public:
		GameplayClass();
		void displayBriefcase();
		void displayPanels();
		void draw(int x, int y);
	private:
		vector<PanelClass> panels;
		vector<BriefcaseClass> cases;
};

GameplayClass::GameplayClass()
{
	vector<String> model(26);
	vector<int> money(26, 0);
	vector<int> cmoney(26);
	vector<PanelClass> p(26);
	vector<BriefcaseClass> t(26);
	int panx = 10, pany = 10, casex = 400, casey = 60, ran;
	model[0] = "Lily Aldridge";
	model[1] = "Alessandra Ambrosio";
	model[2] = "Tyra Banks";
	model[3] = "Gisele Bündchen";
	model[4] = "Laetitia Casta";
	model[5] = "Helena Christensen";
	model[6] = "Selita Ebanks";
	model[7] = "Lindsay Ellingson";
	model[8] = "Izabel Goulart";
	model[9] = "Kate Grigorieva";
	model[10] = "Erin Heatherton";
	model[11] = "Taylor Marie Hill";
	model[12] = "Elsa Hosk";
	model[13] = "Martha Hunt";
	model[14] = "Chanel Iman";
	model[15] = "Jac Jagaciak";
	model[16] = "Miranda Kerr";
	model[17] = "Karlie Kloss";
	model[18] = "Heidi Klum";
	model[19] = "Doutzen Kroes";
	model[20] = "Adriana Lima";
	model[21] = "Stella Maxwell";
	model[22] = "Marisa Miller";
	model[23] = "Karen Mulder";
	model[24] = "Chandra North";
	model[25] = "Stephanie Seymour";
	money[0] = 0;
	money[1] = 1;
	money[2] = 5;
	money[3] = 10;
	money[4] = 25;
	money[5] = 50;
	money[6] = 75;
	money[7] = 100;
	money[8] = 200;
	money[9] = 300;
	money[10] = 400;
	money[11] = 500;
	money[12] = 750;
	money[13] = 1000;
	money[14] = 5000;
	money[15] = 10000;
	money[16] = 25000;
	money[17] = 50000;
	money[18] = 75000;
	money[19] = 100000;
	money[20] = 200000;
	money[21] = 300000;
	money[22] = 400000;
	money[23] = 500000;
	money[24] = 750000;
	money[25] = 1000000;
	for (int i = 0; i < p.length() - 1; i++)
	{
		p[i] = PanelClass(money[i], panx, pany);
		pany += 35;
	}
	panels = p;
	for (i = 0; i < 26; i++)
	{
		do
		{
			ran = random(26);
			if (money[ran] != -1)
			{
				cmoney[i] = money[ran];
				money[ran] = -1;
			}
		}
		while(cmoney[i] == 0);
	}
	for (i = 0; i < t.length() - 1; i++)
	{
		t[i] = BriefcaseClass(i + 1, cmoney[i], casex, casey, model[i]);
		casex += 200;
		if (casex > 1250)
		{
			casex = 400;
			casey += 130;
		}
	}
	cases = t;
}

void GameplayClass::displayBriefcase()
{
	for(int i = 0; i < cases.length() - 1; i++)
	{
		if(!cases[i].isopen())
		{
			cases[i].Draw();
		}
	}
}

void GameplayClass::displayPanels()
{
	for (int i = 0; i < panels.length() - 1; i++)
	{
		if (!panels[i].IsDel())
		{
			panels[i].DisplayPanelOn();
		}
		else
		{
			panels[i].DisplayPanelOff();
		}
	}
}

void GameplayClass::draw(int x, int y)
{
	displayBriefcase();
	displayPanels();
	for (int i = 0; i < cases.length() - 1; i++)
	{
		if(cases[i].IsHit(x, y))
		{
			cases[i].opena();
			for (int j = 0; j < panels.length() - 1; j++)
			{
				if (cases[i].GetMon() == panels[j].GetMon())
				{
					panels[j].DelPanel();
				}
			}
		}
	}
}

class GuiClass 
{
	public:
		GuiClass();
		void GuiMouseClick(int x, int y); 
		void GuiPaint();  
		String Title(); 
	private:
		GameplayClass game;
		int x, y;
};

GuiClass::GuiClass()
:game()
{
}

String GuiClass::Title()
{
	return "Deal or No Deal";
}

void GuiClass::GuiMouseClick(int x_, int y_)
{
	x = x_;
	y = y_;
}

void GuiClass::GuiPaint()
{
	game.draw(x, y);
}

#include <lvp\gui_bot.h>
