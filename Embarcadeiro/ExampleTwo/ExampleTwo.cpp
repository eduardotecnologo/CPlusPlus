//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ExampleTwo.h"
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
void __fastcall TForm1::BtnSomaClick(TObject *Sender)
{
	int result;
	result = EditValue01->Text.ToInt() + EditValue02->Text.ToInt();
	EditResult->Text = IntToStr(result);

    ShowMessage("Resultado: " + IntToStr(result));

}
//---------------------------------------------------------------------------
