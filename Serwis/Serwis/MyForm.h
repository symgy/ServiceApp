#pragma once
//#include "logowanie.h"

namespace Serwis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ konfiguracja = L"datasource=localhost; port=3306; username=root;password=NU=zupsko33;database=serwis"; //L oznacza rozszerzony zapis
		MyForm(void)
		{
			InitializeComponent();
			
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  rbUusluga;

	private: System::Windows::Forms::RadioButton^  rbUPrzeglad;
	private: System::Windows::Forms::RadioButton^  rbUNaprawa;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbUWlasciciel;

	private: System::Windows::Forms::TextBox^  tbUSeryjny;

	private: System::Windows::Forms::TextBox^  tbUNazwa;

	private: System::Windows::Forms::ComboBox^  cbUTyp;

	private: System::Windows::Forms::DataGridView^  dgUrzadzenia;


	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ComboBox^  cbUSerwisant;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnUSzukaj;
	private: System::Windows::Forms::TextBox^  tbUSzukaj;


	private: System::Windows::Forms::Button^  btnUUsun;

	private: System::Windows::Forms::Button^  btnUModyfikuj;

	private: System::Windows::Forms::Button^  btnUDodaj;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::RichTextBox^  rtbUOpis;
	private: System::Windows::Forms::GroupBox^  groupBox4;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale�y modyfikowa�
		/// zawarto�� tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dgUrzadzenia = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cbUSerwisant = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbUWlasciciel = (gcnew System::Windows::Forms::TextBox());
			this->tbUSeryjny = (gcnew System::Windows::Forms::TextBox());
			this->tbUNazwa = (gcnew System::Windows::Forms::TextBox());
			this->cbUTyp = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnUSzukaj = (gcnew System::Windows::Forms::Button());
			this->tbUSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->btnUUsun = (gcnew System::Windows::Forms::Button());
			this->btnUModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnUDodaj = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbUusluga = (gcnew System::Windows::Forms::RadioButton());
			this->rbUPrzeglad = (gcnew System::Windows::Forms::RadioButton());
			this->rbUNaprawa = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->rtbUOpis = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUrzadzenia))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->ImageList = this->imageList1;
			this->tabControl1->Location = System::Drawing::Point(1, 1);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1198, 595);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::tabControl1_MouseClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->dgUrzadzenia);
			this->tabPage2->ImageIndex = 2;
			this->tabPage2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1190, 520);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Urz�dzenia";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dgUrzadzenia
			// 
			this->dgUrzadzenia->AllowUserToAddRows = false;
			this->dgUrzadzenia->AllowUserToOrderColumns = true;
			this->dgUrzadzenia->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUrzadzenia->Location = System::Drawing::Point(327, 6);
			this->dgUrzadzenia->Name = L"dgUrzadzenia";
			this->dgUrzadzenia->Size = System::Drawing::Size(856, 497);
			this->dgUrzadzenia->TabIndex = 1;
			this->dgUrzadzenia->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgUrzadzenia_CellClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->btnUSzukaj);
			this->groupBox1->Controls->Add(this->tbUSzukaj);
			this->groupBox1->Controls->Add(this->btnUUsun);
			this->groupBox1->Controls->Add(this->btnUModyfikuj);
			this->groupBox1->Controls->Add(this->btnUDodaj);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(23, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(276, 497);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Urz�dzenia";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cbUSerwisant);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->tbUWlasciciel);
			this->groupBox3->Controls->Add(this->tbUSeryjny);
			this->groupBox3->Controls->Add(this->tbUNazwa);
			this->groupBox3->Controls->Add(this->cbUTyp);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Location = System::Drawing::Point(6, 94);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(264, 205);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Dane podstawowe";
			// 
			// cbUSerwisant
			// 
			this->cbUSerwisant->FormattingEnabled = true;
			this->cbUSerwisant->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Jakub Rusek", L"Micha� Kurek" });
			this->cbUSerwisant->Location = System::Drawing::Point(106, 162);
			this->cbUSerwisant->Name = L"cbUSerwisant";
			this->cbUSerwisant->Size = System::Drawing::Size(121, 21);
			this->cbUSerwisant->Sorted = true;
			this->cbUSerwisant->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Serwisant:";
			// 
			// tbUWlasciciel
			// 
			this->tbUWlasciciel->Location = System::Drawing::Point(106, 129);
			this->tbUWlasciciel->Name = L"tbUWlasciciel";
			this->tbUWlasciciel->Size = System::Drawing::Size(121, 20);
			this->tbUWlasciciel->TabIndex = 9;
			// 
			// tbUSeryjny
			// 
			this->tbUSeryjny->Location = System::Drawing::Point(106, 96);
			this->tbUSeryjny->Name = L"tbUSeryjny";
			this->tbUSeryjny->Size = System::Drawing::Size(121, 20);
			this->tbUSeryjny->TabIndex = 8;
			// 
			// tbUNazwa
			// 
			this->tbUNazwa->Location = System::Drawing::Point(106, 62);
			this->tbUNazwa->Name = L"tbUNazwa";
			this->tbUNazwa->Size = System::Drawing::Size(121, 20);
			this->tbUNazwa->TabIndex = 7;
			// 
			// cbUTyp
			// 
			this->cbUTyp->FormattingEnabled = true;
			this->cbUTyp->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Aparat EKG", L"Defibrylator", L"Kardiomonitor",
					L"Pompa", L"Ssak"
			});
			this->cbUTyp->Location = System::Drawing::Point(106, 27);
			this->cbUTyp->Name = L"cbUTyp";
			this->cbUTyp->Size = System::Drawing::Size(121, 21);
			this->cbUTyp->Sorted = true;
			this->cbUTyp->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"W�a�ciciel:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Numer seryjny:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nazwa:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Typ:";
			// 
			// btnUSzukaj
			// 
			this->btnUSzukaj->Location = System::Drawing::Point(104, 65);
			this->btnUSzukaj->Name = L"btnUSzukaj";
			this->btnUSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnUSzukaj->TabIndex = 2;
			this->btnUSzukaj->Text = L"Szukaj";
			this->btnUSzukaj->UseVisualStyleBackColor = true;
			this->btnUSzukaj->Click += gcnew System::EventHandler(this, &MyForm::btnUSzukaj_Click);
			// 
			// tbUSzukaj
			// 
			this->tbUSzukaj->Location = System::Drawing::Point(6, 39);
			this->tbUSzukaj->Name = L"tbUSzukaj";
			this->tbUSzukaj->Size = System::Drawing::Size(264, 20);
			this->tbUSzukaj->TabIndex = 1;
			// 
			// btnUUsun
			// 
			this->btnUUsun->Enabled = false;
			this->btnUUsun->Location = System::Drawing::Point(192, 465);
			this->btnUUsun->Name = L"btnUUsun";
			this->btnUUsun->Size = System::Drawing::Size(75, 23);
			this->btnUUsun->TabIndex = 12;
			this->btnUUsun->Text = L"usu�";
			this->btnUUsun->UseVisualStyleBackColor = true;
			this->btnUUsun->Click += gcnew System::EventHandler(this, &MyForm::btnUUsun_Click);
			// 
			// btnUModyfikuj
			// 
			this->btnUModyfikuj->Enabled = false;
			this->btnUModyfikuj->Location = System::Drawing::Point(101, 465);
			this->btnUModyfikuj->Name = L"btnUModyfikuj";
			this->btnUModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnUModyfikuj->TabIndex = 11;
			this->btnUModyfikuj->Text = L"modyfikuj";
			this->btnUModyfikuj->UseVisualStyleBackColor = true;
			this->btnUModyfikuj->Click += gcnew System::EventHandler(this, &MyForm::btnUModyfikuj_Click);
			// 
			// btnUDodaj
			// 
			this->btnUDodaj->Location = System::Drawing::Point(11, 465);
			this->btnUDodaj->Name = L"btnUDodaj";
			this->btnUDodaj->Size = System::Drawing::Size(75, 23);
			this->btnUDodaj->TabIndex = 10;
			this->btnUDodaj->Text = L"dodaj";
			this->btnUDodaj->UseVisualStyleBackColor = true;
			this->btnUDodaj->Click += gcnew System::EventHandler(this, &MyForm::btnUDodaj_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbUusluga);
			this->groupBox2->Controls->Add(this->rbUPrzeglad);
			this->groupBox2->Controls->Add(this->rbUNaprawa);
			this->groupBox2->Location = System::Drawing::Point(6, 303);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(264, 55);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Kategoria";
			// 
			// rbUusluga
			// 
			this->rbUusluga->AutoSize = true;
			this->rbUusluga->Location = System::Drawing::Point(189, 26);
			this->rbUusluga->Name = L"rbUusluga";
			this->rbUusluga->Size = System::Drawing::Size(58, 17);
			this->rbUusluga->TabIndex = 2;
			this->rbUusluga->Text = L"us�uga";
			this->rbUusluga->UseVisualStyleBackColor = true;
			// 
			// rbUPrzeglad
			// 
			this->rbUPrzeglad->AutoSize = true;
			this->rbUPrzeglad->Checked = true;
			this->rbUPrzeglad->Location = System::Drawing::Point(7, 26);
			this->rbUPrzeglad->Name = L"rbUPrzeglad";
			this->rbUPrzeglad->Size = System::Drawing::Size(65, 17);
			this->rbUPrzeglad->TabIndex = 1;
			this->rbUPrzeglad->TabStop = true;
			this->rbUPrzeglad->Text = L"przegl�d";
			this->rbUPrzeglad->UseVisualStyleBackColor = true;
			// 
			// rbUNaprawa
			// 
			this->rbUNaprawa->AutoSize = true;
			this->rbUNaprawa->Location = System::Drawing::Point(98, 26);
			this->rbUNaprawa->Name = L"rbUNaprawa";
			this->rbUNaprawa->Size = System::Drawing::Size(66, 17);
			this->rbUNaprawa->TabIndex = 0;
			this->rbUNaprawa->Text = L"naprawa";
			this->rbUNaprawa->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->ImageIndex = 1;
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1190, 520);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Podmioty";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->ImageIndex = 0;
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1190, 520);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ustawienia";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->ImageIndex = 4;
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1190, 520);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Wyloguj";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->ImageIndex = 3;
			this->tabPage4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1190, 520);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Zamknij";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"gear.png");
			this->imageList1->Images->SetKeyName(1, L"147-building.png");
			this->imageList1->Images->SetKeyName(2, L"add_list.png");
			this->imageList1->Images->SetKeyName(3, L"40-turn-off.png");
			this->imageList1->Images->SetKeyName(4, L"icon100_com_137.png");
			// 
			// rtbUOpis
			// 
			this->rtbUOpis->Location = System::Drawing::Point(6, 19);
			this->rtbUOpis->Name = L"rtbUOpis";
			this->rtbUOpis->Size = System::Drawing::Size(252, 62);
			this->rtbUOpis->TabIndex = 16;
			this->rtbUOpis->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->rtbUOpis);
			this->groupBox4->Location = System::Drawing::Point(6, 365);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(264, 87);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Opis";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1211, 594);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Aplikacja serwisowa";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUrzadzenia))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//deklaracja zmiennych
		int id_rekordu; //wybranie rekordu na ktorym pracuje - zmienna dla wszystkich siatek
		String^ kategoria="";
		// koniec deklaracji zmiennych
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

 private: Void wyczysc(Control^ kontrolki){
						  for each (Control^ pole in kontrolki->Controls)
						  {
							  if (pole->GetType() == TextBox::typeid){ //jezeli kontrolka jest text boxem
								  pole->Text = "";	  
							  }
							  else if (pole->GetType() == ComboBox::typeid){ //jezeli kontrolka jest typu combo box
								  pole->Text = "";
							  }
							  else if (pole->GetType() == RichTextBox::typeid){
								  pole->Text = "";
							  }

						  }
			 }

