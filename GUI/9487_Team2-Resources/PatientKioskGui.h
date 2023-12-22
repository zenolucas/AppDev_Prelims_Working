// Header that defines the standard input/output stream objects
#include <iostream>
// Input/output stream class to operate on files.
#include <fstream>
#include <string>

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
	/// Summary for PatientKioskGui
	/// </summary>
	public ref class PatientKioskGui : public System::Windows::Forms::Form
	{
	public:
		PatientKioskGui(void)
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
		~PatientKioskGui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnA;
	private: System::Windows::Forms::Button^ btnB;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnD;
	private: System::Windows::Forms::Button^ btnE;
	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ queueNum;
	private: System::Windows::Forms::Label^ label2;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientKioskGui::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->btnA = (gcnew System::Windows::Forms::Button());
            this->btnB = (gcnew System::Windows::Forms::Button());
            this->btnC = (gcnew System::Windows::Forms::Button());
            this->btnD = (gcnew System::Windows::Forms::Button());
            this->btnE = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->queueNum = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(3, 59);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(229, 234);
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // btnA
            // 
            this->btnA->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->btnA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnA->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnA->Location = System::Drawing::Point(267, 70);
            this->btnA->Name = L"btnA";
            this->btnA->Size = System::Drawing::Size(165, 45);
            this->btnA->TabIndex = 1;
            this->btnA->Text = L"Clinic A";
            this->btnA->UseVisualStyleBackColor = false;
            this->btnA->Click += gcnew System::EventHandler(this, &PatientKioskGui::btnB_Click);
            // 
            // btnB
            // 
            this->btnB->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->btnB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnB->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnB->Location = System::Drawing::Point(442, 70);
            this->btnB->Name = L"btnB";
            this->btnB->Size = System::Drawing::Size(165, 45);
            this->btnB->TabIndex = 2;
            this->btnB->Text = L"Clinic B";
            this->btnB->UseVisualStyleBackColor = false;
            this->btnB->Click += gcnew System::EventHandler(this, &PatientKioskGui::btnB_Click);
            // 
            // btnC
            // 
            this->btnC->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnC->Location = System::Drawing::Point(267, 131);
            this->btnC->Name = L"btnC";
            this->btnC->Size = System::Drawing::Size(165, 45);
            this->btnC->TabIndex = 3;
            this->btnC->Text = L"Clinic C";
            this->btnC->UseVisualStyleBackColor = false;
            this->btnC->Click += gcnew System::EventHandler(this, &PatientKioskGui::btnC_Click);
            // 
            // btnD
            // 
            this->btnD->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->btnD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnD->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnD->Location = System::Drawing::Point(442, 131);
            this->btnD->Name = L"btnD";
            this->btnD->Size = System::Drawing::Size(165, 45);
            this->btnD->TabIndex = 4;
            this->btnD->Text = L"Clinic D";
            this->btnD->UseVisualStyleBackColor = false;
            this->btnD->Click += gcnew System::EventHandler(this, &PatientKioskGui::btnD_Click);
            // 
            // btnE
            // 
            this->btnE->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->btnE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnE->Location = System::Drawing::Point(355, 192);
            this->btnE->Name = L"btnE";
            this->btnE->Size = System::Drawing::Size(165, 45);
            this->btnE->TabIndex = 5;
            this->btnE->Text = L"Clinic E";
            this->btnE->UseVisualStyleBackColor = false;
            this->btnE->Click += gcnew System::EventHandler(this, &PatientKioskGui::btnE_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(276, 24);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(331, 24);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Which Clinic would you like to go\?";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::Info;
            this->panel1->Controls->Add(this->queueNum);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Location = System::Drawing::Point(259, 248);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(348, 107);
            this->panel1->TabIndex = 7;
            // 
            // queueNum
            // 
            this->queueNum->AutoSize = true;
            this->queueNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->queueNum->Location = System::Drawing::Point(29, 27);
            this->queueNum->Name = L"queueNum";
            this->queueNum->Size = System::Drawing::Size(296, 73);
            this->queueNum->TabIndex = 1;
            this->queueNum->Text = L"XXXXXX";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(4, 5);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(133, 16);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Your Queue Number:";
            // 
            // PatientKioskGui
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(634, 361);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btnE);
            this->Controls->Add(this->btnD);
            this->Controls->Add(this->btnC);
            this->Controls->Add(this->btnB);
            this->Controls->Add(this->btnA);
            this->Controls->Add(this->pictureBox1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"PatientKioskGui";
            this->Text = L"Vocal Queueing System";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }



#pragma endregion
private: System::Void btnE_Click(System::Object^ sender, System::EventArgs^ e) {
	queueClinic("E");
}

private: System::Void btnA_Click(System::Object^ sender, System::EventArgs^ e) {
	queueClinic("A");
}

private: System::Void btnB_Click(System::Object^ sender, System::EventArgs^ e) {
	queueClinic("B");
}

private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	queueClinic("C");
}

private: System::Void btnD_Click(System::Object^ sender, System::EventArgs^ e) {
	queueClinic("D");
}

void queueClinic(string clinicPostfix)
{
    
    // READ txt file for corresponding clinic
    string fileLocation = "Resource Files/database/clinic_" + clinicPostfix + ".txt";
    // ifstream filereader{fileLocation};
    ifstream filereader;
    filereader.open(fileLocation);

    // to handle errors if file cannot be opened.
    if (!filereader)
    {
        cerr << "file could not be opened." << endl;
    }

    // first check if file is empty
    if (filereader.peek() == std::ifstream::traits_type::eof())
    {
        // if txt file is empty, generate first queue number (e.g. AQ0001)
		std::string queueNumber = clinicPostfix + "Q0001";
     
        // write first queue number to the txt file
        ofstream filewriter{fileLocation};
        filewriter << queueNumber;
        filewriter.close();
        System::String^q = gcnew System::String(queueNumber.c_str());
		
        this->queueNum->Refresh(); 
        queueNum -> Text = q;
       
    }
    else
    {
        // get last line
        string line;
        while (filereader)
        {
            getline(filereader, line);
        }

        // extract last integer from last line/queue
        int lastDigits;
        int delimiterIndex = line.find("Q");
        string stringDigits = line.substr(delimiterIndex + 1);
        // convert string queueNumber to int
        lastDigits = stoi(stringDigits);
        // increment queueNumber
        lastDigits++;

        // convert int queueNumber to string queueNumber (e.g. 3 becomes AQ0003)
        stringDigits = to_string(lastDigits);
        string queueNumber = "";
        while (stringDigits.length() != 4)
        {
            stringDigits = "0" + stringDigits;
        }
        queueNumber = clinicPostfix + "Q" + stringDigits;

        // write queueNumber to txt file
        ofstream filewriter{fileLocation, ios::app};

        // handle errors when opening txt file
        if (!filewriter)
        {
            // Print an error and exit
            cerr << "Uh oh, database could not be opened for writing!\n";
        }

        if (filereader.is_open())
        {
            filewriter << "\n"
                       << queueNumber;
        }
        cout << "your queue number is " << queueNumber << endl;
    }
}

};


}

