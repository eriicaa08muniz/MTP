#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  btnnaperte;
	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  chkone;


	private: System::Windows::Forms::Label^  lblgato;
	private: System::Windows::Forms::ComboBox^  cmbnome;
	private: System::Windows::Forms::CheckBox^  chktwo;





	private: System::Windows::Forms::GroupBox^  lblescolha;
	private: System::Windows::Forms::RadioButton^  rdbthree;

	private: System::Windows::Forms::RadioButton^  rdbtwo;




	private: System::Windows::Forms::RadioButton^  rdbone;



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  rdbfour;


	private: System::Windows::Forms::Label^  lblescrebva;
	private: System::Windows::Forms::CheckBox^  chkthree;
	private: System::Windows::Forms::CheckBox^  chkfive;


	private: System::Windows::Forms::CheckBox^  chkfour;





	private: System::Windows::Forms::Label^  lblnota;
	private: System::Windows::Forms::Label^  lblopinion;
	private: System::Windows::Forms::Label^  lblnome;



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
			this->btnnaperte = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chkone = (gcnew System::Windows::Forms::CheckBox());
			this->lblgato = (gcnew System::Windows::Forms::Label());
			this->cmbnome = (gcnew System::Windows::Forms::ComboBox());
			this->chktwo = (gcnew System::Windows::Forms::CheckBox());
			this->lblescolha = (gcnew System::Windows::Forms::GroupBox());
			this->rdbfour = (gcnew System::Windows::Forms::RadioButton());
			this->rdbthree = (gcnew System::Windows::Forms::RadioButton());
			this->rdbtwo = (gcnew System::Windows::Forms::RadioButton());
			this->rdbone = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblescrebva = (gcnew System::Windows::Forms::Label());
			this->chkthree = (gcnew System::Windows::Forms::CheckBox());
			this->chkfive = (gcnew System::Windows::Forms::CheckBox());
			this->chkfour = (gcnew System::Windows::Forms::CheckBox());
			this->lblnota = (gcnew System::Windows::Forms::Label());
			this->lblopinion = (gcnew System::Windows::Forms::Label());
			this->lblnome = (gcnew System::Windows::Forms::Label());
			this->lblescolha->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnnaperte
			// 
			this->btnnaperte->Font = (gcnew System::Drawing::Font(L"Swis721 BdOul BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnnaperte->ForeColor = System::Drawing::Color::DarkRed;
			this->btnnaperte->Location = System::Drawing::Point(282, 568);
			this->btnnaperte->Margin = System::Windows::Forms::Padding(4);
			this->btnnaperte->Name = L"btnnaperte";
			this->btnnaperte->Size = System::Drawing::Size(176, 57);
			this->btnnaperte->TabIndex = 0;
			this->btnnaperte->Text = L"Prosseguir";
			this->btnnaperte->UseVisualStyleBackColor = true;
			this->btnnaperte->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(438, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// chkone
			// 
			this->chkone->AutoSize = true;
			this->chkone->Location = System::Drawing::Point(20, 95);
			this->chkone->Margin = System::Windows::Forms::Padding(4);
			this->chkone->Name = L"chkone";
			this->chkone->Size = System::Drawing::Size(37, 23);
			this->chkone->TabIndex = 2;
			this->chkone->Text = L"1";
			this->chkone->UseVisualStyleBackColor = true;
			this->chkone->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// lblgato
			// 
			this->lblgato->AutoSize = true;
			this->lblgato->Font = (gcnew System::Drawing::Font(L"Swis721 BdOul BT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblgato->ForeColor = System::Drawing::Color::DarkRed;
			this->lblgato->Location = System::Drawing::Point(276, 154);
			this->lblgato->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblgato->Name = L"lblgato";
			this->lblgato->Size = System::Drawing::Size(115, 32);
			this->lblgato->TabIndex = 3;
			this->lblgato->Text = L"Gatinho";
			this->lblgato->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// cmbnome
			// 
			this->cmbnome->FormattingEnabled = true;
			this->cmbnome->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Bolota", L"Talon", L"Ted", L"Tigre", L"Zed"});
			this->cmbnome->Location = System::Drawing::Point(167, 96);
			this->cmbnome->Margin = System::Windows::Forms::Padding(4);
			this->cmbnome->Name = L"cmbnome";
			this->cmbnome->Size = System::Drawing::Size(291, 27);
			this->cmbnome->TabIndex = 4;
			this->cmbnome->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// chktwo
			// 
			this->chktwo->AutoSize = true;
			this->chktwo->Location = System::Drawing::Point(53, 96);
			this->chktwo->Margin = System::Windows::Forms::Padding(4);
			this->chktwo->Name = L"chktwo";
			this->chktwo->Size = System::Drawing::Size(37, 23);
			this->chktwo->TabIndex = 5;
			this->chktwo->Text = L"2";
			this->chktwo->UseVisualStyleBackColor = true;
			this->chktwo->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// lblescolha
			// 
			this->lblescolha->Controls->Add(this->rdbfour);
			this->lblescolha->Controls->Add(this->rdbthree);
			this->lblescolha->Controls->Add(this->rdbtwo);
			this->lblescolha->Controls->Add(this->rdbone);
			this->lblescolha->Font = (gcnew System::Drawing::Font(L"Swis721 BlkOul BT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblescolha->ForeColor = System::Drawing::Color::DarkRed;
			this->lblescolha->Location = System::Drawing::Point(530, 13);
			this->lblescolha->Margin = System::Windows::Forms::Padding(4);
			this->lblescolha->Name = L"lblescolha";
			this->lblescolha->Padding = System::Windows::Forms::Padding(4);
			this->lblescolha->Size = System::Drawing::Size(149, 153);
			this->lblescolha->TabIndex = 6;
			this->lblescolha->TabStop = false;
			this->lblescolha->Text = L"Preço";
			this->lblescolha->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// rdbfour
			// 
			this->rdbfour->AutoSize = true;
			this->rdbfour->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rdbfour->Location = System::Drawing::Point(12, 119);
			this->rdbfour->Name = L"rdbfour";
			this->rdbfour->Size = System::Drawing::Size(89, 26);
			this->rdbfour->TabIndex = 3;
			this->rdbfour->TabStop = true;
			this->rdbfour->Text = L"Adote";
			this->rdbfour->UseVisualStyleBackColor = true;
			this->rdbfour->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// rdbthree
			// 
			this->rdbthree->AutoSize = true;
			this->rdbthree->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rdbthree->Location = System::Drawing::Point(12, 92);
			this->rdbthree->Margin = System::Windows::Forms::Padding(4);
			this->rdbthree->Name = L"rdbthree";
			this->rdbthree->Size = System::Drawing::Size(97, 26);
			this->rdbthree->TabIndex = 2;
			this->rdbthree->TabStop = true;
			this->rdbthree->Text = L"900 R$";
			this->rdbthree->UseVisualStyleBackColor = true;
			this->rdbthree->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// rdbtwo
			// 
			this->rdbtwo->AutoSize = true;
			this->rdbtwo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rdbtwo->Location = System::Drawing::Point(12, 64);
			this->rdbtwo->Margin = System::Windows::Forms::Padding(4);
			this->rdbtwo->Name = L"rdbtwo";
			this->rdbtwo->Size = System::Drawing::Size(97, 26);
			this->rdbtwo->TabIndex = 1;
			this->rdbtwo->TabStop = true;
			this->rdbtwo->Text = L"700 R$";
			this->rdbtwo->UseVisualStyleBackColor = true;
			// 
			// rdbone
			// 
			this->rdbone->AutoSize = true;
			this->rdbone->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rdbone->Location = System::Drawing::Point(12, 36);
			this->rdbone->Margin = System::Windows::Forms::Padding(4);
			this->rdbone->Name = L"rdbone";
			this->rdbone->Size = System::Drawing::Size(97, 26);
			this->rdbone->TabIndex = 0;
			this->rdbone->TabStop = true;
			this->rdbone->Text = L"500 R$";
			this->rdbone->UseVisualStyleBackColor = true;
			this->rdbone->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(34, 190);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(664, 370);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// lblescrebva
			// 
			this->lblescrebva->AutoSize = true;
			this->lblescrebva->ForeColor = System::Drawing::Color::DarkRed;
			this->lblescrebva->Location = System::Drawing::Point(20, 13);
			this->lblescrebva->Name = L"lblescrebva";
			this->lblescrebva->Size = System::Drawing::Size(290, 19);
			this->lblescrebva->TabIndex = 8;
			this->lblescrebva->Text = L"Escreva sua opinião sobre o Gatinho";
			// 
			// chkthree
			// 
			this->chkthree->AutoSize = true;
			this->chkthree->Location = System::Drawing::Point(86, 96);
			this->chkthree->Name = L"chkthree";
			this->chkthree->Size = System::Drawing::Size(37, 23);
			this->chkthree->TabIndex = 9;
			this->chkthree->Text = L"3";
			this->chkthree->UseVisualStyleBackColor = true;
			this->chkthree->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// chkfive
			// 
			this->chkfive->AutoSize = true;
			this->chkfive->Location = System::Drawing::Point(86, 125);
			this->chkfive->Name = L"chkfive";
			this->chkfive->Size = System::Drawing::Size(37, 23);
			this->chkfive->TabIndex = 10;
			this->chkfive->Text = L"5";
			this->chkfive->UseVisualStyleBackColor = true;
			this->chkfive->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// chkfour
			// 
			this->chkfour->AutoSize = true;
			this->chkfour->Location = System::Drawing::Point(20, 125);
			this->chkfour->Name = L"chkfour";
			this->chkfour->Size = System::Drawing::Size(37, 23);
			this->chkfour->TabIndex = 11;
			this->chkfour->Text = L"4";
			this->chkfour->UseVisualStyleBackColor = true;
			this->chkfour->CheckedChanged += gcnew System::EventHandler(this, &Form1::chk4_CheckedChanged);
			// 
			// lblnota
			// 
			this->lblnota->AutoSize = true;
			this->lblnota->ForeColor = System::Drawing::Color::DarkRed;
			this->lblnota->Location = System::Drawing::Point(16, 72);
			this->lblnota->Name = L"lblnota";
			this->lblnota->Size = System::Drawing::Size(104, 19);
			this->lblnota->TabIndex = 12;
			this->lblnota->Text = L"Dê uma nota";
			// 
			// lblopinion
			// 
			this->lblopinion->Location = System::Drawing::Point(163, 126);
			this->lblopinion->Name = L"lblopinion";
			this->lblopinion->Size = System::Drawing::Size(271, 26);
			this->lblopinion->TabIndex = 13;
			this->lblopinion->Click += gcnew System::EventHandler(this, &Form1::lblopinion_Click);
			// 
			// lblnome
			// 
			this->lblnome->AutoSize = true;
			this->lblnome->ForeColor = System::Drawing::Color::DarkRed;
			this->lblnome->Location = System::Drawing::Point(163, 72);
			this->lblnome->Name = L"lblnome";
			this->lblnome->Size = System::Drawing::Size(147, 19);
			this->lblnome->TabIndex = 14;
			this->lblnome->Text = L"Escolha um Nome";
			this->lblnome->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(710, 638);
			this->Controls->Add(this->lblnome);
			this->Controls->Add(this->lblopinion);
			this->Controls->Add(this->lblnota);
			this->Controls->Add(this->chkfour);
			this->Controls->Add(this->chkfive);
			this->Controls->Add(this->chkthree);
			this->Controls->Add(this->lblescrebva);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblescolha);
			this->Controls->Add(this->chktwo);
			this->Controls->Add(this->cmbnome);
			this->Controls->Add(this->lblgato);
			this->Controls->Add(this->chkone);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnnaperte);
			this->Font = (gcnew System::Drawing::Font(L"Swis721 BdOul BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Pesquisa sobre o Gatinho";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->lblescolha->ResumeLayout(false);
			this->lblescolha->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(chkone->Checked)
				 lblopinion->Text = "Horroroso!";
			 if(chktwo->Checked)
				 lblopinion->Text = "Feio!";
			 if(chkthree->Checked)
				 lblopinion->Text = "MAIS ou MENOS!";
			 if(chkfour->Checked)
				 lblopinion->Text = "Bonito!";
			 if(chkfive->Checked)
				 lblopinion->Text = "Lindão!";
			 if(rdbone->Checked)
				 lblopinion->Text = lblopinion->Text + " 500 Reais!";
			 if(rdbtwo->Checked)
				 lblopinion->Text = lblopinion->Text + " 700 Reais!";
			 if(rdbthree->Checked)
				 lblopinion->Text = lblopinion->Text + " 900 Reais!";
			 if(rdbfour->Checked)
				 lblopinion->Text = lblopinion->Text + " Adotar :)!";

		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void lblopinion_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {

		 }
private: System::Void chk4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
};
}

