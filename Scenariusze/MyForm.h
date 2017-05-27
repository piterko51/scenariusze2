#pragma once

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
			this->SuspendLayout();
			// 
			// scenariusztekst
			// 
			this->scenariusztekst->Location = System::Drawing::Point(12, 12);
			this->scenariusztekst->Name = L"scenariusztekst";
			this->scenariusztekst->Size = System::Drawing::Size(652, 644);
			this->scenariusztekst->TabIndex = 0;
			this->scenariusztekst->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 668);
			this->Controls->Add(this->scenariusztekst);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
	};
}