private: Void pokaz_siatke(){
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT urzadzenie_id, typ, nazwa, nr_seryjny, wlasciciel, serwisant, kategoria, opis FROM serwis.urzadzenie ORDER BY nazwa;", laczBaze);

			 try {
				 MySqlDataAdapter^ moja = gcnew MySqlDataAdapter(); //interfejs pomiedzy baza a danumi
				 moja->SelectCommand = zapytanie;
				 DataTable^ tabela = gcnew DataTable(); //tworzymy tabele
				 moja->Fill(tabela); // wypelniamy tabele

				 BindingSource^ zrodlo = gcnew BindingSource(); //podlaczamy zrodlo danych
				 zrodlo->DataSource = tabela; //jako zrodlo danych ustawiamy tabele
				 dgUrzadzenia->DataSource = zrodlo; // w nasza siatke wczytujemy tabele z danymi
				 laczBaze->Close(); //zamykanie polaczenia z baza
			 }
			 catch (Exception^ komunikat){
				 MessageBox::Show(komunikat->Message);
			 }
}



private: System::Void btnUSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja); //polaczenie zbaza
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT urzadzenie_id, typ, nazwa, nr_seryjny, wlasciciel, serwisant, kategoria, opis FROM serwis.urzadzenie WHERE CONCAT(nazwa, ' ', nr_seryjny, wlasciciel, kategoria, serwisant) LIKE '%" + tbUSzukaj->Text + "%' ORDER BY nazwa;", laczBaze);

			 try{
				 MySqlDataAdapter^ moja = gcnew MySqlDataAdapter(); //interfejs miedzy danymi a baza
				 moja->SelectCommand = zapytanie;
				 DataTable^tabela = gcnew DataTable();
				 moja->Fill(tabela);

				 BindingSource^ zrodlo = gcnew BindingSource(); // podlaczamy zrodlo
				 zrodlo->DataSource = tabela;
				 dgUrzadzenia->DataSource = zrodlo;
				 laczBaze->Close();
			 }
			 catch (Exception^ komunikat){
				 MessageBox::Show(komunikat->Message);
			 }
			 dgUrzadzenia->Columns[0]->Visible = false; // uktywamy urzadzenie id
			
			
}

