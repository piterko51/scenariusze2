#pragma once
#include "stdafx.h"
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
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  scenariusztekst;
	private: System::Windows::Forms::Button^  bZapiszZmiany;
	private: System::Windows::Forms::Button^  bWyszukajRoli;

	private: System::Windows::Forms::RichTextBox^  rolatekst;
	private: System::Windows::Forms::Button^  bPokazScenariusz;
	private: System::Windows::Forms::RichTextBox^  listboxRola;







	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->scenariusztekst = (gcnew System::Windows::Forms::RichTextBox());
			this->bZapiszZmiany = (gcnew System::Windows::Forms::Button());
			this->bWyszukajRoli = (gcnew System::Windows::Forms::Button());
			this->rolatekst = (gcnew System::Windows::Forms::RichTextBox());
			this->bPokazScenariusz = (gcnew System::Windows::Forms::Button());
			this->listboxRola = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// scenariusztekst
			// 
			this->scenariusztekst->Location = System::Drawing::Point(12, 12);
			this->scenariusztekst->Name = L"scenariusztekst";
			this->scenariusztekst->Size = System::Drawing::Size(737, 772);
			this->scenariusztekst->TabIndex = 0;
			this->scenariusztekst->Text = L"";
			// 
			// bZapiszZmiany
			// 
			this->bZapiszZmiany->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bZapiszZmiany->Location = System::Drawing::Point(765, 700);
			this->bZapiszZmiany->Name = L"bZapiszZmiany";
			this->bZapiszZmiany->Size = System::Drawing::Size(117, 84);
			this->bZapiszZmiany->TabIndex = 1;
			this->bZapiszZmiany->Text = L"Zapisz Zmiany";
			this->bZapiszZmiany->UseVisualStyleBackColor = true;
			this->bZapiszZmiany->Click += gcnew System::EventHandler(this, &MyForm::bZapiszZmiany_Click);
			// 
			// bWyszukajRoli
			// 
			this->bWyszukajRoli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bWyszukajRoli->Location = System::Drawing::Point(765, 520);
			this->bWyszukajRoli->Name = L"bWyszukajRoli";
			this->bWyszukajRoli->Size = System::Drawing::Size(117, 84);
			this->bWyszukajRoli->TabIndex = 2;
			this->bWyszukajRoli->Text = L"Wyszukaj Roli";
			this->bWyszukajRoli->UseVisualStyleBackColor = true;
			this->bWyszukajRoli->Click += gcnew System::EventHandler(this, &MyForm::bWyszukajRoli_Click);
			// 
			// rolatekst
			// 
			this->rolatekst->Location = System::Drawing::Point(12, 12);
			this->rolatekst->Name = L"rolatekst";
			this->rolatekst->Size = System::Drawing::Size(737, 772);
			this->rolatekst->TabIndex = 4;
			this->rolatekst->Text = L"";
			this->rolatekst->Visible = false;
			// 
			// bPokazScenariusz
			// 
			this->bPokazScenariusz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->bPokazScenariusz->Location = System::Drawing::Point(765, 610);
			this->bPokazScenariusz->Name = L"bPokazScenariusz";
			this->bPokazScenariusz->Size = System::Drawing::Size(117, 84);
			this->bPokazScenariusz->TabIndex = 5;
			this->bPokazScenariusz->Text = L"Poka¿ Scenariusz";
			this->bPokazScenariusz->UseVisualStyleBackColor = true;
			this->bPokazScenariusz->Visible = false;
			this->bPokazScenariusz->Click += gcnew System::EventHandler(this, &MyForm::bPokazScenariusz_Click);
			// 
			// listboxRola
			// 
			this->listboxRola->Location = System::Drawing::Point(765, 479);
			this->listboxRola->Name = L"listboxRola";
			this->listboxRola->Size = System::Drawing::Size(117, 35);
			this->listboxRola->TabIndex = 6;
			this->listboxRola->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 800);
			this->Controls->Add(this->listboxRola);
			this->Controls->Add(this->bPokazScenariusz);
			this->Controls->Add(this->rolatekst);
			this->Controls->Add(this->bWyszukajRoli);
			this->Controls->Add(this->bZapiszZmiany);
			this->Controls->Add(this->scenariusztekst);
			this->MaximumSize = System::Drawing::Size(910, 839);
			this->MinimumSize = System::Drawing::Size(910, 839);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		StreamReader^ sr = gcnew StreamReader("toopen.txt");
		StreamReader^ sr2 = gcnew StreamReader(sr->ReadLine());
		sr->Close();
		scenariusztekst->Text = sr2->ReadToEnd();
		sr2->Close();


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void bZapiszZmiany_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Czy na pewno chcesz nadpisaæ scenariusz?", "My Application", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) 
		{

			String^ pierwszalinia;
			StreamReader^ sr = gcnew StreamReader("toopen.txt");
			pierwszalinia = sr->ReadLine();
			sr->Close();
			array<String^>^ lines = scenariusztekst->Lines;
			int count = lines->Length;
			StreamWriter^ sw = gcnew StreamWriter(pierwszalinia);
			for (int idx = 0; idx < count; ++idx)
			{
				sw->WriteLine(lines[idx]);
			}

			sw->Close();
		}
	}
	private: System::Void MyForm_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (MessageBox::Show(L"Czy na pewno chcesz zamkn¹æ scenariusz? Niezapisane zmiany zostan¹ utacone.", L"Wyjœcie", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
	}
private: System::Void bWyszukajRoli_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ rola;
		rola= listboxRola->Lines[0];
		this->rolatekst->Visible = true;
		this->bPokazScenariusz->Visible = true;

		}
private: System::Void bPokazScenariusz_Click(System::Object^  sender, System::EventArgs^  e) {
	this->rolatekst->Visible = false;
	this->bPokazScenariusz->Visible = false;


}
};
}
