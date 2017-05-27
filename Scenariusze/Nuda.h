#pragma once
#include "stdafx.h"

namespace Scenariusze {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Nuda
	/// </summary>
	public ref class Nuda : public System::Windows::Forms::Form
	{
	public:
		Nuda(void)
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
		~Nuda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  bWybierzPokemona;
	private: System::Windows::Forms::OpenFileDialog^  openFDnuda;
	private: System::Windows::Forms::PictureBox^  fake1;
	private: System::Windows::Forms::PictureBox^  fake2;
	private: System::Windows::Forms::PictureBox^  fake3;
	private: System::Windows::Forms::PictureBox^  fake4;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Nuda::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bWybierzPokemona = (gcnew System::Windows::Forms::Button());
			this->openFDnuda = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fake1 = (gcnew System::Windows::Forms::PictureBox());
			this->fake2 = (gcnew System::Windows::Forms::PictureBox());
			this->fake3 = (gcnew System::Windows::Forms::PictureBox());
			this->fake4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(150, 119);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Nuda::pictureBox1_Click);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Nuda::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Nuda::pictureBox1_MouseUp);
			// 
			// bWybierzPokemona
			// 
			this->bWybierzPokemona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->bWybierzPokemona->Location = System::Drawing::Point(45, 274);
			this->bWybierzPokemona->Name = L"bWybierzPokemona";
			this->bWybierzPokemona->Size = System::Drawing::Size(300, 75);
			this->bWybierzPokemona->TabIndex = 1;
			this->bWybierzPokemona->Text = L"Wybierz Pokemona";
			this->bWybierzPokemona->UseVisualStyleBackColor = true;
			this->bWybierzPokemona->Click += gcnew System::EventHandler(this, &Nuda::button1_Click);
			// 
			// openFDnuda
			// 
			this->openFDnuda->FileName = L"openFDnuda";
			// 
			// fake1
			// 
			this->fake1->BackColor = System::Drawing::SystemColors::Control;
			this->fake1->Location = System::Drawing::Point(11, 11);
			this->fake1->Name = L"fake1";
			this->fake1->Size = System::Drawing::Size(120, 120);
			this->fake1->TabIndex = 2;
			this->fake1->TabStop = false;
			this->fake1->MouseEnter += gcnew System::EventHandler(this, &Nuda::fake1_MouseEnter);
			this->fake1->MouseHover += gcnew System::EventHandler(this, &Nuda::fake1_MouseHover);
			this->fake1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Nuda::fake1_MouseMove);
			this->fake1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Nuda::fake1_MouseUp);
			// 
			// fake2
			// 
			this->fake2->Location = System::Drawing::Point(11, 225);
			this->fake2->Name = L"fake2";
			this->fake2->Size = System::Drawing::Size(120, 120);
			this->fake2->TabIndex = 3;
			this->fake2->TabStop = false;
			this->fake2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Nuda::fake2_MouseMove);
			// 
			// fake3
			// 
			this->fake3->Location = System::Drawing::Point(252, 225);
			this->fake3->Name = L"fake3";
			this->fake3->Size = System::Drawing::Size(120, 120);
			this->fake3->TabIndex = 4;
			this->fake3->TabStop = false;
			this->fake3->Click += gcnew System::EventHandler(this, &Nuda::fake3_Click);
			this->fake3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Nuda::fake3_MouseMove);
			// 
			// fake4
			// 
			this->fake4->Location = System::Drawing::Point(253, 12);
			this->fake4->Name = L"fake4";
			this->fake4->Size = System::Drawing::Size(120, 120);
			this->fake4->TabIndex = 5;
			this->fake4->TabStop = false;
			this->fake4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Nuda::fake4_MouseMove);
			// 
			// Nuda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->fake1);
			this->Controls->Add(this->bWybierzPokemona);
			this->Controls->Add(this->fake4);
			this->Controls->Add(this->fake3);
			this->Controls->Add(this->fake2);
			this->MaximizeBox = false;
			this->Name = L"Nuda";
			this->Text = L"Nuda";
			this->Load += gcnew System::EventHandler(this, &Nuda::Nuda_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fake4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Nuda_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->pictureBox1->Location = Point(12,12);
			 	 this->bWybierzPokemona->Visible=true;
			 } 
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->bWybierzPokemona->Visible=false;
				 
				 OpenFileDialog^ openFDnuda = gcnew OpenFileDialog;

       openFDnuda->InitialDirectory = "c:\\";
	   openFDnuda->Filter = "Obraz JPEG (.jpg)|*.jpg|All files (*.*)|*.*";
       openFDnuda->FilterIndex = 1;
       openFDnuda->RestoreDirectory = true;

      if (  openFDnuda->ShowDialog() == System::Windows::Forms::DialogResult::OK )
	  {  this->pictureBox1->Image = System::Drawing::Image::FromFile( openFDnuda->FileName);}

			 }
	private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 }
private: System::Void fake1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
		 }
private: System::Void fake2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if(this->pictureBox1->Location == Point(12,249)){
				 this->pictureBox1->Location = Point(272,249);}
		 }
private: System::Void fake3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if(this->pictureBox1->Location == Point(272,249)){
				 this->pictureBox1->Location = Point(272,12);};
		 }
private: System::Void fake4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if(this->pictureBox1->Location == Point(272,12)){
				 this->pictureBox1->Location = Point(12,12);};
		 }
private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		 }
private: System::Void fake1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
		 }

private: System::Void fake1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void fake1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			  if(this->pictureBox1->Location == Point(12,12)){
				 this->pictureBox1->Location = Point(12,249);};
		 }
private: System::Void fake3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
	}