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
		int id_uzytkownika;
	private: System::Windows::Forms::DataGridView^  dgPodmioty;
	public:
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::RichTextBox^  rtbPOpis;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  tbPKod;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tbPMiasto;
	private: System::Windows::Forms::TextBox^  tbPUlica;
	private: System::Windows::Forms::TextBox^  tbPNazwa;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnPSzukaj;
	private: System::Windows::Forms::TextBox^  tbPSzukaj;
	private: System::Windows::Forms::Button^  btnPUsun;
	private: System::Windows::Forms::Button^  btnPModyfikuj;
	private: System::Windows::Forms::Button^  btnPDodaj;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  tbUWlasciciel;

	public:
		String^ konfiguracja = L"datasource=localhost; port=3306; username=root;password=NU=zupsko33;database=serwis"; //L oznacza rozszerzony zapis
		MyForm(int uzytkownik)
		{
			InitializeComponent();
			id_uzytkownika = uzytkownik;
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
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rtbUOpis = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tbUWlasciciel = (gcnew System::Windows::Forms::ComboBox());
			this->cbUSerwisant = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->dgUrzadzenia = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dgPodmioty = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->rtbPOpis = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->tbPKod = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPMiasto = (gcnew System::Windows::Forms::TextBox());
			this->tbPUlica = (gcnew System::Windows::Forms::TextBox());
			this->tbPNazwa = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnPSzukaj = (gcnew System::Windows::Forms::Button());
			this->tbPSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->btnPUsun = (gcnew System::Windows::Forms::Button());
			this->btnPModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnPDodaj = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUrzadzenia))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPodmioty))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox8->SuspendLayout();
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
			this->tabPage2->Text = L"Urz¹dzenia";
			this->tabPage2->UseVisualStyleBackColor = true;
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
			this->groupBox1->Location = System::Drawing::Point(22, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(276, 497);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Urz¹dzenia";
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
			// rtbUOpis
			// 
			this->rtbUOpis->Location = System::Drawing::Point(6, 19);
			this->rtbUOpis->Name = L"rtbUOpis";
			this->rtbUOpis->Size = System::Drawing::Size(252, 62);
			this->rtbUOpis->TabIndex = 16;
			this->rtbUOpis->Text = L"";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tbUWlasciciel);
			this->groupBox3->Controls->Add(this->cbUSerwisant);
			this->groupBox3->Controls->Add(this->label5);
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
			// tbUWlasciciel
			// 
			this->tbUWlasciciel->FormattingEnabled = true;
			this->tbUWlasciciel->Location = System::Drawing::Point(106, 129);
			this->tbUWlasciciel->Name = L"tbUWlasciciel";
			this->tbUWlasciciel->Size = System::Drawing::Size(121, 21);
			this->tbUWlasciciel->Sorted = true;
			this->tbUWlasciciel->TabIndex = 15;
			// 
			// cbUSerwisant
			// 
			this->cbUSerwisant->FormattingEnabled = true;
			this->cbUSerwisant->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Jakub Rusek", L"Micha³ Kurek" });
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
			this->label4->Text = L"W³aœciciel:";
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
			this->btnUUsun->Text = L"usuñ";
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
			this->rbUusluga->Text = L"us³uga";
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
			this->rbUPrzeglad->Text = L"przegl¹d";
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
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dgPodmioty);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->ImageIndex = 1;
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1190, 520);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Podmioty";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dgPodmioty
			// 
			this->dgPodmioty->AllowUserToAddRows = false;
			this->dgPodmioty->AllowUserToOrderColumns = true;
			this->dgPodmioty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPodmioty->Location = System::Drawing::Point(328, 7);
			this->dgPodmioty->Name = L"dgPodmioty";
			this->dgPodmioty->Size = System::Drawing::Size(856, 497);
			this->dgPodmioty->TabIndex = 2;
			this->dgPodmioty->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgPodmioty_CellClick);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->btnPSzukaj);
			this->groupBox5->Controls->Add(this->tbPSzukaj);
			this->groupBox5->Controls->Add(this->btnPUsun);
			this->groupBox5->Controls->Add(this->btnPModyfikuj);
			this->groupBox5->Controls->Add(this->btnPDodaj);
			this->groupBox5->Location = System::Drawing::Point(22, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(276, 497);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Podmioty";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->rtbPOpis);
			this->groupBox6->Location = System::Drawing::Point(6, 266);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(264, 87);
			this->groupBox6->TabIndex = 17;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Opis";
			// 
			// rtbPOpis
			// 
			this->rtbPOpis->Location = System::Drawing::Point(6, 19);
			this->rtbPOpis->Name = L"rtbPOpis";
			this->rtbPOpis->Size = System::Drawing::Size(252, 62);
			this->rtbPOpis->TabIndex = 16;
			this->rtbPOpis->Text = L"";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->tbPKod);
			this->groupBox7->Controls->Add(this->label6);
			this->groupBox7->Controls->Add(this->tbPMiasto);
			this->groupBox7->Controls->Add(this->tbPUlica);
			this->groupBox7->Controls->Add(this->tbPNazwa);
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Controls->Add(this->label9);
			this->groupBox7->Location = System::Drawing::Point(6, 94);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(264, 166);
			this->groupBox7->TabIndex = 15;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Dane podstawowe";
			// 
			// tbPKod
			// 
			this->tbPKod->Location = System::Drawing::Point(85, 123);
			this->tbPKod->Name = L"tbPKod";
			this->tbPKod->Size = System::Drawing::Size(173, 20);
			this->tbPKod->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Kod pocztowy";
			// 
			// tbPMiasto
			// 
			this->tbPMiasto->Location = System::Drawing::Point(85, 90);
			this->tbPMiasto->Name = L"tbPMiasto";
			this->tbPMiasto->Size = System::Drawing::Size(173, 20);
			this->tbPMiasto->TabIndex = 9;
			// 
			// tbPUlica
			// 
			this->tbPUlica->Location = System::Drawing::Point(85, 57);
			this->tbPUlica->Name = L"tbPUlica";
			this->tbPUlica->Size = System::Drawing::Size(173, 20);
			this->tbPUlica->TabIndex = 8;
			// 
			// tbPNazwa
			// 
			this->tbPNazwa->Location = System::Drawing::Point(85, 23);
			this->tbPNazwa->Name = L"tbPNazwa";
			this->tbPNazwa->Size = System::Drawing::Size(173, 20);
			this->tbPNazwa->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Miasto";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Ulica";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(5, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Nazwa:";
			// 
			// btnPSzukaj
			// 
			this->btnPSzukaj->Location = System::Drawing::Point(104, 65);
			this->btnPSzukaj->Name = L"btnPSzukaj";
			this->btnPSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnPSzukaj->TabIndex = 2;
			this->btnPSzukaj->Text = L"Szukaj";
			this->btnPSzukaj->UseVisualStyleBackColor = true;
			this->btnPSzukaj->Click += gcnew System::EventHandler(this, &MyForm::btnPSzukaj_Click);
			// 
			// tbPSzukaj
			// 
			this->tbPSzukaj->Location = System::Drawing::Point(6, 39);
			this->tbPSzukaj->Name = L"tbPSzukaj";
			this->tbPSzukaj->Size = System::Drawing::Size(264, 20);
			this->tbPSzukaj->TabIndex = 1;
			// 
			// btnPUsun
			// 
			this->btnPUsun->Enabled = false;
			this->btnPUsun->Location = System::Drawing::Point(192, 465);
			this->btnPUsun->Name = L"btnPUsun";
			this->btnPUsun->Size = System::Drawing::Size(75, 23);
			this->btnPUsun->TabIndex = 12;
			this->btnPUsun->Text = L"usuñ";
			this->btnPUsun->UseVisualStyleBackColor = true;
			this->btnPUsun->Click += gcnew System::EventHandler(this, &MyForm::btnPUsun_Click);
			// 
			// btnPModyfikuj
			// 
			this->btnPModyfikuj->Enabled = false;
			this->btnPModyfikuj->Location = System::Drawing::Point(101, 465);
			this->btnPModyfikuj->Name = L"btnPModyfikuj";
			this->btnPModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnPModyfikuj->TabIndex = 11;
			this->btnPModyfikuj->Text = L"modyfikuj";
			this->btnPModyfikuj->UseVisualStyleBackColor = true;
			this->btnPModyfikuj->Click += gcnew System::EventHandler(this, &MyForm::btnPModyfikuj_Click);
			// 
			// btnPDodaj
			// 
			this->btnPDodaj->Location = System::Drawing::Point(11, 465);
			this->btnPDodaj->Name = L"btnPDodaj";
			this->btnPDodaj->Size = System::Drawing::Size(75, 23);
			this->btnPDodaj->TabIndex = 10;
			this->btnPDodaj->Text = L"dodaj";
			this->btnPDodaj->UseVisualStyleBackColor = true;
			this->btnPDodaj->Click += gcnew System::EventHandler(this, &MyForm::btnPDodaj_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox8);
			this->tabPage1->ImageIndex = 0;
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1190, 520);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ustawienia";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->button2);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->textBox4);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->textBox3);
			this->groupBox8->Controls->Add(this->textBox2);
			this->groupBox8->Controls->Add(this->textBox1);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Location = System::Drawing::Point(23, 7);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(286, 199);
			this->groupBox8->TabIndex = 0;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Zmiana danych logowania";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(196, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"usuñ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(105, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"modyfikuj";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"dodaj";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(97, 108);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 111);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Nowy login:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(97, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(97, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 85);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Powtórz has³o:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 59);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Nowe has³o:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 33);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Stare has³o:";
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
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUrzadzenia))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPodmioty))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
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

