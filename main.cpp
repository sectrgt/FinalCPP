//xboxdude41
//austinnonos
#include <iostream.h>
#include <lvp\string.h>
/* GUI main class
 Must create a Win 32 Application */

#include <lvp\gui_top.h>

class GuiClass 
{
	public:
	GuiClass();
	void GuiMouseClick(int x, int y); // Action if mouse click
	void GuiPaint();  // Repaint the entire window
	String Title(); // Return the title for the Window
	private:
};
//--------------------------------------------------------------------------------
GuiClass::GuiClass()
{
}
//--------------------------------------------------------------------------------
String GuiClass::Title()
{
	return "Deal or No Deal";
}
//--------------------------------------------------------------------------------
void GuiClass::GuiMouseClick(int x, int y)
{
}
//--------------------------------------------------------------------------------
void GuiClass::GuiPaint()
{
	
}
//--------------------------------------------------------------------------------
#include <lvp\gui_bot.h>


//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#include <lvp\vector.h>

class PanelClass
{
	public:
		DisplayPanel(int lr, double value, int ystart, int xstart);
		DelPanel(int ystart, int xstart);
	private: 
};
PanelClass::DisplayPanel(int lr, double value, int ystart, int xstart)//panel display function
{
	int set;
	if (lr = 0)
		set = 1;
	else if (lr = 1)
		set = -1;
	FilledRectangle(xstart,ystart,xstart+200,ystart+200);
	gotoxy(xstart/2,ystart/2);
	DrawText(value);

}
PanelClass::DelPanel(int ystart, int xstart)//delete panel function
{
	gotoxy(xstart/2,ystart/2);
	DrawText("");	
}
//-------------------------------TEMP
class BriefcaseClass
{
	public:
		BriefcaseClass();
		Paint(int startx, int starty);//Draws briefcases
		bool IsHit(int x, int y);
	private:
		String Model;
		int bcNumber;
		double money;
		int MyX1, MyY1, MyX2, MyY2;
	
};
BriefcaseClass::Paint(int startX, int startY)
{
	SetThickness(10);//Handle
	SetColor(BLACK);
	Rectangle(startX+50,startY+10, startX + 100, startY -25);
	SetThickness(2);//BriefCase
	SetFillColor(GRAY); 
	FilledRectangle(startX,startY, startX +150, startY +100);
}
bool BriefcaseClass::IsHit(int x, int y)
/* Returns true if and only if point (x,y) is on the button */
{
            return (x >= MyX1 && x <= MyX2 && y >= MyY1 && y <= MyY2);
}
//-------------------------------------------------------------------
//-------------------------------------------------------------------
//-------------------------------------------------------------------
double BankAver(double total, int count)
{
	return(total/count);
}

class GameplayClass
{
	public:
		GameplayClass();
		void displayBriefcase();
		void displayPanels();
		void SetModel();
		void SetMoney();
	private:
		vector<String>model;
		vector<double>money;
};

GameplayClass::GameplayClass()
:model(26), money(26)
{
	//set models in vector
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
//set money in vector
	money[0] = .01;
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
}

/*void GameplayClass::addBriefcaseValues()
{
	vector<Cases> Briefcase(26)
	
	Briefcase[1]
}*/
void GameplayClass::displayBriefcase()
{
	Paint(300, 300);
	Paint(300,500);
	Paint(300,700);
	Paint(300,1100);
	Paint(300,900);
	Paint(300,1300);
	Paint(500,300);
	Paint(500,500);
	Paint(500,700);
	Paint(500,900);
	Paint(500,1100);

}
void GameplayClass::displayPanels()
{

}
