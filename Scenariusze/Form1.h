#pragma once
#include "stdafx.h"
#include "Nuda.h"
#include "MyForm.h"

namespace Scenariusze {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  zdjecietlo;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  bWybierzSztuke;
	private: System::Windows::Forms::Button^  bDodajScenariusz;
	private: System::Windows::Forms::Button^  bDodajScenariusz2;
	private: System::Windows::Forms::Button^  bZapiszScenariusz;
	private: System::Windows::Forms::TextBox^  tekst;
	public: System::Windows::Forms::ListBox^  listaScenariuszy;
	private:

	private: System::Windows::Forms::Button^  bPowrot;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::Windows::Forms::Button^  bNuda;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->zdjecietlo = (gcnew System::Windows::Forms::PictureBox());
			this->bWybierzSztuke = (gcnew System::Windows::Forms::Button());
			this->bDodajScenariusz = (gcnew System::Windows::Forms::Button());
			this->bDodajScenariusz2 = (gcnew System::Windows::Forms::Button());
			this->bZapiszScenariusz = (gcnew System::Windows::Forms::Button());
			this->tekst = (gcnew System::Windows::Forms::TextBox());
			this->listaScenariuszy = (gcnew System::Windows::Forms::ListBox());
			this->bPowrot = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->bNuda = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjecietlo))->BeginInit();
			this->SuspendLayout();
			// 
			// zdjecietlo
			// 
			this->zdjecietlo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjecietlo.Image")));
			this->zdjecietlo->Location = System::Drawing::Point(-48, -3);
			this->zdjecietlo->Name = L"zdjecietlo";
			this->zdjecietlo->Size = System::Drawing::Size(948, 581);
			this->zdjecietlo->TabIndex = 0;
			this->zdjecietlo->TabStop = false;
			// 
			// bWybierzSztuke
			// 
			this->bWybierzSztuke->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bWybierzSztuke->Location = System::Drawing::Point(300, 242);
			this->bWybierzSztuke->Name = L"bWybierzSztuke";
			this->bWybierzSztuke->Size = System::Drawing::Size(300, 75);
			this->bWybierzSztuke->TabIndex = 1;
			this->bWybierzSztuke->Text = L"Wybierz Sztukê";
			this->bWybierzSztuke->UseVisualStyleBackColor = true;
			this->bWybierzSztuke->Click += gcnew System::EventHandler(this, &Form1::bWybierzSztuke_Click);
			// 
			// bDodajScenariusz
			// 
			this->bDodajScenariusz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->bDodajScenariusz->Location = System::Drawing::Point(300, 354);
			this->bDodajScenariusz->Name = L"bDodajScenariusz";
			this->bDodajScenariusz->Size = System::Drawing::Size(300, 75);
			this->bDodajScenariusz->TabIndex = 2;
			this->bDodajScenariusz->Text = L"Dodaj Scenariusz";
			this->bDodajScenariusz->UseVisualStyleBackColor = true;
			this->bDodajScenariusz->Click += gcnew System::EventHandler(this, &Form1::bDodajScenariusz_Click);
			// 
			// bDodajScenariusz2
			// 
			this->bDodajScenariusz2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->bDodajScenariusz2->Location = System::Drawing::Point(697, 465);
			this->bDodajScenariusz2->Name = L"bDodajScenariusz2";
			this->bDodajScenariusz2->Size = System::Drawing::Size(175, 37);
			this->bDodajScenariusz2->TabIndex = 3;
			this->bDodajScenariusz2->Text = L"Dodaj Scenariusz";
			this->bDodajScenariusz2->UseVisualStyleBackColor = true;
			this->bDodajScenariusz2->Visible = false;
			this->bDodajScenariusz2->Click += gcnew System::EventHandler(this, &Form1::bDodajScenariusz2_Click);
			// 
			// bZapiszScenariusz
			// 
			this->bZapiszScenariusz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->bZapiszScenariusz->Location = System::Drawing::Point(697, 508);
			this->bZapiszScenariusz->Name = L"bZapiszScenariusz";
			this->bZapiszScenariusz->Size = System::Drawing::Size(175, 37);
			this->bZapiszScenariusz->TabIndex = 4;
			this->bZapiszScenariusz->Text = L"Zapisz Scenariusz";
			this->bZapiszScenariusz->UseVisualStyleBackColor = true;
			this->bZapiszScenariusz->Visible = false;
			this->bZapiszScenariusz->Click += gcnew System::EventHandler(this, &Form1::bZapiszScenariusz_Click);
			// 
			// tekst
			// 
			this->tekst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tekst->Location = System::Drawing::Point(12, 12);
			this->tekst->Multiline = true;
			this->tekst->Name = L"tekst";
			this->tekst->Size = System::Drawing::Size(679, 537);
			this->tekst->TabIndex = 5;
			this->tekst->Visible = false;
			// 
			// listaScenariuszy
			// 
			this->listaScenariuszy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->listaScenariuszy->FormattingEnabled = true;
			this->listaScenariuszy->ItemHeight = 24;
			this->listaScenariuszy->Location = System::Drawing::Point(104, 69);
			this->listaScenariuszy->Name = L"listaScenariuszy";
			this->listaScenariuszy->Size = System::Drawing::Size(653, 412);
			this->listaScenariuszy->TabIndex = 6;
			this->listaScenariuszy->Visible = false;
			this->listaScenariuszy->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listaScenariuszy_SelectedIndexChanged);
			this->listaScenariuszy->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::listaScenariuszy_MouseDoubleClick);
			// 
			// bPowrot
			// 
			this->bPowrot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bPowrot->Location = System::Drawing::Point(697, 12);
			this->bPowrot->Name = L"bPowrot";
			this->bPowrot->Size = System::Drawing::Size(175, 37);
			this->bPowrot->TabIndex = 7;
			this->bPowrot->Text = L"Powrót";
			this->bPowrot->UseVisualStyleBackColor = true;
			this->bPowrot->Visible = false;
			this->bPowrot->Click += gcnew System::EventHandler(this, &Form1::bPowrot_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// bNuda
			// 
			this->bNuda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bNuda->Location = System::Drawing::Point(12, 512);
			this->bNuda->Name = L"bNuda";
			this->bNuda->Size = System::Drawing::Size(75, 37);
			this->bNuda->TabIndex = 8;
			this->bNuda->Text = L"Nuda";
			this->bNuda->UseVisualStyleBackColor = true;
			this->bNuda->Click += gcnew System::EventHandler(this, &Form1::bNuda_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->bNuda);
			this->Controls->Add(this->bPowrot);
			this->Controls->Add(this->bZapiszScenariusz);
			this->Controls->Add(this->bDodajScenariusz2);
			this->Controls->Add(this->bDodajScenariusz);
			this->Controls->Add(this->bWybierzSztuke);
			this->Controls->Add(this->zdjecietlo);
			this->Controls->Add(this->listaScenariuszy);
			this->Controls->Add(this->tekst);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Coœ i Coœtam";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjecietlo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void bWybierzSztuke_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->bDodajScenariusz->Visible=false;
			 this->bWybierzSztuke->Visible=false;
			 this->zdjecietlo->Visible=false;
			 this->bNuda->Visible=false;
			 this->bPowrot->Visible=true;
			 this->listaScenariuszy->Visible=true;
			 listaScenariuszy->Items->Clear();
			 StreamReader^ sr = gcnew StreamReader("tytuly.txt");
			 while (!sr->EndOfStream) {
				 listaScenariuszy->Items->Add(sr->ReadLine());
			 }
			 sr->Close();

			
			 
			 }