private: System::Void dgUrzadzenia_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 if (e->RowIndex >= 0){
				 id_rekordu = Convert::ToInt32(dgUrzadzenia->Rows[e->RowIndex]->Cells["urzadzenie_id"]->Value);
				 tbUNazwa->Text = dgUrzadzenia->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();
				 tbUSeryjny->Text = dgUrzadzenia->Rows[e->RowIndex]->Cells["nr_seryjny"]->Value->ToString();
				 tbUWlasciciel->Text = dgUrzadzenia->Rows[e->RowIndex]->Cells["wlasciciel"]->Value->ToString();
				 cbUTyp->Text = dgUrzadzenia->Rows[e->RowIndex]->Cells["typ"]->Value->ToString();
				 cbUSerwisant->Text = dgUrzadzenia->Rows[e->RowIndex]->Cells["serwisant"]->Value->ToString();
				 rtbUOpis->Text = dgUrzadzenia->Rows[e->RowIndex]->Cells["opis"]->Value->ToString();
				 
				 
				 kategoria = dgUrzadzenia->Rows[e->RowIndex]->Cells["kategoria"]->Value->ToString();

				 if (kategoria == "naprawa") rbUNaprawa->Checked = true;
				 if (kategoria == "przegl�d") rbUPrzeglad->Checked = true;
				 if (kategoria == "us�uga") rbUusluga->Checked = true;

				btnUModyfikuj->Enabled = true;
				btnUUsun->Enabled = true;


			 }

			 
}
		 

