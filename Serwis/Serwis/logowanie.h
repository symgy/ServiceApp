#pragma once
#include "MyForm.h"

namespace Serwis {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o logowanie
	/// </summary>
	public ref class logowanie : public System::Windows::Forms::Form
	{
	public:
		logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			//zeby nie musiec wpisywac danych logowania. Potem usunac !!!
			tbLogin->Text = "admin";
			tbHaslo->Text = "admin";


		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  tbLogin;
	private: System::Windows::Forms::TextBox^  tbHaslo;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(logowanie::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbHaslo = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(196, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 128);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Login:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Has³o:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Zaloguj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &logowanie::button1_Click);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &logowanie::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &logowanie::button1_MouseHover);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"icon100_com_128.png");
			this->imageList1->Images->SetKeyName(1, L"icon100_com.png");
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Anuluj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &logowanie::button2_Click);
			// 
			// tbLogin
			// 
			this->tbLogin->Location = System::Drawing::Point(70, 35);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(100, 20);
			this->tbLogin->TabIndex = 5;
			// 
			// tbHaslo
			// 
			this->tbHaslo->Location = System::Drawing::Point(70, 67);
			this->tbHaslo->Name = L"tbHaslo";
			this->tbHaslo->PasswordChar = '*';
			this->tbHaslo->Size = System::Drawing::Size(100, 20);
			this->tbHaslo->TabIndex = 6;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tbHaslo);
			this->groupBox1->Controls->Add(this->tbLogin);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(341, 154);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Logowanie";
			// 
			// logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 176);
			this->Controls->Add(this->groupBox1);
			this->Name = L"logowanie";
			this->Text = L"Panel logowania";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = imageList1->Images[1];
	}
	private: System::Void button1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = imageList1->Images[0];
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();

}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ konfiguracja = L"datasource=localhost; port=3306; username=root;password=NU=zupsko33;database=serwis"; //L oznacza rozszerzony zapis
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id FROM serwis.uzytkownik WHERE login = '" + tbLogin -> Text + "' AND haslo='" + tbHaslo ->Text + "';", laczBaze);
			

			 MySqlDataReader^ odczytanie;
			 
			 try {
				 laczBaze->Open(); // otwieramy polaczenie z baza
				 odczytanie = zapytanie->ExecuteReader();
				 

				 if (odczytanie->Read()){
					 int id_uzytkownik = odczytanie->GetInt32(0);
					 
					 this->Hide();
					MyForm^ serwis= gcnew MyForm(id_uzytkownik);
					serwis->ShowDialog();
					this->Close();
					 
					 
				 }
				 else{
					 MessageBox::Show("B³êdna nazwa u¿ytkownika lub has³o");
				 }
			 }
			 catch (Exception^ ex) {
				 MessageBox::Show(ex->Message);
			 }

			 laczBaze->Close();
}
};
}
