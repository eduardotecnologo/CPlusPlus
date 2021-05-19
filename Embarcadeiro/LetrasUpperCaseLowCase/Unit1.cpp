//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
bool keyb = 0;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnSairClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnVerificarClick(TObject *Sender)
{
	 keyb = 0;
	 String letra = EditLetra->Text;

	 char c = letra[1];
	 switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			 ShowMessage("Voc� digitou uma letra Minuscula!!");
			 break;

		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			 ShowMessage("Voc� digitou uma letra Mai�scula!!");
			 break;
	 default:
			 ShowMessage("Voc� n�o digitou uma letra!!")
		;
	 }

	 EditLetra->Text = "";
	 EditLetra->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditLetraKeyPress(TObject *Sender, System::WideChar &Key)

{
if (keyb == 1) {
	   Key = 0;
	}
	keyb = 1;
}
//---------------------------------------------------------------------------

