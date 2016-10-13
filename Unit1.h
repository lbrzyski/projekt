//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TColorDialog *ColorDialog1;
        TLabel *Label1;
        TListBox *ListBox1;
        TButton *Button1;
        TLabel *Label2;
        TButton *kolor;
        TButton *Button3;
        TOpenDialog *OpenDialog1;
        TListBox *ListBox2;
        TColorDialog *ColorDialog2;
        TButton *Button2;
        TButton *Button4;
        TTimer *Timer1;
        TTimer *Timer2;
        TButton *Button5;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall kolorClick(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
private:
        TShape *slupek[10];
        TLabel *cena[10];
        int x,y;// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
