//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        Panel1->Left=Form1->ClientHeight;
        Panel1->Top=0;
        Panel1->Height=Form1->ClientHeight;
        Button2->Enabled=false;
        Button4->Enabled=false;
        Timer1->Enabled=false;
        Timer2->Enabled=false;
        x=0;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(OpenDialog1->Execute())
            {
                if (FileExists(OpenDialog1->FileName))
     {
        TStringList *lista = new TStringList();
        lista->LoadFromFile(OpenDialog1->FileName);
        int poz, dl, i=0;
        AnsiString napis;
        while (i < lista->Count)
        {
           poz = lista->Strings[i].Pos(":");
           dl = lista->Strings[i].Length();
           napis = lista->Strings[i].SubString(1, poz - 1);
           ListBox1->Items->Add(napis);
           napis = lista->Strings[i].SubString(poz + 1, dl - poz);

           ListBox2->Items->Add(napis);

           i++;
        }
        delete lista;
     }

     for(int i=0;i<10;i++)
     {
        slupek[i]=new TShape(this);
        slupek[i]->Parent=this;
        slupek[i]->Width=50;
        slupek[i]->Height=300;
        slupek[i]->Left=slupek[i]->Width*1.1 *(i%10)+10;
        slupek[i]->Top=500;
        slupek[i]->Shape=stRectangle;
        slupek[i]->Brush->Color=clRed;

     }

     for(int i=0;i<10;i++)
     {
        cena[i]=new TLabel(this);
        cena[i]->Parent=this;
        cena[i]->Left=slupek[i]->Width*1.1 *(i%10)+10;
        cena[i]->Caption="text";
        cena[i]->Top=500;
     }


            }

            Button2->Enabled=true;
        Button4->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::kolorClick(TObject *Sender)
{
        if(ColorDialog1->Execute())
                for(int i=0;i<10;i++)
                slupek[i]->Brush->Color=ColorDialog1->Color;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        if(ColorDialog2->Execute())
                for(int i=0;i<10;i++)
                cena[i]->Font->Color=ColorDialog2->Color;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Timer1->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
       /* for(int i=0;i<10;i++)
         {  slupek[i]->Shape=stRectangle;
        slupek[i]->Brush->Color=clWhite;

         }
         */


        for(int i=0;i<10;i++)
         {

        slupek[i]->Width=50;
        slupek[i]->Height=300-x;
        slupek[i]->Left=slupek[i]->Width*1.1 *(i%10)+10-x;
        slupek[i]->Top=500;
        cena[i]->Left=slupek[i]->Width*1.1 *(i%10)+10-x;
         }
         x++;
         if(x==1000)
                Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        Timer2->Enabled=true;
                
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
          for(int i=0;i<10;i++)
         {
        slupek[i]->Width=50;
        slupek[i]->Height=300+x;
        slupek[i]->Left=slupek[i]->Width*1.1 *(i%10)+10+x;
        slupek[i]->Top=500;
        cena[i]->Left=slupek[i]->Width*1.1 *(i%10)+10+x;
         }
         x++;
         if(x==1000)
                Timer2->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
               Timer1->Enabled=false;
               Timer2->Enabled=false;
}
//---------------------------------------------------------------------------

