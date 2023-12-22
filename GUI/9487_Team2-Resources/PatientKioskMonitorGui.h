#include <string>
#include <fstream>  
#include <iostream>

using namespace std;
#pragma once

namespace My9487Team2Resources {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PatientKioskMonitorGui
	/// </summary>
	public ref class PatientKioskMonitorGui : public System::Windows::Forms::Form
	{
	public:
		PatientKioskMonitorGui(void)
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
		~PatientKioskMonitorGui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ patientNum;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ clinicName;
	private: System::Windows::Forms::Panel^ panel1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientKioskMonitorGui::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->patientNum = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->clinicName = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(321, 319);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &PatientKioskMonitorGui::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(429, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CURRENT";
			this->label1->Click += gcnew System::EventHandler(this, &PatientKioskMonitorGui::label1_Click);
			// 
			// patientNum
			// 
			this->patientNum->AutoSize = true;
			this->patientNum->BackColor = System::Drawing::SystemColors::Info;
			this->patientNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->patientNum->Location = System::Drawing::Point(336, 85);
			this->patientNum->Name = L"patientNum";
			this->patientNum->Size = System::Drawing::Size(0, 73);
			this->patientNum->TabIndex = 2;
			this->patientNum->Click += gcnew System::EventHandler(this, &PatientKioskMonitorGui::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(75, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PROCEED TO";
			this->label3->Click += gcnew System::EventHandler(this, &PatientKioskMonitorGui::label3_Click);
			// 
			// clinicName
			// 
			this->clinicName->AutoSize = true;
			this->clinicName->BackColor = System::Drawing::SystemColors::Info;
			this->clinicName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clinicName->Location = System::Drawing::Point(85, 56);
			this->clinicName->Name = L"clinicName";
			this->clinicName->Size = System::Drawing::Size(0, 31);
			this->clinicName->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->Controls->Add(this->clinicName);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(339, 202);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 132);
			this->panel1->TabIndex = 5;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PatientKioskMonitorGui::panel1_Paint);
			// 
			// PatientKioskMonitorGui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 361);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->patientNum);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PatientKioskMonitorGui";
			this->Text = L"Vocal Queueing System";
			this->Load += gcnew System::EventHandler(this, &PatientKioskMonitorGui::PatientKioskMonitorGui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PatientKioskMonitorGui_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
