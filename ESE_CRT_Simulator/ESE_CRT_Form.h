#pragma once
#include <iostream>
#include <msclr\marshal.h>
#include "Connection.h"
										 /*
                                      Comandos
                                00000111-7   (Referenciar)
                                00001011-11  (Pintar)
                                00010011-19  (Codigo Verificacion)
                                         */
SerialPort sp;
unsigned contSeg;
namespace ESE_CRT_Simulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ESE_CRT_Form
	/// </summary>
	public ref class ESE_CRT_Form : public System::Windows::Forms::Form
	{
	public:
		ESE_CRT_Form(void)
		{
			InitializeComponent();
			tabControl1->Controls->Remove(tabPage2);
			contSeg=0;
			//
			//TODO: Add the constructor code here
			//
		}
		~ESE_CRT_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		 System::Windows::Forms::TabControl^  tabControl1;
		 System::Windows::Forms::TabPage^  tabPage1;
		 System::Windows::Forms::Button^  btn1;
		 System::Windows::Forms::TextBox^  tb2;
		 System::Windows::Forms::TextBox^  tb1;
		 System::Windows::Forms::Label^  label2;
		 System::Windows::Forms::Label^  label1;
		 System::Windows::Forms::CheckBox^  ch2;
		 System::Windows::Forms::CheckBox^  ch1;
		 Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
		 Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
		 msclr::interop::marshal_context context;
		 System::Windows::Forms::Button^  btn2;
		 System::Windows::Forms::TabPage^  tabPage2;
		 System::Windows::Forms::Button^  btn10;
		 System::Windows::Forms::Button^  btn11;
		 System::Windows::Forms::Button^  btn8;
		 System::Windows::Forms::Button^  btn9;
		 System::Windows::Forms::Button^  btn6;
		 System::Windows::Forms::Button^  btn7;
		 System::Windows::Forms::Button^  btn5;
		 System::Windows::Forms::Button^  btn4;
		 System::Windows::Forms::Label^  label6;
		 System::Windows::Forms::Label^  label5;
		 System::Windows::Forms::Label^  label4;
		 System::Windows::Forms::Label^  label3;
		 Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
		 Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
		 Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
		 System::Windows::Forms::TextBox^  tb3;
		 System::Windows::Forms::Button^  btn3;
		 System::Windows::Forms::CheckBox^  ch3;
	private: System::Windows::Forms::Label^  label7;

		 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ch2 = (gcnew System::Windows::Forms::CheckBox());
			this->ch1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->ch3 = (gcnew System::Windows::Forms::CheckBox());
			this->tb3 = (gcnew System::Windows::Forms::TextBox());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn10 = (gcnew System::Windows::Forms::Button());
			this->btn11 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(271, 264);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->ch2);
			this->tabPage1->Controls->Add(this->ch1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->btn1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->tb2);
			this->tabPage1->Controls->Add(this->tb1);
			this->tabPage1->Controls->Add(this->shapeContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(263, 238);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Main";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// ch2
			// 
			this->ch2->AutoSize = true;
			this->ch2->BackColor = System::Drawing::Color::Green;
			this->ch2->Checked = true;
			this->ch2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ch2->Cursor = System::Windows::Forms::Cursors::No;
			this->ch2->ForeColor = System::Drawing::Color::Black;
			this->ch2->Location = System::Drawing::Point(215, 141);
			this->ch2->Name = L"ch2";
			this->ch2->Size = System::Drawing::Size(15, 14);
			this->ch2->TabIndex = 9;
			this->ch2->UseVisualStyleBackColor = false;
			this->ch2->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::ch2_Click);
			// 
			// ch1
			// 
			this->ch1->AutoSize = true;
			this->ch1->BackColor = System::Drawing::Color::Green;
			this->ch1->Checked = true;
			this->ch1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ch1->Cursor = System::Windows::Forms::Cursors::No;
			this->ch1->ForeColor = System::Drawing::Color::Black;
			this->ch1->Location = System::Drawing::Point(215, 64);
			this->ch1->Name = L"ch1";
			this->ch1->Size = System::Drawing::Size(15, 14);
			this->ch1->TabIndex = 8;
			this->ch1->UseVisualStyleBackColor = false;
			this->ch1->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::ch1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 28);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Velocidad";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->Location = System::Drawing::Point(47, 176);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(170, 33);
			this->btn1->TabIndex = 4;
			this->btn1->Text = L"Conectar";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Puerto";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tb2
			// 
			this->tb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb2->Location = System::Drawing::Point(63, 138);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(134, 20);
			this->tb2->TabIndex = 1;
			this->tb2->Text = L"115200";
			this->tb2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tb2->TextChanged += gcnew System::EventHandler(this, &ESE_CRT_Form::tb2_TextChanged);
			// 
			// tb1
			// 
			this->tb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb1->Location = System::Drawing::Point(63, 61);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(134, 20);
			this->tb1->TabIndex = 0;
			this->tb1->Text = L"COM2";
			this->tb1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tb1->TextChanged += gcnew System::EventHandler(this, &ESE_CRT_Form::tb1_TextChanged);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(3, 3);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->rectangleShape1});
			this->shapeContainer1->Size = System::Drawing::Size(257, 232);
			this->shapeContainer1->TabIndex = 10;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->Location = System::Drawing::Point(16, 13);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(221, 204);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->ch3);
			this->tabPage2->Controls->Add(this->tb3);
			this->tabPage2->Controls->Add(this->btn3);
			this->tabPage2->Controls->Add(this->btn10);
			this->tabPage2->Controls->Add(this->btn11);
			this->tabPage2->Controls->Add(this->btn8);
			this->tabPage2->Controls->Add(this->btn9);
			this->tabPage2->Controls->Add(this->btn6);
			this->tabPage2->Controls->Add(this->btn7);
			this->tabPage2->Controls->Add(this->btn5);
			this->tabPage2->Controls->Add(this->btn4);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->btn2);
			this->tabPage2->Controls->Add(this->shapeContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(263, 238);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Simulator";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// ch3
			// 
			this->ch3->AutoSize = true;
			this->ch3->BackColor = System::Drawing::Color::Green;
			this->ch3->Checked = true;
			this->ch3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ch3->Cursor = System::Windows::Forms::Cursors::No;
			this->ch3->ForeColor = System::Drawing::Color::Black;
			this->ch3->Location = System::Drawing::Point(237, 87);
			this->ch3->Name = L"ch3";
			this->ch3->Size = System::Drawing::Size(15, 14);
			this->ch3->TabIndex = 16;
			this->ch3->UseVisualStyleBackColor = false;
			this->ch3->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::ch3_Click);
			// 
			// tb3
			// 
			this->tb3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb3->Location = System::Drawing::Point(143, 76);
			this->tb3->MaxLength = 8;
			this->tb3->Name = L"tb3";
			this->tb3->Size = System::Drawing::Size(88, 29);
			this->tb3->TabIndex = 15;
			this->tb3->Text = L"00000001";
			this->tb3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tb3->TextChanged += gcnew System::EventHandler(this, &ESE_CRT_Form::tb3_TextChanged_1);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(143, 128);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(109, 31);
			this->btn3->TabIndex = 14;
			this->btn3->Text = L"Enviar";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn3_Click);
			// 
			// btn10
			// 
			this->btn10->Location = System::Drawing::Point(78, 196);
			this->btn10->Name = L"btn10";
			this->btn10->Size = System::Drawing::Size(29, 20);
			this->btn10->TabIndex = 13;
			this->btn10->Text = L"+";
			this->btn10->UseVisualStyleBackColor = true;
			this->btn10->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn10_Click);
			// 
			// btn11
			// 
			this->btn11->Location = System::Drawing::Point(23, 196);
			this->btn11->Name = L"btn11";
			this->btn11->Size = System::Drawing::Size(29, 20);
			this->btn11->TabIndex = 12;
			this->btn11->Text = L"-";
			this->btn11->UseVisualStyleBackColor = true;
			this->btn11->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn11_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(78, 172);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(29, 20);
			this->btn8->TabIndex = 11;
			this->btn8->Text = L"+";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(23, 170);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(29, 20);
			this->btn9->TabIndex = 10;
			this->btn9->Text = L"-";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn9_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(78, 146);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(29, 20);
			this->btn6->TabIndex = 9;
			this->btn6->Text = L"+";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(23, 146);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(29, 20);
			this->btn7->TabIndex = 8;
			this->btn7->Text = L"-";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn7_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(23, 98);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(84, 34);
			this->btn5->TabIndex = 7;
			this->btn5->Text = L"Pintar";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(23, 56);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(84, 34);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"Referenciar";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(58, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Z";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"X";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"COM# Velocidad:#####";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(143, 195);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(107, 23);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"Desconectar";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &ESE_CRT_Form::btn2_Click);
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(0, 0);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(2) {this->rectangleShape3, 
				this->rectangleShape2});
			this->shapeContainer2->Size = System::Drawing::Size(263, 238);
			this->shapeContainer2->TabIndex = 1;
			this->shapeContainer2->TabStop = false;
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->Location = System::Drawing::Point(14, 47);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(102, 176);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->Location = System::Drawing::Point(135, 56);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(122, 122);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(243, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"v1.0,0";
			// 
			// ESE_CRT_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(290, 279);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tabControl1);
			this->MaximumSize = System::Drawing::Size(306, 318);
			this->MinimumSize = System::Drawing::Size(306, 318);
			this->Name = L"ESE_CRT_Form";
			this->Text = L"ESE_CRT_Form";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void Escenario0()
{
	tabControl1->Controls->Remove(tabPage2);
	tabControl1->Controls->Add(tabPage1);
}
void Escenario1()
{
	string s=sp.getChar();
	s+=":";
	s+=to_string(sp.getunsigned());
	label3->Text=gcnew String(s.c_str());
	tabControl1->Controls->Remove(tabPage1);
	tabControl1->Controls->Add(tabPage2);
	//label3->Text=gcnew String("Puerto Serie");
}
void EnviarC(const char*tb)
{
	unsigned multip=1,suma=0;
	for(int i=7;i>=0;i--)
	{
		if(tb[i]=='1')
			suma+=multip;
		multip*=2;
	}
	char c=suma;
	Enviar(c);
}
void Enviar(char c)
{
	if(c!=7)
		Seguridad();
	char cc[2];
	cc[0]=c;
	cc[1]=0;
	sp.Trasmitir(cc);
}
void Seguridad()
{
	if(++contSeg==10)
	{
		contSeg=0;
		char c=19;//00010011
		sp.Trasmitir(&c);
	}
}
///////////////////////////BTN////////////////////////////
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			sp.CloseConnection();
			const char*txb1=context.marshal_as<const char*>(tb1->Text);
			const char*txb2=context.marshal_as<const char*>(tb2->Text);
			sp.inicializa(txb1,atol(txb2));
			 if(!sp.Error())
			 {		 
				Escenario1();
			 }
			  else
			 {
				 System::Windows::Forms::MessageBox::Show(System::String(sp.ErrorStr()).ToString());
			 }
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
		sp.CloseConnection();
		Escenario0();
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			const char*txb1=context.marshal_as<const char*>(tb3->Text);
			EnviarC(txb1);	
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	contSeg=0;
	Enviar((char)7);
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	Enviar((char)11);
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	Enviar((char)129);
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	Enviar((char)(char)145);
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	Enviar((char)65);
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	Enviar((char)73);
}
private: System::Void btn10_Click(System::Object^  sender, System::EventArgs^  e) {
	Enviar((char)33);
}
private: System::Void btn11_Click(System::Object^  sender, System::EventArgs^  e) {
	Enviar((char)37);
}
///////////////////////////TB////////////////////////////
private: System::Void tb1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			ch1->Checked=false;
			this->ch1->BackColor = System::Drawing::Color::Transparent;
			//this->ch2->BackColor = System::Drawing::Color::Transparent;
			//checkBox1COMVelocidad->Checked=false;
			 try
			 { 
				if(tb1->Text->Length>3)		 
					 if(tb1->Text[0]=='C'||tb1->Text[0]=='c'||tb1->Text[1]=='O'||tb1->Text[1]=='o'||tb1->Text[2]=='M'||tb1->Text[2]=='m')
					 {
						for(unsigned i=3;i<(unsigned)tb1->Text->Length;i++)
						if(!isdigit(tb1->Text[i]))
						{
							throw(true);
						}
						ch1->Checked=true;
						this->ch1->BackColor = System::Drawing::Color::Green;	 
					}
				}catch(bool){}
				if(ch1->Checked )
					btn1->Enabled=true;
				else
					btn1->Enabled=false;
		 }	