private: System::Void btnUDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
			 // dodawanie urzadzen do bazy
			 if (tbUNazwa->Text->Length < 3 || tbUSeryjny->Text->Length < 3 || tbUWlasciciel->Text->Length < 3 || cbUTyp->Text->Length < 3 || cbUSerwisant->Text->Length < 3){
				 MessageBox::Show("Uzupe�nij brakuj�ce dane !");
			 }
			 else{
				 MessageBox::Show("Urz�dzenie dodane pomy�lnie");

				 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
				 MySqlCommand^  polecenie = laczBaze->CreateCommand();
				 MySqlTransaction^ transakcja;
				 laczBaze->Open();

				 transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

				 polecenie->Connection = laczBaze;
				 polecenie->Transaction = transakcja;

				 if (rbUNaprawa->Checked == true) kategoria = "naprawa";
				 if (rbUPrzeglad->Checked == true) kategoria = "przegl�d";
				 if (rbUusluga->Checked == true) kategoria = "us�uga";

				 try{
					 polecenie->CommandText = "INSERT INTO urzadzenie SET nazwa='" + tbUNazwa->Text + "', nr_seryjny='" + tbUSeryjny->Text + "', wlasciciel='" + tbUWlasciciel->Text + "',typ='" + cbUTyp->Text + "',serwisant='" + cbUSerwisant->Text + "', kategoria='" + kategoria + "', opis='"+rtbUOpis->Text+"' ";
					 polecenie->ExecuteNonQuery();
					 transakcja->Commit();
				 }

				 catch (Exception^ komunikat){
					 MessageBox::Show(komunikat->Message);
					 transakcja->Rollback();
				 }
				 laczBaze->Close();
			 }
			 pokaz_siatke();
}
private: System::Void tabControl1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 /*logowanie^ loguj = gcnew logowanie();
			 if (tabControl1->SelectedTab->TabIndex == 3) this->Close();
			 if (tabControl1->SelectedTab->TabIndex == 4) {
				 this->Hide();
				 loguj->ShowDialog();
			 }	*/	 
}