private: Void wczytanie_podmiotow(){
			  MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			  MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT nazwa FROM podmiot ORDER BY nazwa;", laczBaze);
			  
			  // Wczytywanie do combo boxa Urzadzenia:Wlasciel zapisanych nazw podmiotow
			  MySqlDataReader^ dane;
			  try{
				  laczBaze->Open();
				  dane = zapytanie->ExecuteReader();
				  int i = 0;
				  while (dane->Read()){
					  
					  tbUWlasciciel->Items->Add(dane->GetString("nazwa")); //dubluje nazwy
					  
				  }
				  laczBaze->Close();
			  }
			  catch (Exception^ komunikat){
				  MessageBox::Show(komunikat->Message);
			  }

			  
			  
		  }

private: Void pokaz_siatke(){
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM serwis.urzadzenie ORDER BY nazwa;", laczBaze);

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
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM serwis.urzadzenie WHERE CONCAT(nazwa, ' ', nr_seryjny, wlasciciel, kategoria, serwisant) LIKE '%" + tbUSzukaj->Text + "%' ORDER BY nazwa;", laczBaze);

			 try{
				 MySqlDataAdapter^ moja = gcnew MySqlDataAdapter(); //interfejs miedzy danymi a baza
				 moja->SelectCommand = zapytanie;
				 DataTable^tabela = gcnew DataTable();
				 moja->Fill(tabela);

				 BindingSource^ zrodlo = gcnew BindingSource(); // podlaczamy zrodlo
				 zrodlo->DataSource = tabela;
				 dgUrzadzenia->DataSource = zrodlo;
				 laczBaze->Close();
				 wczytanie_podmiotow();
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
				 if (kategoria == "przegl¹d") rbUPrzeglad->Checked = true;
				 if (kategoria == "us³uga") rbUusluga->Checked = true;

				btnUModyfikuj->Enabled = true;
				btnUUsun->Enabled = true;


			 }

			 
}
		 

