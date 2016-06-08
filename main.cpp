

#include <lvp\gui_top.h>
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
	SetThickness(10);
	Rectangle(GetMaxX()/2+317, GetMaxY()/2-200, 1350, 10);//Right Side Handle
	Rectangle(GetMaxX()/2+274, GetMaxY()/2-200, 1275, 10);	//Left Side Handle
	Rectangle(GetMaxX()/2+317, GetMaxY()/2-215, 1250, 10);//Middle Handle
	SetThickness(5);
	SetFillColor(GRAY); //BriefCase
	FilledRectangle(GetMaxX()/2+500, GetMaxY()/2-300, 1400, 30);
	Rectangle(GetMaxX()/2+500, GetMaxY()/2-300, 1400, 30);
}
//--------------------------------------------------------------------------------
#include <lvp\gui_bot.h>
