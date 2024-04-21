#pragma once
#include "ResultPage.h"
#include "ParkingCitations.h"
#include "MultiSort.h"

namespace Project3 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MainPage : public System::Windows::Forms::Form
    {
    public:
        MainPage(void)
        {
            InitializeComponent();
            inputName = "";
            String^ inputplateNumber = PlateNumberTextbox->Text;
            inputstate = StateTextbox->Text;
            inputcarMake = CarMakeTextbox->Text;
            inputcarStyle = CarStyleTextbox->Text;
            inputcolor = ColorTextbox->Text;
            inputLocation = LocationTextbox->Text;
            inputViolation = ViolationTextbox->Text;
            inputFine = FineTextbox->Text;
            inputYear = YearTextbox->Text;
            inputMonth = MonthTextbox->Text;
            inputDay = DayTextbox->Text;
            inputHour = HourTextbox->Text;
            inputMinute = MinuteTextbox->Text;
        }

        MainPage(String^ name)
        {
            InitializeComponent();
            inputName = name;
            UpdateWelcomePanelText();
            inputplateNumber = PlateNumberTextbox->Text;
            inputstate = StateTextbox->Text;
            inputcarMake = CarMakeTextbox->Text;
            inputcarStyle = CarStyleTextbox->Text;
            inputcolor = ColorTextbox->Text;
            inputLocation = LocationTextbox->Text;
            inputViolation = ViolationTextbox->Text;
            inputFine = FineTextbox->Text;
            inputYear = YearTextbox->Text;
            inputMonth = MonthTextbox->Text;
            inputDay = DayTextbox->Text;
            inputHour = HourTextbox->Text;
            inputMinute = MinuteTextbox->Text;
            mergeTime = 0.0;
            quickTime = 0.0;
            numCitations = 0.0;
        }

    protected:


           ~MainPage()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ WelcomePanel;
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ PlateNumberLabel;
    private: System::Windows::Forms::Label^ MinuteLabel;
    private: System::Windows::Forms::Label^ StateLabel;
    private: System::Windows::Forms::Label^ CarMakeLabel;
    private: System::Windows::Forms::Label^ CarStyleLabel;
    private: System::Windows::Forms::Label^ ViolationLabel;
    private: System::Windows::Forms::Label^ ColorLabel;
    private: System::Windows::Forms::Label^ FineLabel;
    private: System::Windows::Forms::Label^ MonthLabel;
    private: System::Windows::Forms::Label^ LocationLabel;
    private: System::Windows::Forms::Label^ DayLabel;
    private: System::Windows::Forms::Label^ YearLabel;
    private: System::Windows::Forms::Label^ HourLabel;
    private: System::Windows::Forms::TextBox^ PlateNumberTextbox;
    private: System::Windows::Forms::TextBox^ CarMakeTextbox;
    private: System::Windows::Forms::TextBox^ StateTextbox;
    private: System::Windows::Forms::TextBox^ LocationTextbox;
    private: System::Windows::Forms::TextBox^ ColorTextbox;
    private: System::Windows::Forms::TextBox^ CarStyleTextbox;
    private: System::Windows::Forms::TextBox^ HourTextbox;
    private: System::Windows::Forms::TextBox^ DayTextbox;
    private: System::Windows::Forms::TextBox^ MonthTextbox;
    private: System::Windows::Forms::TextBox^ YearTextbox;
    private: System::Windows::Forms::TextBox^ FineTextbox;
    private: System::Windows::Forms::TextBox^ MinuteTextbox;
    private: System::Windows::Forms::TextBox^ ViolationTextbox;
    private: System::Windows::Forms::Label^ PlateNumberEXLabel;
    private: System::Windows::Forms::Label^ StateEXLabel;
    private: System::Windows::Forms::Label^ CarMakeEXLabel;
    private: System::Windows::Forms::Label^ CarStyleEXLabel;
    private: System::Windows::Forms::Label^ ColorEXLabel;
    private: System::Windows::Forms::Label^ LocationEXLabel;
    private: System::Windows::Forms::Label^ ViolationEXLabel;
    private: System::Windows::Forms::Label^ FineEXLabel;
    private: System::Windows::Forms::Label^ YearEXLabel;
    private: System::Windows::Forms::Label^ MonthEXLabel;
    private: System::Windows::Forms::Label^ DayEXLabel;
    private: System::Windows::Forms::Label^ HourEXLabel;
    private: System::Windows::Forms::Label^ MinuteEXLabel;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ MemePictureBox;
    private: System::Windows::Forms::Button^ SelectionConfirmButton;


    // initializes each component. done automatically in Winforms
    void InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
        this->WelcomePanel = (gcnew System::Windows::Forms::Label());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->PlateNumberLabel = (gcnew System::Windows::Forms::Label());
        this->StateLabel = (gcnew System::Windows::Forms::Label());
        this->CarMakeLabel = (gcnew System::Windows::Forms::Label());
        this->CarStyleLabel = (gcnew System::Windows::Forms::Label());
        this->ViolationLabel = (gcnew System::Windows::Forms::Label());
        this->ColorLabel = (gcnew System::Windows::Forms::Label());
        this->FineLabel = (gcnew System::Windows::Forms::Label());
        this->MonthLabel = (gcnew System::Windows::Forms::Label());
        this->LocationLabel = (gcnew System::Windows::Forms::Label());
        this->DayLabel = (gcnew System::Windows::Forms::Label());
        this->YearLabel = (gcnew System::Windows::Forms::Label());
        this->HourLabel = (gcnew System::Windows::Forms::Label());
        this->PlateNumberTextbox = (gcnew System::Windows::Forms::TextBox());
        this->MinuteLabel = (gcnew System::Windows::Forms::Label());
        this->CarMakeTextbox = (gcnew System::Windows::Forms::TextBox());
        this->StateTextbox = (gcnew System::Windows::Forms::TextBox());
        this->LocationTextbox = (gcnew System::Windows::Forms::TextBox());
        this->ColorTextbox = (gcnew System::Windows::Forms::TextBox());
        this->CarStyleTextbox = (gcnew System::Windows::Forms::TextBox());
        this->HourTextbox = (gcnew System::Windows::Forms::TextBox());
        this->DayTextbox = (gcnew System::Windows::Forms::TextBox());
        this->MonthTextbox = (gcnew System::Windows::Forms::TextBox());
        this->YearTextbox = (gcnew System::Windows::Forms::TextBox());
        this->FineTextbox = (gcnew System::Windows::Forms::TextBox());
        this->MinuteTextbox = (gcnew System::Windows::Forms::TextBox());
        this->ViolationTextbox = (gcnew System::Windows::Forms::TextBox());
        this->PlateNumberEXLabel = (gcnew System::Windows::Forms::Label());
        this->StateEXLabel = (gcnew System::Windows::Forms::Label());
        this->CarMakeEXLabel = (gcnew System::Windows::Forms::Label());
        this->CarStyleEXLabel = (gcnew System::Windows::Forms::Label());
        this->ColorEXLabel = (gcnew System::Windows::Forms::Label());
        this->LocationEXLabel = (gcnew System::Windows::Forms::Label());
        this->ViolationEXLabel = (gcnew System::Windows::Forms::Label());
        this->FineEXLabel = (gcnew System::Windows::Forms::Label());
        this->YearEXLabel = (gcnew System::Windows::Forms::Label());
        this->MonthEXLabel = (gcnew System::Windows::Forms::Label());
        this->DayEXLabel = (gcnew System::Windows::Forms::Label());
        this->HourEXLabel = (gcnew System::Windows::Forms::Label());
        this->MinuteEXLabel = (gcnew System::Windows::Forms::Label());
        this->SelectionConfirmButton = (gcnew System::Windows::Forms::Button());
        this->MemePictureBox = (gcnew System::Windows::Forms::PictureBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemePictureBox))->BeginInit();
        this->SuspendLayout();
        // 
        // WelcomePanel
        // 
        this->WelcomePanel->AutoSize = true;
        this->WelcomePanel->BackColor = System::Drawing::Color::Transparent;
        this->WelcomePanel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.2F));
        this->WelcomePanel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->WelcomePanel->Location = System::Drawing::Point(58, 35);
        this->WelcomePanel->Name = L"WelcomePanel";
        this->WelcomePanel->Size = System::Drawing::Size(124, 46);
        this->WelcomePanel->TabIndex = 1;
        this->WelcomePanel->Text = L"Hi user";
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::Color::Transparent;
        this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->label1->Location = System::Drawing::Point(76, 104);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(906, 23);
        this->label1->TabIndex = 2;
        this->label1->Text = L"Please enter the name of the attribute you would like to search by in the accordi"
            L"ng textboxes. Examples are provided.";
        // 
        // PlateNumberLabel
        // 
        this->PlateNumberLabel->AutoSize = true;
        this->PlateNumberLabel->BackColor = System::Drawing::Color::Transparent;
        this->PlateNumberLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->PlateNumberLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->PlateNumberLabel->Location = System::Drawing::Point(104, 205);
        this->PlateNumberLabel->Name = L"PlateNumberLabel";
        this->PlateNumberLabel->Size = System::Drawing::Size(116, 23);
        this->PlateNumberLabel->TabIndex = 3;
        this->PlateNumberLabel->Text = L"Plate Number";
        // 
        // StateLabel
        // 
        this->StateLabel->AutoSize = true;
        this->StateLabel->BackColor = System::Drawing::Color::Transparent;
        this->StateLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->StateLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->StateLabel->Location = System::Drawing::Point(104, 254);
        this->StateLabel->Name = L"StateLabel";
        this->StateLabel->Size = System::Drawing::Size(48, 23);
        this->StateLabel->TabIndex = 4;
        this->StateLabel->Text = L"State";
        // 
        // CarMakeLabel
        // 
        this->CarMakeLabel->AutoSize = true;
        this->CarMakeLabel->BackColor = System::Drawing::Color::Transparent;
        this->CarMakeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->CarMakeLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->CarMakeLabel->Location = System::Drawing::Point(104, 299);
        this->CarMakeLabel->Name = L"CarMakeLabel";
        this->CarMakeLabel->Size = System::Drawing::Size(82, 23);
        this->CarMakeLabel->TabIndex = 5;
        this->CarMakeLabel->Text = L"Car Make";
        // 
        // CarStyleLabel
        // 
        this->CarStyleLabel->AutoSize = true;
        this->CarStyleLabel->BackColor = System::Drawing::Color::Transparent;
        this->CarStyleLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->CarStyleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->CarStyleLabel->Location = System::Drawing::Point(104, 348);
        this->CarStyleLabel->Name = L"CarStyleLabel";
        this->CarStyleLabel->Size = System::Drawing::Size(76, 23);
        this->CarStyleLabel->TabIndex = 6;
        this->CarStyleLabel->Text = L"Car Style";
        // 
        // ViolationLabel
        // 
        this->ViolationLabel->AutoSize = true;
        this->ViolationLabel->BackColor = System::Drawing::Color::Transparent;
        this->ViolationLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->ViolationLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->ViolationLabel->Location = System::Drawing::Point(104, 493);
        this->ViolationLabel->Name = L"ViolationLabel";
        this->ViolationLabel->Size = System::Drawing::Size(78, 23);
        this->ViolationLabel->TabIndex = 12;
        this->ViolationLabel->Text = L"Violation";
        // 
        // ColorLabel
        // 
        this->ColorLabel->AutoSize = true;
        this->ColorLabel->BackColor = System::Drawing::Color::Transparent;
        this->ColorLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->ColorLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->ColorLabel->Location = System::Drawing::Point(104, 399);
        this->ColorLabel->Name = L"ColorLabel";
        this->ColorLabel->Size = System::Drawing::Size(51, 23);
        this->ColorLabel->TabIndex = 7;
        this->ColorLabel->Text = L"Color";
        // 
        // FineLabel
        // 
        this->FineLabel->AutoSize = true;
        this->FineLabel->BackColor = System::Drawing::Color::Transparent;
        this->FineLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->FineLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->FineLabel->Location = System::Drawing::Point(508, 205);
        this->FineLabel->Name = L"FineLabel";
        this->FineLabel->Size = System::Drawing::Size(41, 23);
        this->FineLabel->TabIndex = 13;
        this->FineLabel->Text = L"Fine";
        // 
        // MonthLabel
        // 
        this->MonthLabel->AutoSize = true;
        this->MonthLabel->BackColor = System::Drawing::Color::Transparent;
        this->MonthLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->MonthLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->MonthLabel->Location = System::Drawing::Point(507, 299);
        this->MonthLabel->Name = L"MonthLabel";
        this->MonthLabel->Size = System::Drawing::Size(61, 23);
        this->MonthLabel->TabIndex = 9;
        this->MonthLabel->Text = L"Month";
        // 
        // LocationLabel
        // 
        this->LocationLabel->AutoSize = true;
        this->LocationLabel->BackColor = System::Drawing::Color::Transparent;
        this->LocationLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->LocationLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->LocationLabel->Location = System::Drawing::Point(104, 444);
        this->LocationLabel->Name = L"LocationLabel";
        this->LocationLabel->Size = System::Drawing::Size(75, 23);
        this->LocationLabel->TabIndex = 8;
        this->LocationLabel->Text = L"Location";
        // 
        // DayLabel
        // 
        this->DayLabel->AutoSize = true;
        this->DayLabel->BackColor = System::Drawing::Color::Transparent;
        this->DayLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->DayLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->DayLabel->Location = System::Drawing::Point(507, 348);
        this->DayLabel->Name = L"DayLabel";
        this->DayLabel->Size = System::Drawing::Size(39, 23);
        this->DayLabel->TabIndex = 10;
        this->DayLabel->Text = L"Day";
        // 
        // YearLabel
        // 
        this->YearLabel->AutoSize = true;
        this->YearLabel->BackColor = System::Drawing::Color::Transparent;
        this->YearLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->YearLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->YearLabel->Location = System::Drawing::Point(508, 254);
        this->YearLabel->Name = L"YearLabel";
        this->YearLabel->Size = System::Drawing::Size(42, 23);
        this->YearLabel->TabIndex = 14;
        this->YearLabel->Text = L"Year";
        // 
        // HourLabel
        // 
        this->HourLabel->AutoSize = true;
        this->HourLabel->BackColor = System::Drawing::Color::Transparent;
        this->HourLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->HourLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->HourLabel->Location = System::Drawing::Point(507, 399);
        this->HourLabel->Name = L"HourLabel";
        this->HourLabel->Size = System::Drawing::Size(48, 23);
        this->HourLabel->TabIndex = 11;
        this->HourLabel->Text = L"Hour";
        // 
        // PlateNumberTextbox
        // 
        this->PlateNumberTextbox->BackColor = System::Drawing::Color::White;
        this->PlateNumberTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->PlateNumberTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->PlateNumberTextbox->ForeColor = System::Drawing::Color::Black;
        this->PlateNumberTextbox->Location = System::Drawing::Point(251, 209);
        this->PlateNumberTextbox->MaxLength = 50;
        this->PlateNumberTextbox->Name = L"PlateNumberTextbox";
        this->PlateNumberTextbox->Size = System::Drawing::Size(133, 19);
        this->PlateNumberTextbox->TabIndex = 15;
        // 
        // MinuteLabel
        // 
        this->MinuteLabel->AutoSize = true;
        this->MinuteLabel->BackColor = System::Drawing::Color::Transparent;
        this->MinuteLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
        this->MinuteLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->MinuteLabel->Location = System::Drawing::Point(508, 442);
        this->MinuteLabel->Name = L"MinuteLabel";
        this->MinuteLabel->Size = System::Drawing::Size(64, 23);
        this->MinuteLabel->TabIndex = 27;
        this->MinuteLabel->Text = L"Minute";
        // 
        // CarMakeTextbox
        // 
        this->CarMakeTextbox->BackColor = System::Drawing::Color::White;
        this->CarMakeTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->CarMakeTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->CarMakeTextbox->ForeColor = System::Drawing::Color::Black;
        this->CarMakeTextbox->Location = System::Drawing::Point(251, 301);
        this->CarMakeTextbox->MaxLength = 50;
        this->CarMakeTextbox->Name = L"CarMakeTextbox";
        this->CarMakeTextbox->Size = System::Drawing::Size(133, 19);
        this->CarMakeTextbox->TabIndex = 17;
        this->CarMakeTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::AlphaOnlyKeyPress);
        // 
        // StateTextbox
        // 
        this->StateTextbox->BackColor = System::Drawing::Color::White;
        this->StateTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->StateTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->StateTextbox->ForeColor = System::Drawing::Color::Black;
        this->StateTextbox->Location = System::Drawing::Point(251, 256);
        this->StateTextbox->MaxLength = 2;
        this->StateTextbox->Name = L"StateTextbox";
        this->StateTextbox->Size = System::Drawing::Size(133, 19);
        this->StateTextbox->TabIndex = 16;
        this->StateTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::AlphaOnlyKeyPress);
        // 
        // LocationTextbox
        // 
        this->LocationTextbox->BackColor = System::Drawing::Color::White;
        this->LocationTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->LocationTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->LocationTextbox->ForeColor = System::Drawing::Color::Black;
        this->LocationTextbox->Location = System::Drawing::Point(251, 446);
        this->LocationTextbox->MaxLength = 50;
        this->LocationTextbox->Name = L"LocationTextbox";
        this->LocationTextbox->Size = System::Drawing::Size(133, 19);
        this->LocationTextbox->TabIndex = 31;
        // 
        // ColorTextbox
        // 
        this->ColorTextbox->BackColor = System::Drawing::Color::White;
        this->ColorTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->ColorTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->ColorTextbox->ForeColor = System::Drawing::Color::Black;
        this->ColorTextbox->Location = System::Drawing::Point(251, 401);
        this->ColorTextbox->MaxLength = 50;
        this->ColorTextbox->Name = L"ColorTextbox";
        this->ColorTextbox->Size = System::Drawing::Size(133, 19);
        this->ColorTextbox->TabIndex = 30;
        this->ColorTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::AlphaOnlyKeyPress);
        // 
        // CarStyleTextbox
        // 
        this->CarStyleTextbox->BackColor = System::Drawing::Color::White;
        this->CarStyleTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->CarStyleTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->CarStyleTextbox->ForeColor = System::Drawing::Color::Black;
        this->CarStyleTextbox->Location = System::Drawing::Point(251, 352);
        this->CarStyleTextbox->MaxLength = 50;
        this->CarStyleTextbox->Name = L"CarStyleTextbox";
        this->CarStyleTextbox->Size = System::Drawing::Size(133, 19);
        this->CarStyleTextbox->TabIndex = 29;
        // 
        // HourTextbox
        // 
        this->HourTextbox->BackColor = System::Drawing::Color::White;
        this->HourTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->HourTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->HourTextbox->ForeColor = System::Drawing::Color::Black;
        this->HourTextbox->Location = System::Drawing::Point(607, 399);
        this->HourTextbox->MaxLength = 2;
        this->HourTextbox->Name = L"HourTextbox";
        this->HourTextbox->Size = System::Drawing::Size(133, 19);
        this->HourTextbox->TabIndex = 36;
        this->HourTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::IntOnlyKeyPress);
        // 
        // DayTextbox
        // 
        this->DayTextbox->BackColor = System::Drawing::Color::White;
        this->DayTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->DayTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->DayTextbox->ForeColor = System::Drawing::Color::Black;
        this->DayTextbox->Location = System::Drawing::Point(607, 348);
        this->DayTextbox->MaxLength = 2;
        this->DayTextbox->Name = L"DayTextbox";
        this->DayTextbox->Size = System::Drawing::Size(133, 19);
        this->DayTextbox->TabIndex = 35;
        this->DayTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::IntOnlyKeyPress);
        // 
        // MonthTextbox
        // 
        this->MonthTextbox->BackColor = System::Drawing::Color::White;
        this->MonthTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->MonthTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->MonthTextbox->ForeColor = System::Drawing::Color::Black;
        this->MonthTextbox->Location = System::Drawing::Point(607, 299);
        this->MonthTextbox->MaxLength = 2;
        this->MonthTextbox->Name = L"MonthTextbox";
        this->MonthTextbox->Size = System::Drawing::Size(133, 19);
        this->MonthTextbox->TabIndex = 34;
        this->MonthTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::IntOnlyKeyPress);
        // 
        // YearTextbox
        // 
        this->YearTextbox->BackColor = System::Drawing::Color::White;
        this->YearTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->YearTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->YearTextbox->ForeColor = System::Drawing::Color::Black;
        this->YearTextbox->Location = System::Drawing::Point(607, 254);
        this->YearTextbox->MaxLength = 4;
        this->YearTextbox->Name = L"YearTextbox";
        this->YearTextbox->Size = System::Drawing::Size(133, 19);
        this->YearTextbox->TabIndex = 33;
        this->YearTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::IntOnlyKeyPress);
        // 
        // FineTextbox
        // 
        this->FineTextbox->BackColor = System::Drawing::Color::White;
        this->FineTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->FineTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->FineTextbox->ForeColor = System::Drawing::Color::Black;
        this->FineTextbox->Location = System::Drawing::Point(607, 209);
        this->FineTextbox->MaxLength = 50;
        this->FineTextbox->Name = L"FineTextbox";
        this->FineTextbox->Size = System::Drawing::Size(133, 19);
        this->FineTextbox->TabIndex = 32;
        this->FineTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::IntOnlyKeyPress);
        // 
        // MinuteTextbox
        // 
        this->MinuteTextbox->BackColor = System::Drawing::Color::White;
        this->MinuteTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->MinuteTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->MinuteTextbox->ForeColor = System::Drawing::Color::Black;
        this->MinuteTextbox->Location = System::Drawing::Point(607, 446);
        this->MinuteTextbox->MaxLength = 2;
        this->MinuteTextbox->Name = L"MinuteTextbox";
        this->MinuteTextbox->Size = System::Drawing::Size(133, 19);
        this->MinuteTextbox->TabIndex = 37;
        this->MinuteTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::IntOnlyKeyPress);
        // 
        // ViolationTextbox
        // 
        this->ViolationTextbox->BackColor = System::Drawing::Color::White;
        this->ViolationTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->ViolationTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->ViolationTextbox->ForeColor = System::Drawing::Color::Black;
        this->ViolationTextbox->Location = System::Drawing::Point(251, 493);
        this->ViolationTextbox->MaxLength = 50;
        this->ViolationTextbox->Name = L"ViolationTextbox";
        this->ViolationTextbox->Size = System::Drawing::Size(133, 19);
        this->ViolationTextbox->TabIndex = 38;
        // 
        // PlateNumberEXLabel
        // 
        this->PlateNumberEXLabel->AutoSize = true;
        this->PlateNumberEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->PlateNumberEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->PlateNumberEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->PlateNumberEXLabel->Location = System::Drawing::Point(106, 228);
        this->PlateNumberEXLabel->Name = L"PlateNumberEXLabel";
        this->PlateNumberEXLabel->Size = System::Drawing::Size(104, 12);
        this->PlateNumberEXLabel->TabIndex = 39;
        this->PlateNumberEXLabel->Text = L"ex: UZD5497, VVN3570";
        // 
        // StateEXLabel
        // 
        this->StateEXLabel->AutoSize = true;
        this->StateEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->StateEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->StateEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->StateEXLabel->Location = System::Drawing::Point(106, 277);
        this->StateEXLabel->Name = L"StateEXLabel";
        this->StateEXLabel->Size = System::Drawing::Size(68, 12);
        this->StateEXLabel->TabIndex = 40;
        this->StateEXLabel->Text = L"ex: FL, GA, WA";
        // 
        // CarMakeEXLabel
        // 
        this->CarMakeEXLabel->AutoSize = true;
        this->CarMakeEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->CarMakeEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->CarMakeEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->CarMakeEXLabel->Location = System::Drawing::Point(106, 322);
        this->CarMakeEXLabel->Name = L"CarMakeEXLabel";
        this->CarMakeEXLabel->Size = System::Drawing::Size(82, 12);
        this->CarMakeEXLabel->TabIndex = 41;
        this->CarMakeEXLabel->Text = L"ex: Toyota, Nissan";
        // 
        // CarStyleEXLabel
        // 
        this->CarStyleEXLabel->AutoSize = true;
        this->CarStyleEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->CarStyleEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->CarStyleEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->CarStyleEXLabel->Location = System::Drawing::Point(106, 371);
        this->CarStyleEXLabel->Name = L"CarStyleEXLabel";
        this->CarStyleEXLabel->Size = System::Drawing::Size(125, 12);
        this->CarStyleEXLabel->TabIndex = 42;
        this->CarStyleEXLabel->Text = L"ex: Four Door, Sedan, Truck";
        // 
        // ColorEXLabel
        // 
        this->ColorEXLabel->AutoSize = true;
        this->ColorEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->ColorEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->ColorEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->ColorEXLabel->Location = System::Drawing::Point(106, 422);
        this->ColorEXLabel->Name = L"ColorEXLabel";
        this->ColorEXLabel->Size = System::Drawing::Size(90, 12);
        this->ColorEXLabel->TabIndex = 43;
        this->ColorEXLabel->Text = L"ex: Gray, Black, Red";
        // 
        // LocationEXLabel
        // 
        this->LocationEXLabel->AutoSize = true;
        this->LocationEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->LocationEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->LocationEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->LocationEXLabel->Location = System::Drawing::Point(106, 467);
        this->LocationEXLabel->Name = L"LocationEXLabel";
        this->LocationEXLabel->Size = System::Drawing::Size(160, 12);
        this->LocationEXLabel->TabIndex = 44;
        this->LocationEXLabel->Text = L"ex: E VIRGINIA BEACH BOULEVARD";
        // 
        // ViolationEXLabel
        // 
        this->ViolationEXLabel->AutoSize = true;
        this->ViolationEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->ViolationEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->ViolationEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->ViolationEXLabel->Location = System::Drawing::Point(110, 516);
        this->ViolationEXLabel->Name = L"ViolationEXLabel";
        this->ViolationEXLabel->Size = System::Drawing::Size(100, 12);
        this->ViolationEXLabel->TabIndex = 45;
        this->ViolationEXLabel->Text = L"ex: METER EXPIRED C";
        // 
        // FineEXLabel
        // 
        this->FineEXLabel->AutoSize = true;
        this->FineEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->FineEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->FineEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->FineEXLabel->Location = System::Drawing::Point(510, 228);
        this->FineEXLabel->Name = L"FineEXLabel";
        this->FineEXLabel->Size = System::Drawing::Size(55, 12);
        this->FineEXLabel->TabIndex = 46;
        this->FineEXLabel->Text = L"ex: 195, 450";
        // 
        // YearEXLabel
        // 
        this->YearEXLabel->AutoSize = true;
        this->YearEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->YearEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->YearEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->YearEXLabel->Location = System::Drawing::Point(510, 277);
        this->YearEXLabel->Name = L"YearEXLabel";
        this->YearEXLabel->Size = System::Drawing::Size(65, 12);
        this->YearEXLabel->TabIndex = 47;
        this->YearEXLabel->Text = L"ex: 2019, 2020";
        // 
        // MonthEXLabel
        // 
        this->MonthEXLabel->AutoSize = true;
        this->MonthEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->MonthEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->MonthEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->MonthEXLabel->Location = System::Drawing::Point(510, 322);
        this->MonthEXLabel->Name = L"MonthEXLabel";
        this->MonthEXLabel->Size = System::Drawing::Size(108, 12);
        this->MonthEXLabel->TabIndex = 48;
        this->MonthEXLabel->Text = L"ex: Integer from 1 to 12";
        // 
        // DayEXLabel
        // 
        this->DayEXLabel->AutoSize = true;
        this->DayEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->DayEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->DayEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->DayEXLabel->Location = System::Drawing::Point(510, 371);
        this->DayEXLabel->Name = L"DayEXLabel";
        this->DayEXLabel->Size = System::Drawing::Size(108, 12);
        this->DayEXLabel->TabIndex = 49;
        this->DayEXLabel->Text = L"ex: Integer from 1 to 31";
        // 
        // HourEXLabel
        // 
        this->HourEXLabel->AutoSize = true;
        this->HourEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->HourEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->HourEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->HourEXLabel->Location = System::Drawing::Point(509, 422);
        this->HourEXLabel->Name = L"HourEXLabel";
        this->HourEXLabel->Size = System::Drawing::Size(108, 12);
        this->HourEXLabel->TabIndex = 50;
        this->HourEXLabel->Text = L"ex: Integer from 1 to 24";
        // 
        // MinuteEXLabel
        // 
        this->MinuteEXLabel->AutoSize = true;
        this->MinuteEXLabel->BackColor = System::Drawing::Color::Transparent;
        this->MinuteEXLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6));
        this->MinuteEXLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->MinuteEXLabel->Location = System::Drawing::Point(510, 467);
        this->MinuteEXLabel->Name = L"MinuteEXLabel";
        this->MinuteEXLabel->Size = System::Drawing::Size(108, 12);
        this->MinuteEXLabel->TabIndex = 51;
        this->MinuteEXLabel->Text = L"ex: Integer from 1 to 60";
        // 
        // SelectionConfirmButton
        // 
        this->SelectionConfirmButton->BackColor = System::Drawing::Color::SlateGray;
        this->SelectionConfirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
        this->SelectionConfirmButton->FlatAppearance->BorderSize = 0;
        this->SelectionConfirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->SelectionConfirmButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
        this->SelectionConfirmButton->ForeColor = System::Drawing::Color::White;
        this->SelectionConfirmButton->Location = System::Drawing::Point(317, 547);
        this->SelectionConfirmButton->Name = L"SelectionConfirmButton";
        this->SelectionConfirmButton->Size = System::Drawing::Size(248, 46);
        this->SelectionConfirmButton->TabIndex = 53;
        this->SelectionConfirmButton->Text = L"Confirm";
        this->SelectionConfirmButton->UseVisualStyleBackColor = false;
        this->SelectionConfirmButton->Click += gcnew System::EventHandler(this, &MainPage::SelectionConfirmButton_Click);
        // 
        // MemePictureBox
        // 
        this->MemePictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MemePictureBox.BackgroundImage")));
        this->MemePictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
        this->MemePictureBox->Location = System::Drawing::Point(816, 204);
        this->MemePictureBox->Name = L"MemePictureBox";
        this->MemePictureBox->Size = System::Drawing::Size(286, 275);
        this->MemePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->MemePictureBox->TabIndex = 54;
        this->MemePictureBox->TabStop = false;
        // 
        // MainPage
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::ActiveCaption;
        this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
        this->ClientSize = System::Drawing::Size(1262, 673);
        this->Controls->Add(this->MemePictureBox);
        this->Controls->Add(this->SelectionConfirmButton);
        this->Controls->Add(this->MinuteEXLabel);
        this->Controls->Add(this->HourEXLabel);
        this->Controls->Add(this->DayEXLabel);
        this->Controls->Add(this->MonthEXLabel);
        this->Controls->Add(this->YearEXLabel);
        this->Controls->Add(this->FineEXLabel);
        this->Controls->Add(this->ViolationEXLabel);
        this->Controls->Add(this->LocationEXLabel);
        this->Controls->Add(this->ColorEXLabel);
        this->Controls->Add(this->CarStyleEXLabel);
        this->Controls->Add(this->CarMakeEXLabel);
        this->Controls->Add(this->StateEXLabel);
        this->Controls->Add(this->PlateNumberEXLabel);
        this->Controls->Add(this->ViolationTextbox);
        this->Controls->Add(this->MinuteTextbox);
        this->Controls->Add(this->HourTextbox);
        this->Controls->Add(this->DayTextbox);
        this->Controls->Add(this->MonthTextbox);
        this->Controls->Add(this->YearTextbox);
        this->Controls->Add(this->FineTextbox);
        this->Controls->Add(this->LocationTextbox);
        this->Controls->Add(this->ColorTextbox);
        this->Controls->Add(this->CarStyleTextbox);
        this->Controls->Add(this->MinuteLabel);
        this->Controls->Add(this->CarMakeTextbox);
        this->Controls->Add(this->StateTextbox);
        this->Controls->Add(this->PlateNumberTextbox);
        this->Controls->Add(this->YearLabel);
        this->Controls->Add(this->FineLabel);
        this->Controls->Add(this->ViolationLabel);
        this->Controls->Add(this->HourLabel);
        this->Controls->Add(this->DayLabel);
        this->Controls->Add(this->MonthLabel);
        this->Controls->Add(this->LocationLabel);
        this->Controls->Add(this->ColorLabel);
        this->Controls->Add(this->CarStyleLabel);
        this->Controls->Add(this->CarMakeLabel);
        this->Controls->Add(this->StateLabel);
        this->Controls->Add(this->PlateNumberLabel);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->WelcomePanel);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
        this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
        this->MaximizeBox = false;
        this->Name = L"MainPage";
        this->Text = L"CiteSeek";
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemePictureBox))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    // VARIABLES I DECLARED -------------------------------------------------------------------------------------------------------
    String^ inputName;
    double^ mergeTime;
    double^ quickTime;
    double^ numCitations;
    
    // these variables are what the user inputs into the various textboxes
    String^ inputplateNumber;
    String^ inputstate;
    String^ inputcarMake;
    String^ inputcarStyle;
    String^ inputcolor;
    String^ inputLocation;
    String^ inputViolation;
    String^ inputFine;
    String^ inputYear;
    String^ inputMonth;
    String^ inputDay;
    String^ inputHour;
    String^ inputMinute;

    // FUNCTIONS I WROTE ----------------------------------------------------------------------------------------------------------
    // sorts the vector using the two methods and then searches using binary search until no elements remain in the list that have that attribute. these removed objects are placed into the class vector (the modified one)
    void MultiSortCaller() {
        // read in and store csv file
        ParkingCitations obj1;
        obj1.readFile();
        vector<ParkingCitation> classCitationVect = obj1.getCitations();
        List<double>^ doubleList = gcnew List<double>();
        doubleList = MultiSort(classCitationVect, inputplateNumber, inputstate, inputcarMake, inputcarStyle, inputcolor, inputLocation,
        inputViolation, inputFine, inputYear, inputMonth, inputDay, inputHour, inputMinute);

        double^ managedNumCitations = gcnew double(doubleList[0]);
        double^ managedMergeTime = gcnew double(doubleList[1]);
        double^ managedQuickTime = gcnew double(doubleList[2]);

        numCitations = *managedNumCitations;
        mergeTime = *managedMergeTime;
        quickTime = *managedQuickTime;
    }

    void UpdateWelcomePanelText()
    {
        this->WelcomePanel->Text = "Hi " + inputName + "! Which attributes you would like to search by?";
    }

    // check to see if the keypressed on integer only boxes are only numbers. if so then they can be added. otherwise ignore them
    private: System::Void IntOnlyKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
            e->Handled = true;
        }
    }
    // check to see if the keypressed on alphabet only boxes are only letters. if so then they can be added. otherwise ignore them
    private: System::Void AlphaOnlyKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (!Char::IsControl(e->KeyChar) && !Char::IsLetter(e->KeyChar)) {
            e->Handled = true;
        }
    }
    private: System::Void ResultPage_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
        this->Close(); // Close the main page when the Result page is open
    }

    private: System::Void SelectionConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
        if (PlateNumberTextbox->Text == "" && StateTextbox->Text == "" && CarMakeTextbox->Text == "" && CarStyleTextbox->Text == "" && ColorTextbox->Text == "" && LocationTextbox->Text == "" &&
            ViolationTextbox->Text == "" && FineTextbox->Text == "" && YearTextbox->Text == "" && MonthTextbox->Text == "" && DayTextbox->Text == "" && HourTextbox->Text == "" &&
            MinuteTextbox->Text == "") {
            MessageBox::Show("Please fill in at least one field!", "No Attribute Selected");
            return;
        }

        inputplateNumber = PlateNumberTextbox->Text;
        inputstate = StateTextbox->Text;
        inputcarMake = CarMakeTextbox->Text;
        inputcarStyle = CarStyleTextbox->Text;
        inputcolor = ColorTextbox->Text;
        inputLocation = LocationTextbox->Text;
        inputViolation = ViolationTextbox->Text;
        inputFine = FineTextbox->Text;
        inputYear = YearTextbox->Text;
        inputMonth = MonthTextbox->Text;
        inputDay = DayTextbox->Text;
        inputHour = HourTextbox->Text;
        inputMinute = MinuteTextbox->Text;

        MultiSortCaller();
        this->Hide();
       // ResultPage^ resultPage = gcnew ResultPage(mergeTime, quickTime, numCitations);
        ResultPage^ resultPage = gcnew ResultPage(mergeTime, quickTime, numCitations);
        resultPage->FormClosed += gcnew FormClosedEventHandler(this, &MainPage::ResultPage_FormClosed);
        resultPage->ShowDialog();
    }
    //----------------------------------------------------------------------------------------------------------------------------
};
}
