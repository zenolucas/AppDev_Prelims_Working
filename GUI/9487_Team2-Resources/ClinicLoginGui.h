#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include <chrono> 
#include <thread> 
#include "ClinicDashboardGui.h"
#include "ClinicDashboardGui.cpp"

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
	/// Summary for ClinicLoginGui
	/// </summary>
	public ref class ClinicLoginGui : public System::Windows::Forms::Form
	{
	public:
		ClinicLoginGui(void)
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
		~ClinicLoginGui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClinicLoginGui::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel1->Controls->Add(this->btnLogin);
			this->panel1->Controls->Add(this->txtPassword);
			this->panel1->Controls->Add(this->txtUsername);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(282, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(317, 281);
			this->panel1->TabIndex = 4;
			// 
			// btnLogin
			// 
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(96, 211);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(123, 37);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &ClinicLoginGui::btnLogin_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(33, 142);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(251, 26);
			this->txtPassword->TabIndex = 4;
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(33, 71);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(251, 26);
			this->txtUsername->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(224, 268);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// ClinicLoginGui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 361);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ClinicLoginGui";
			this->Text = L"Vocal Queueing System";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string username;
		std::string password;
		string clinicPrefix;

		String^ username = this->txtUsername->Text;
		String^ password = this->txtPassword->Text;

		if (login(username, password, clinicPrefix))
		{
			MessageBox::Show("Login Succesful!", "Login", MessageBoxButtons::OK);
			// onto dashboard
			this->txtUsername->Refresh();
			this->txtPassword->Refresh();
			ClinicDashboardGui^ second = gcnew ClinicDashboardGui();
			second->Show();
			
			dashboard(username, clinicPrefix);
		}
	}

		  bool login(string username, string password, string& clinicPostfix)
		   {
			   // onto checking matches in database
			   ifstream filereader{ "Resource Files/database/users.txt" };

			   if (!filereader)
			   {
				   cerr << "error. could not open file for reading." << endl;
				   return false;
			   }

			   while (filereader)
			   {
				   string line;
				   getline(filereader, line);

				   // to store each element separated by comma in the csv line
				   string element;

				   // string vector to store csv values
				   vector<string> v;
				   stringstream ss(line);

				   while (ss.good())
				   {
					   // get first element (username)
					   getline(ss, element, ',');
					   if (username == element)
					   {
						   // if username matches, then check password.
						   // get next element (password)
						   getline(ss, element, ',');
						   if (password == element)
						   {
							   // if password matches, change value at memory address of clinicPrefix
							   getline(ss, clinicPostfix, ',');
							   // get postfix value
							   clinicPostfix = clinicPostfix.substr(clinicPostfix.find("_") + 1);
							   return true;
						   }
					   }
					   else
					   {
						   break;
					   }
				   }
			   }
			   MessageBox::Show("Wrong Username or Password!", "Login Error", MessageBoxButtons::OK);
			   this->txtUsername->Refresh();
			   this->txtPassword->Refresh();
			   return false;
		   }

};
}