private: System::Void bDodajScenariusz_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->bDodajScenariusz->Visible=false;
			 this->bWybierzSztuke->Visible=false;
			 this->zdjecietlo->Visible=false;
			 this->bNuda->Visible=false;
			 this->bZapiszScenariusz->Visible=true;
			 this->bDodajScenariusz2->Visible=true;
			 this->bPowrot->Visible=true;
			 this->tekst->Visible=true;

			 
		 }
private: System::Void listaScenariuszy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bPowrot_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->bDodajScenariusz->Visible=true;
			 this->bWybierzSztuke->Visible=true;
			 this->zdjecietlo->Visible=true;
			 this->bNuda->Visible=true;
			 this->bPowrot->Visible=false;
			 this->bDodajScenariusz2->Visible=false;
			 this->bZapiszScenariusz->Visible=false;
			 this->listaScenariuszy->Visible=false;
			 this->tekst->Visible=false;		 
		 }
private: System::Void bDodajScenariusz2_Click(System::Object^  sender, System::EventArgs^  e) {
		
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

      openFileDialog1->InitialDirectory = "c:\\";
      openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
      openFileDialog1->FilterIndex = 1;
      openFileDialog1->RestoreDirectory = true;

      if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
	  {  this->tekst->Text = File::ReadAllText(openFileDialog1->FileName);
	  //sposób na odczyt i dodanie 1 linii z pliku test.txt
	   //auto reader = gcnew StreamReader(File::OpenRead("test.txt"));
	   //this->listaScenariuszy->Items -> Add(reader->ReadLine());
	   //this->tekst->AppendText(reader->ReadLine());
	  //reader->Close();
      }
		 }



private: System::Void bZapiszScenariusz_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ pierwszalinia;
		array<String^>^ lines = tekst->Lines;
	int count = lines->Length;
	pierwszalinia = lines[0];
	StreamWriter^ sw = gcnew StreamWriter(pierwszalinia+".txt");
	for (int idx =0; idx < count; ++idx)
	{
		sw->WriteLine(lines[idx]);
		if (idx == 0) {
			StreamWriter^ tyt = gcnew StreamWriter("tytuly.txt", true);
			tyt->WriteLine(lines[idx]);
			tyt ->Close();
		}
	}
	sw->Close();
		 }
	 
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void bNuda_Click(System::Object^  sender, System::EventArgs^  e) {
Nuda^ f2 = gcnew Nuda();
f2-> ShowDialog();		 }
private: System::Void listaScenariuszy_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	StreamWriter^ sw = gcnew StreamWriter("toopen.txt");
	sw->WriteLine(listaScenariuszy->SelectedItem->ToString() +".txt");
	sw -> Close();
	
	MyForm^ f3 = gcnew MyForm();
	f3->ShowDialog();
}
};
}