private: System::Void btnUUsun_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			 MySqlCommand^ polecenie = laczBaze->CreateCommand();
			 MySqlTransaction^ transakcja;
			 laczBaze->Open();
			 transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
			 polecenie->Connection = laczBaze;
			 polecenie->Transaction = transakcja;

			 try{
				 if (MessageBox::Show("Czy na pewno chcesz usun�� wybrane urz�dzenie?", "UWAGA!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){

					 polecenie->CommandText = "DELETE  FROM urzadzenie WHERE urzadzenie_id=" + id_rekordu + ";";
					 polecenie->ExecuteNonQuery();

					 transakcja->Commit(); // rozpoczecie transakcji mysql
					 MessageBox::Show("Urz�dzenie zosta�o usuni�te");
				 }
			 }
			 catch (Exception^ komunikat){
				 MessageBox::Show(komunikat->Message);
				 transakcja->Rollback(); //cofanie transakcji
			 }
			 laczBaze->Close();
			 wyczysc(groupBox3); //czyszczenie zawartosci pol 
			 pokaz_siatke(); //Refresh tabeli

}
private: System::Void btnUModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (tbUNazwa->Text->Length < 3 || tbUSeryjny->Text->Length < 3 || tbUWlasciciel->Text->Length < 3 || cbUTyp->Text->Length < 3 || cbUSerwisant->Text->Length < 3){
				 MessageBox::Show("Uzupe�nij brakuj�ce dane !");
			 }
			 else{
				 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
				 MySqlCommand^ polecenie = laczBaze->CreateCommand();
				 MySqlTransaction^ transakcja;
				 laczBaze->Open();
				 transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);  //odczyt zatwierdzonych danych
				 polecenie->Connection = laczBaze;
				 polecenie->Transaction = transakcja;

				 try{
					 polecenie->CommandText = "UPDATE urzadzenie SET nazwa='" + tbUNazwa->Text + "', nr_seryjny='" + tbUSeryjny->Text + "', wlasciciel='" + tbUWlasciciel->Text + "',typ='" + cbUTyp->Text + "',serwisant='" + cbUSerwisant->Text + "', kategoria='" + kategoria + "', opis='"+rtbUOpis->Text+"' WHERE urzadzenie_id="+id_rekordu+" ";
					 polecenie->ExecuteNonQuery(); 
					 transakcja->Commit(); // rozpoczecie transakcji mysql
				 }
				 catch (Exception^ komunikat){
					 MessageBox::Show(komunikat->Message);
					 transakcja->Rollback(); //cofanie transakcji
				 }
				 laczBaze->Close();
			 }
			 pokaz_siatke();
}
};
}