private: System::Void btnUDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
			 // dodawanie urzadzen do bazy
			 if (tbUNazwa->Text->Length < 3 || tbUSeryjny->Text->Length < 3 || tbUWlasciciel->Text->Length < 3 || cbUTyp->Text->Length < 3 || cbUSerwisant->Text->Length < 3){
				 MessageBox::Show("Uzupe³nij brakuj¹ce dane !");
			 }
			 else{
				 MessageBox::Show("Urz¹dzenie dodane pomyœlnie");

				 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
				 MySqlCommand^  polecenie = laczBaze->CreateCommand();
				 MySqlTransaction^ transakcja;
				 laczBaze->Open();

				 transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

				 polecenie->Connection = laczBaze;
				 polecenie->Transaction = transakcja;

				 if (rbUNaprawa->Checked == true) kategoria = "naprawa";
				 if (rbUPrzeglad->Checked == true) kategoria = "przegl¹d";
				 if (rbUusluga->Checked == true) kategoria = "us³uga";

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
			 
			 if (tabControl1->SelectedTab->TabIndex == 3) this->Close();


			 //if (tabControl1->SelectedTab->TabIndex == 4){
				 
			 //}
				 /*logowanie^ loguj = gcnew logowanie();
				 MyForm^ serwis = gcnew MyForm();
				 serwis->Hide();
				 loguj->Show();
			 }*/		 
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
				 if (MessageBox::Show("Czy na pewno chcesz usun¹æ wybrane urz¹dzenie?", "UWAGA!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){

					 polecenie->CommandText = "DELETE  FROM urzadzenie WHERE urzadzenie_id=" + id_rekordu + ";";
					 polecenie->ExecuteNonQuery();

					 transakcja->Commit(); // rozpoczecie transakcji mysql
					 MessageBox::Show("Urz¹dzenie zosta³o usuniête");
				 }
			 }
			 catch (Exception^ komunikat){
				 MessageBox::Show(komunikat->Message);
				 transakcja->Rollback(); //cofanie transakcji
			 }
			 laczBaze->Close();
			 wyczysc(groupBox3); //czyszczenie zawartosci pol 
			 wyczysc(groupBox4);
			 pokaz_siatke(); //Refresh tabeli

}
private: System::Void btnUModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (tbUNazwa->Text->Length < 3 || tbUSeryjny->Text->Length < 3 || tbUWlasciciel->Text->Length < 3 || cbUTyp->Text->Length < 3 || cbUSerwisant->Text->Length < 3){
				 MessageBox::Show("Uzupe³nij brakuj¹ce dane !");
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
private: System::Void btnPSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja); //polaczenie zbaza
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM serwis.podmiot WHERE CONCAT(nazwa, ' ', miasto, ulica) LIKE '%" +tbPSzukaj->Text + "%' ORDER BY nazwa;", laczBaze);

			 try{
				 MySqlDataAdapter^ moja = gcnew MySqlDataAdapter(); //interfejs miedzy danymi a baza
				 moja->SelectCommand = zapytanie;
				 DataTable^tabela = gcnew DataTable();
				 moja->Fill(tabela);

				 BindingSource^ zrodlo = gcnew BindingSource(); // podlaczamy zrodlo
				 zrodlo->DataSource = tabela;
				 dgPodmioty->DataSource = zrodlo;
				 laczBaze->Close();
			 }
			 catch (Exception^ komunikat){
				 MessageBox::Show(komunikat->Message);
			 }
			 dgPodmioty->Columns[0]->Visible = false; // uktywamy podmiot id
}
private: System::Void dgPodmioty_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 if (e->RowIndex >= 0){
				 id_rekordu = Convert::ToInt32(dgPodmioty->Rows[e->RowIndex]->Cells["podmiot_id"]->Value);
				 tbPNazwa->Text = dgPodmioty->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();
				 tbPUlica->Text = dgPodmioty->Rows[e->RowIndex]->Cells["ulica"]->Value->ToString();
				 tbPKod->Text = dgPodmioty->Rows[e->RowIndex]->Cells["kod_pocztowy"]->Value->ToString();
				 tbPMiasto->Text = dgPodmioty->Rows[e->RowIndex]->Cells["miasto"]->Value->ToString();
				 rtbPOpis->Text = dgPodmioty->Rows[e->RowIndex]->Cells["opis"]->Value->ToString();

				 btnPModyfikuj->Enabled = true;
				 btnPUsun->Enabled = true;


			 }
}
		 private: void pokaz_podmiot(){
					  MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja); //polaczenie zbaza
					  MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM serwis.podmiot ORDER BY nazwa;", laczBaze);

					  try{
						  MySqlDataAdapter^ moja = gcnew MySqlDataAdapter(); //interfejs miedzy danymi a baza
						  moja->SelectCommand = zapytanie;
						  DataTable^tabela = gcnew DataTable();
						  moja->Fill(tabela);

						  BindingSource^ zrodlo = gcnew BindingSource(); // podlaczamy zrodlo
						  zrodlo->DataSource = tabela;
						  dgPodmioty->DataSource = zrodlo;
						  laczBaze->Close();
					  }
					  catch (Exception^ komunikat){
						  MessageBox::Show(komunikat->Message);
					  }
					  dgPodmioty->Columns[0]->Visible = false; // uktywamy podmiot id
		 }


