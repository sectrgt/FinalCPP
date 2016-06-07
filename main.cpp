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
	return "Title of OutPut Screen";
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


/* Implements a button which can be clicked on
            Modified to add default constructor! */
 

class ButtonClass {
            public:
            ButtonClass(String Text, int X1,int Y1, int X2, int Y2);
            /* Creates a button with upper left corner at X1,Y1 and lower
            right corner at X2,Y2 with Text centered in box */
            ButtonClass();
            void SetButton(String Text, int X1,int Y1, int X2, int Y2);
            void Paint();
            bool IsHit(int x, int y);
            /* Returns true if and only if (x,y) is on the button */
            private:
                        int MyX1, MyY1, MyX2, MyY2;
                        String MyText;
            };
//-------------------------------------------------------------------
ButtonClass::ButtonClass()
{}
//-------------------------------------------------------------------
ButtonClass::ButtonClass(String Text, int X1,int Y1, int X2, int Y2):
            MyText(Text), MyX1(X1), MyY1(Y1), MyX2(X2), MyY2(Y2)
/* Creates a button with upper left corner at X1,Y1 and lower
            right corner at X2,Y2 with Text centered in box */
{}
//-------------------------------------------------------------------
void ButtonClass::SetButton(String Text, int X1,int Y1, int X2, int Y2)
/* Sets button with upper left corner at X1,Y1 and lower
            right corner at X2,Y2 with Text centered in box */
{
            MyText = Text;
            MyX1 = X1;
            MyY1 = Y1;
            MyX2 = X2;
            MyY2 = Y2;
}
//-------------------------------------------------------------------
void ButtonClass::Paint()
{
            SetColor(BLACK);
   SetThickness(2);
            Rectangle(MyX1,MyY1,MyX2,MyY2);
            gotoxy((MyX1+MyX2)/2, 5+(MyY1+MyY2)/2);
            DrawCenteredText(MyText);
}
//-------------------------------------------------------------------
bool ButtonClass::IsHit(int x, int y)
/* Returns true if and only if point (x,y) is on the button */
{
            return (x >= MyX1 && x <= MyX2 && y >= MyY1 && y <= MyY2);
}
//-------------------------------------------------------------------
//-------------------------------------------------------------------
//-------------------------------------------------------------------



class BriefcaseClass
{
	public:
		DrawCase();//Main function
		SetMoney();


	private:
		int box;
		double money;
		String model;

};
