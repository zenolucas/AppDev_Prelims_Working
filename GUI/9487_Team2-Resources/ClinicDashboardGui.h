#pragma once

namespace My9487Team2Resources {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClinicDashboardGui
	/// </summary>
	public ref class ClinicDashboardGui : public System::Windows::Forms::Form
	{
	public:
		ClinicDashboardGui(void)
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
		~ClinicDashboardGui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lblQueue;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnAnnounce;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Button^ btnLogout;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClinicDashboardGui::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblQueue = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnAnnounce = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
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
			this->panel1->TabIndex = 1;
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
			this->lblUser->Text = L"Clinic X";
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->Controls->Add(this->lblQueue);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(320, 97);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(303, 215);
			this->panel2->TabIndex = 2;
			// 
			// lblQueue
			// 
			this->lblQueue->AutoSize = true;
			this->lblQueue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 44.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQueue->Location = System::Drawing::Point(21, 80);
			this->lblQueue->Name = L"lblQueue";
			this->lblQueue->Size = System::Drawing::Size(0, 67);
			this->lblQueue->TabIndex = 1;
			this->lblQueue->Text = L"XXXXXX";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 25);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(207, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"CURRENT QUEUE";
			// 
			// btnAnnounce
			// 
			this->btnAnnounce->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnAnnounce->Location = System::Drawing::Point(13, 97);
			this->btnAnnounce->Name = L"btnAnnounce";
			this->btnAnnounce->Size = System::Drawing::Size(287, 59);
			this->btnAnnounce->TabIndex = 3;
			this->btnAnnounce->Text = L"ANNOUNCE QUEUE";
			this->btnAnnounce->UseVisualStyleBackColor = false;
			this->btnAnnounce->Click += gcnew System::EventHandler(this, &ClinicDashboardGui::btnAnnounce_Click);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnNext->Location = System::Drawing::Point(12, 177);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(287, 59);
			this->btnNext->TabIndex = 4;
			this->btnNext->Text = L"NEXT QUEUE";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &ClinicDashboardGui::btnNext_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Location = System::Drawing::Point(13, 324);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnLogout->Size = System::Drawing::Size(103, 31);
			this->btnLogout->TabIndex = 5;
			this->btnLogout->Text = L"LOGOUT";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &ClinicDashboardGui::btnLogout_Click);
			// 
			// ClinicDashboardGui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 361);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnAnnounce);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"ClinicDashboardGui";
			this->Text = L"Vocal Queueing System";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAnnounce_Click(System::Object^ sender, System::EventArgs^ e) {
		choice -> "1";
	}
	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		choice -> "2";
	}
	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
