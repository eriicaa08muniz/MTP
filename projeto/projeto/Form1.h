#include <ctime>
#include <cstdlib>
#pragma once

namespace projeto {

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
	private: System::Windows::Forms::Button^  bttenviar;
	private: System::Windows::Forms::TextBox^  txtdigite;

	private: System::Windows::Forms::Label^  bttconte;
	private: System::Windows::Forms::PictureBox^  picbarney;
	private: System::Windows::Forms::ListBox^  listchat;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->bttenviar = (gcnew System::Windows::Forms::Button());
			this->txtdigite = (gcnew System::Windows::Forms::TextBox());
			this->bttconte = (gcnew System::Windows::Forms::Label());
			this->picbarney = (gcnew System::Windows::Forms::PictureBox());
			this->listchat = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picbarney))->BeginInit();
			this->SuspendLayout();
			// 
			// bttenviar
			// 
			this->bttenviar->Location = System::Drawing::Point(424, 97);
			this->bttenviar->Name = L"bttenviar";
			this->bttenviar->Size = System::Drawing::Size(75, 30);
			this->bttenviar->TabIndex = 0;
			this->bttenviar->Text = L"Enviar";
			this->bttenviar->UseVisualStyleBackColor = true;
			this->bttenviar->Click += gcnew System::EventHandler(this, &Form1::bttenviar_Click);
			// 
			// txtdigite
			// 
			this->txtdigite->Location = System::Drawing::Point(16, 76);
			this->txtdigite->Multiline = true;
			this->txtdigite->Name = L"txtdigite";
			this->txtdigite->Size = System::Drawing::Size(358, 51);
			this->txtdigite->TabIndex = 1;
			// 
			// bttconte
			// 
			this->bttconte->AutoSize = true;
			this->bttconte->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttconte->Location = System::Drawing::Point(12, 31);
			this->bttconte->Name = L"bttconte";
			this->bttconte->Size = System::Drawing::Size(530, 21);
			this->bttconte->TabIndex = 2;
			this->bttconte->Text = L"Conte algo para o Barney e envie para receber uma resposta:";
			this->bttconte->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// picbarney
			// 
			this->picbarney->ErrorImage = nullptr;
			this->picbarney->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picbarney.Image")));
			this->picbarney->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picbarney.InitialImage")));
			this->picbarney->Location = System::Drawing::Point(364, 173);
			this->picbarney->Name = L"picbarney";
			this->picbarney->Size = System::Drawing::Size(190, 176);
			this->picbarney->TabIndex = 3;
			this->picbarney->TabStop = false;
			// 
			// listchat
			// 
			this->listchat->FormattingEnabled = true;
			this->listchat->Location = System::Drawing::Point(16, 163);
			this->listchat->Name = L"listchat";
			this->listchat->Size = System::Drawing::Size(325, 186);
			this->listchat->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 387);
			this->Controls->Add(this->listchat);
			this->Controls->Add(this->picbarney);
			this->Controls->Add(this->bttconte);
			this->Controls->Add(this->txtdigite);
			this->Controls->Add(this->bttenviar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Barney";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picbarney))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void fala()
		{
		 int qualfala = rand()%7;
		 switch (qualfala){
		 case 0: listchat->Items->Add("Barney: Tudo bem?");
				break;
			case 1: listchat->Items->Add("Barney: Ok!");
				break;
			case 2: listchat->Items->Add("Barney: LOL!");
				break;
			case 3:  listchat->Items->Add("Barney: Que Legal!");
				break;
			case 4: listchat->Items->Add("Barney: Que chato!");
				break;
			case 5: listchat->Items->Add("Barney: Fale mais sobre isso");
				break;
			case 6: listchat->Items->Add("Barney: Sobre o que quer falar?");
				break;
		 }
		 listchat->TopIndex = listchat->Items->Count - 1;
		}
		
#pragma endregion

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void bttenviar_Click(System::Object^  sender, System::EventArgs^  e) {
				 //lbbresposta->Text = lbbresposta->Text + "Eu:" 
				 //std::string texto;
				 //texto = System::Convert::ToString(txtdigite->Text);	
				 //lbbresposta->Text = lbbresposta->Text + System::Convert::ToString(texto);
				listchat->Items->Add("Eu: "+txtdigite->Text);
				listchat->TopIndex = listchat->Items->Count - 1;
				txtdigite->Text = "";
				txtdigite->Focus();
				fala();
				
					
				 
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->AcceptButton = bttenviar;
			 srand(time(0));
			 
		 }
		 
};
}