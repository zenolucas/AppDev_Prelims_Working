#include <fstream>
#include <vector>
#include <string> 
#include <sstream> 
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
	/// Summary for AdminDashboardGui
	/// </summary>
	public ref class AdminDashboardGui : public System::Windows::Forms::Form
	{
	public:
		AdminDashboardGui(void)
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
		~AdminDashboardGui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnLogout;


	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtDeleteUser;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ label5;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboardGui::typeid));
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtDeleteUser = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->lblUser);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(612, 68);
			this->panel1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(152, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"What would you like to do\?";
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUser->Location = System::Drawing::Point(209, 14);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(0, 24);
			this->lblUser->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(152, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hello!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(138, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnLogout
			// 
			this->btnLogout->Location = System::Drawing::Point(13, 324);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnLogout->Size = System::Drawing::Size(103, 31);
			this->btnLogout->TabIndex = 8;
			this->btnLogout->Text = L"LOGOUT";
			this->btnLogout->UseVisualStyleBackColor = true;
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnRegister->Location = System::Drawing::Point(0, 150);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(257, 36);
			this->btnRegister->TabIndex = 6;
			this->btnRegister->Text = L"REGISTER USER";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &AdminDashboardGui::btnRegister_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(1, 24);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(257, 26);
			this->txtUsername->TabIndex = 9;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(0, 80);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(257, 26);
			this->txtPassword->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Password";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->txtPassword);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->btnRegister);
			this->panel2->Controls->Add(this->txtUsername);
			this->panel2->Location = System::Drawing::Point(49, 84);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 186);
			this->panel2->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Info;
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->txtDeleteUser);
			this->panel3->Location = System::Drawing::Point(326, 242);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(257, 106);
			this->panel3->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Username";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Location = System::Drawing::Point(0, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 36);
			this->button1->TabIndex = 6;
			this->button1->Text = L"DELETE USER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminDashboardGui::button1_Click);
			// 
			// txtDeleteUser
			// 
			this->txtDeleteUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDeleteUser->Location = System::Drawing::Point(1, 24);
			this->txtDeleteUser->Name = L"txtDeleteUser";
			this->txtDeleteUser->Size = System::Drawing::Size(257, 26);
			this->txtDeleteUser->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel4->Controls->Add(this->listView1);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Location = System::Drawing::Point(327, 84);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(256, 148);
			this->panel4->TabIndex = 15;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(12, 28);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(230, 104);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Existing Users:";
			// 
			// AdminDashboardGui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 361);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminDashboardGui";
			this->Text = L"Vocal Queueing System";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string user;
		std::string pass;
		string clinicPrefix;

		String^ user = this->txtUsername->Text;
		String^ pass = this->txtPassword->Text;

		registerUser(user, pass, clinicPrefix);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string uname;
		String^ uname = this->txtDeleteUser->Text;
		deleteUser(uname);
	}
	void showExistingUsers() {
		ifstream filereader{ "Resource Files/database/users.txt" };
		string line;
		vector<string> username;
		vector<string> clinicName;

		while (filereader)
		{
			// get line of string "user1,pass,clinic_A"
			getline(filereader, line);

			// to store an element separated by a comma in the string
			string element;
			stringstream ss(line);

			if (ss.good())
			{
				// get username of staff
				getline(ss, element, ',');
				username.push_back(element);

				// skip next element (password)
				getline(ss, element, ',');

				// get clinic name assigned to staff
				getline(ss, element, ',');
				clinicName.push_back(element);
			}
			else
			{
				cerr << "something went wrong while reading the file" << endl;
			}
		}

		// to handle bug that appends an extra line to the vector arrays
		username.pop_back();
		clinicName.pop_back();

		// to print the staffs and corresponding clinics
		cout << "\n[existing users]" << endl;
		for (int i = 0; i < username.size(); i++)
		{
			cout << "Name: " << username[i] << " Clinic: " << clinicName[i] << endl;
		}
	}
};
}