private: System::Void btnPDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (tbPNazwa->Text->Length < 3 || tbPMiasto->Text->Length < 3 || tbPKod->Text->Length < 3 || tbPUlica->Text->Length < 3){
				 MessageBox::Show("Uzupe³nij brakuj¹ce dane !");
			 }
			 else{
				 MessageBox::Show("Urz¹dzenie dodane pomyœlnie");

				 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
				 MySqlCommand^  polecenie = laczBaze->CreateCommand();
				 MySqlTransaction^ transakcja;
				 laczBaze->Open();

				 transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

				 polecenie->Connection = laczBaze;
				 polecenie->Transaction = transakcja;

				 try{
					 polecenie->CommandText = "INSERT INTO podmiot SET nazwa='" + tbPNazwa->Text + "', miasto='" + tbPMiasto->Text + "', ulica='" + tbPUlica->Text + "',kod_pocztowy='" + tbPKod->Text + "', opis='" + rtbPOpis->Text + "' ";
					 polecenie->ExecuteNonQuery();

					 transakcja->Commit();
				 }

				 catch (Exception^ komunikat){
					 MessageBox::Show(komunikat->Message);
					 transakcja->Rollback();
				 }
				 laczBaze->Close();
				 wczytanie_podmiotow(); // Dodawanie nazwy podmiotu do listy podmiotów
			 }
			 pokaz_podmiot();
			
			 

}
private: System::Void btnPModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (tbPNazwa->Text->Length < 3 || tbPMiasto->Text->Length < 3 || tbPKod->Text->Length < 3 || tbPUlica->Text->Length < 3){
				 MessageBox::Show("Uzupe³nij brakuj¹ce dane !");
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
					 polecenie->CommandText = "UPDATE podmiot SET nazwa='" + tbPNazwa->Text + "', miasto='" + tbPMiasto->Text + "', ulica='" + tbPUlica->Text + "',kod_pocztowy='" + tbPKod->Text + "', opis='" + rtbPOpis->Text + "' WHERE podmiot_id='" + id_rekordu + "' ";
					 polecenie->ExecuteNonQuery();
					 transakcja->Commit(); // rozpoczecie transakcji mysql
				 }
				 catch (Exception^ komunikat){
					 MessageBox::Show(komunikat->Message);
					 transakcja->Rollback(); //cofanie transakcji
				 }
				 laczBaze->Close();
			 }
			 pokaz_podmiot();
}
private: System::Void btnPUsun_Click(System::Object^  sender, System::EventArgs^  e) {

			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			 MySqlCommand^ polecenie = laczBaze->CreateCommand();
			 MySqlTransaction^ transakcja;
			 laczBaze->Open();
			 transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
			 polecenie->Connection = laczBaze;
			 polecenie->Transaction = transakcja;

			 try{
				 if (MessageBox::Show("Czy na pewno chcesz usun¹æ wybrany podmioit?", "UWAGA!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){

					 polecenie->CommandText = "DELETE  FROM podmiot WHERE podmiot_id=" + id_rekordu + ";";
					 polecenie->ExecuteNonQuery();

					 transakcja->Commit(); // rozpoczecie transakcji mysql
					 MessageBox::Show("Podmiot zosta³ usuniêty");
				 }
			 }
			 catch (Exception^ komunikat){
				 MessageBox::Show(komunikat->Message);
				 transakcja->Rollback(); //cofanie transakcji
			 }
			 laczBaze->Close();
			 wczytanie_podmiotow(); //Usuwanie nazwy podmiotu z listy podmiotów
			 wyczysc(groupBox5); //czyszczenie zawartosci pol 
			 pokaz_podmiot(); //Refresh tabeli
}
};
}