private: System::Void tb2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			ch2->Checked=false;
			this->ch2->BackColor = System::Drawing::Color::Transparent;
			 try
			 {
				if(!tb2->Text->Length)
					throw(true);
				for(unsigned i=0;i<(unsigned)tb2->Text->Length;i++)
					if(!isdigit(tb2->Text[i]))
					{
						throw(true);
					}
				ch2->Checked=true;
				this->ch2->BackColor = System::Drawing::Color::Green;	
			}catch(bool){}
			if(ch2->Checked )
				btn1->Enabled=true;
			else
				btn1->Enabled=false;
		 }
private: System::Void tb3_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			ch3->Checked=false;
			ch3->BackColor = System::Drawing::Color::Transparent;
			try
			{
				if(tb3->Text->Length!=8)
					throw(true);
				bool Exit1=false;
				for(unsigned i=0;i<8;i++)
				{
					if(tb3->Text[i]=='1'&&!Exit1)
						Exit1=true;
					if(tb3->Text[i]!='1'&&tb3->Text[i]!='0')
						throw(true);
				}
				if(!Exit1)
					throw(true);
				if(tb3->Text[7]!='1')
					throw(true);
				this->ch3->Checked=true;
				this->ch3->BackColor = System::Drawing::Color::LightGreen;
			}catch(bool){}
			if(ch3->Checked)
			{
				btn2->Enabled=true;
			}
			else
			{
				btn2->Enabled=false;
			}

		 }
///////////////////////////CH////////////////////////////
private: System::Void ch3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ch3->Checked)
				ch3->Checked=false;
			else 
				ch3->Checked=true;
		 }
private: System::Void ch1_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(ch1->Checked)
				ch1->Checked=false;
			else 
				ch1->Checked=true;
		 }
private: System::Void ch2_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(ch2->Checked)
				ch2->Checked=false;
			else 
				ch2->Checked=true;
		 }




};
}
