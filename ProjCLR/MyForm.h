
#pragma once


namespace ProjCLR {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	
	

	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
	public: array <Control^, 2>^ CenterButtonArray = gcnew array <Control^, 2>(5, 5);
	public: array <Control^, 2>^ UpButtonArray = gcnew array <Control^, 2>(5, 6);
	public: array <Control^, 2>^ DownButtonArray = gcnew array <Control^, 2>(6, 5);
		

		MyForm(void)
		{
			
			InitializeComponent();
			
			for each (Control ^ ctl in this->Controls) 
			{
				
				if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Center))
				{
					int x = (Convert::ToInt32(ctl->Text) - 1) % 5;
					int y = (Convert::ToInt32(ctl->Text) - 1) / 5;
					CenterButtonArray[x, y] = ctl;
					ctl->Text = String::Empty;
					
				}
				if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Tile) && (ctl->ForeColor == Color::Red))
				{
					int x = Convert::ToInt32(ctl->Text[1]) - 48;
					int y = Convert::ToInt32(ctl->Text[0]) - 48;
					UpButtonArray[x, y] = ctl;
					ctl->Text = String::Empty;
				}
				if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Tile) && (ctl->ForeColor == Color::Yellow))
				{
					int x = Convert::ToInt32(ctl->Text[1]) - 48;
					int y = Convert::ToInt32(ctl->Text[0]) - 48;
					DownButtonArray[x, y] = ctl;
					ctl->Text = String::Empty;
				}
			}
			
			for each (Control ^ ctl in this->Controls) 
			{
				if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Tile))
				{
					ctl->Enabled = false;
				}
			}
			for each (Control ^ ctl in this->Controls) 
			{
				if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Center))
				{
					ctl->Enabled = false;
				}
			}
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Solve_button;
	protected:

	private: System::Windows::Forms::Button^ Fix_Button;

	private: System::Windows::Forms::Button^ Redact_Button;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Button^ button68;
	private: System::Windows::Forms::Button^ button69;
	private: System::Windows::Forms::Button^ button70;
	private: System::Windows::Forms::Button^ button71;
	private: System::Windows::Forms::Button^ button72;
	private: System::Windows::Forms::Button^ button73;
	private: System::Windows::Forms::Button^ button74;
	private: System::Windows::Forms::Button^ button75;
	private: System::Windows::Forms::Button^ button76;
	private: System::Windows::Forms::Button^ button77;
	private: System::Windows::Forms::Button^ button78;
	private: System::Windows::Forms::Button^ button79;
	private: System::Windows::Forms::Button^ button80;
	private: System::Windows::Forms::Button^ button81;
	private: System::Windows::Forms::Button^ button82;
	private: System::Windows::Forms::Button^ button83;
	private: System::Windows::Forms::Button^ button84;
	private: System::Windows::Forms::Button^ button85;
	private: System::Windows::Forms::Button^ button86;
	private: System::Windows::Forms::Button^ button87;
	private: System::Windows::Forms::Button^ button88;
	private: System::Windows::Forms::CheckBox^ Inv_chekbox;
	
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Solve_button = (gcnew System::Windows::Forms::Button());
			this->Fix_Button = (gcnew System::Windows::Forms::Button());
			this->Redact_Button = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->Inv_chekbox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// Solve_button
			// 
			this->Solve_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Solve_button->Location = System::Drawing::Point(599, 312);
			this->Solve_button->Name = L"Solve_button";
			this->Solve_button->Size = System::Drawing::Size(146, 40);
			this->Solve_button->TabIndex = 0;
			this->Solve_button->Text = L"–ешить";
			this->Solve_button->UseVisualStyleBackColor = true;
			this->Solve_button->Click += gcnew System::EventHandler(this, &MyForm::Solve_Click);
			// 
			// Fix_Button
			// 
			this->Fix_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Fix_Button->Location = System::Drawing::Point(599, 246);
			this->Fix_Button->Name = L"Fix_Button";
			this->Fix_Button->Size = System::Drawing::Size(146, 40);
			this->Fix_Button->TabIndex = 1;
			this->Fix_Button->Text = L"‘иксировать";
			this->Fix_Button->UseVisualStyleBackColor = true;
			this->Fix_Button->Click += gcnew System::EventHandler(this, &MyForm::Fixing_Click);
			// 
			// Redact_Button
			// 
			this->Redact_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Redact_Button->Location = System::Drawing::Point(599, 179);
			this->Redact_Button->Name = L"Redact_Button";
			this->Redact_Button->Size = System::Drawing::Size(146, 40);
			this->Redact_Button->TabIndex = 2;
			this->Redact_Button->Text = L"–едактировать";
			this->Redact_Button->UseVisualStyleBackColor = true;
			this->Redact_Button->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Redact_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->ForeColor = System::Drawing::Color::Yellow;
			this->button5->Location = System::Drawing::Point(260, 127);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(12, 41);
			this->button5->TabIndex = 4;
			this->button5->Text = L"01";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(219, 115);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 12);
			this->button4->TabIndex = 5;
			this->button4->Text = L"00";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->ForeColor = System::Drawing::Color::Yellow;
			this->button6->Location = System::Drawing::Point(313, 127);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(12, 41);
			this->button6->TabIndex = 6;
			this->button6->Text = L"02";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(219, 168);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 12);
			this->button7->TabIndex = 7;
			this->button7->Text = L"10";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->ForeColor = System::Drawing::Color::Red;
			this->button8->Location = System::Drawing::Point(431, 221);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 12);
			this->button8->TabIndex = 11;
			this->button8->Text = L"24";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->ForeColor = System::Drawing::Color::Yellow;
			this->button9->Location = System::Drawing::Point(313, 180);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(12, 41);
			this->button9->TabIndex = 10;
			this->button9->Text = L"12";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(378, 168);
			this->button10->Margin = System::Windows::Forms::Padding(0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 12);
			this->button10->TabIndex = 9;
			this->button10->Text = L"13";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->ForeColor = System::Drawing::Color::Yellow;
			this->button11->Location = System::Drawing::Point(260, 180);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(12, 41);
			this->button11->TabIndex = 8;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->ForeColor = System::Drawing::Color::Red;
			this->button12->Location = System::Drawing::Point(325, 274);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 12);
			this->button12->TabIndex = 15;
			this->button12->Text = L"32";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->ForeColor = System::Drawing::Color::Yellow;
			this->button13->Location = System::Drawing::Point(366, 233);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(12, 41);
			this->button13->TabIndex = 14;
			this->button13->Text = L"23";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->ForeColor = System::Drawing::Color::Red;
			this->button14->Location = System::Drawing::Point(325, 221);
			this->button14->Margin = System::Windows::Forms::Padding(0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 12);
			this->button14->TabIndex = 13;
			this->button14->Text = L"22";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->ForeColor = System::Drawing::Color::Yellow;
			this->button15->Location = System::Drawing::Point(313, 233);
			this->button15->Margin = System::Windows::Forms::Padding(0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(12, 41);
			this->button15->TabIndex = 12;
			this->button15->Text = L"22";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->ForeColor = System::Drawing::Color::Red;
			this->button16->Location = System::Drawing::Point(378, 327);
			this->button16->Margin = System::Windows::Forms::Padding(0);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(41, 12);
			this->button16->TabIndex = 19;
			this->button16->Text = L"43";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->ForeColor = System::Drawing::Color::Yellow;
			this->button17->Location = System::Drawing::Point(419, 286);
			this->button17->Margin = System::Windows::Forms::Padding(0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(12, 41);
			this->button17->TabIndex = 18;
			this->button17->Text = L"34";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->ForeColor = System::Drawing::Color::Red;
			this->button18->Location = System::Drawing::Point(378, 274);
			this->button18->Margin = System::Windows::Forms::Padding(0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(41, 12);
			this->button18->TabIndex = 17;
			this->button18->Text = L"33";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->ForeColor = System::Drawing::Color::Yellow;
			this->button19->Location = System::Drawing::Point(366, 286);
			this->button19->Margin = System::Windows::Forms::Padding(0);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(12, 41);
			this->button19->TabIndex = 16;
			this->button19->Text = L"33";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->ForeColor = System::Drawing::Color::Red;
			this->button20->Location = System::Drawing::Point(431, 380);
			this->button20->Margin = System::Windows::Forms::Padding(0);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(41, 12);
			this->button20->TabIndex = 23;
			this->button20->Text = L"54";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->ForeColor = System::Drawing::Color::Yellow;
			this->button21->Location = System::Drawing::Point(472, 339);
			this->button21->Margin = System::Windows::Forms::Padding(0);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(12, 41);
			this->button21->TabIndex = 22;
			this->button21->Text = L"45";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->ForeColor = System::Drawing::Color::Red;
			this->button22->Location = System::Drawing::Point(431, 327);
			this->button22->Margin = System::Windows::Forms::Padding(0);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(41, 12);
			this->button22->TabIndex = 21;
			this->button22->Text = L"44";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->ForeColor = System::Drawing::Color::Yellow;
			this->button23->Location = System::Drawing::Point(419, 339);
			this->button23->Margin = System::Windows::Forms::Padding(0);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(12, 41);
			this->button23->TabIndex = 20;
			this->button23->Text = L"44";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->ForeColor = System::Drawing::Color::Red;
			this->button24->Location = System::Drawing::Point(325, 380);
			this->button24->Margin = System::Windows::Forms::Padding(0);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(41, 12);
			this->button24->TabIndex = 27;
			this->button24->Text = L"52";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->ForeColor = System::Drawing::Color::Yellow;
			this->button25->Location = System::Drawing::Point(366, 339);
			this->button25->Margin = System::Windows::Forms::Padding(0);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(12, 41);
			this->button25->TabIndex = 26;
			this->button25->Text = L"43";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->ForeColor = System::Drawing::Color::Red;
			this->button26->Location = System::Drawing::Point(325, 327);
			this->button26->Margin = System::Windows::Forms::Padding(0);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(41, 12);
			this->button26->TabIndex = 25;
			this->button26->Text = L"42";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->ForeColor = System::Drawing::Color::Yellow;
			this->button27->Location = System::Drawing::Point(313, 339);
			this->button27->Margin = System::Windows::Forms::Padding(0);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(12, 41);
			this->button27->TabIndex = 24;
			this->button27->Text = L"42";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->ForeColor = System::Drawing::Color::Red;
			this->button28->Location = System::Drawing::Point(272, 327);
			this->button28->Margin = System::Windows::Forms::Padding(0);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(41, 12);
			this->button28->TabIndex = 31;
			this->button28->Text = L"41";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->ForeColor = System::Drawing::Color::Yellow;
			this->button29->Location = System::Drawing::Point(313, 286);
			this->button29->Margin = System::Windows::Forms::Padding(0);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(12, 41);
			this->button29->TabIndex = 30;
			this->button29->Text = L"32";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->ForeColor = System::Drawing::Color::Red;
			this->button30->Location = System::Drawing::Point(272, 274);
			this->button30->Margin = System::Windows::Forms::Padding(0);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(41, 12);
			this->button30->TabIndex = 29;
			this->button30->Text = L"31";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->ForeColor = System::Drawing::Color::Yellow;
			this->button31->Location = System::Drawing::Point(260, 286);
			this->button31->Margin = System::Windows::Forms::Padding(0);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(12, 41);
			this->button31->TabIndex = 28;
			this->button31->Text = L"31";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button32->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button32->ForeColor = System::Drawing::Color::Red;
			this->button32->Location = System::Drawing::Point(219, 274);
			this->button32->Margin = System::Windows::Forms::Padding(0);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(41, 12);
			this->button32->TabIndex = 35;
			this->button32->Text = L"30";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button33->ForeColor = System::Drawing::Color::Yellow;
			this->button33->Location = System::Drawing::Point(260, 233);
			this->button33->Margin = System::Windows::Forms::Padding(0);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(12, 41);
			this->button33->TabIndex = 34;
			this->button33->Text = L"21";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button34->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button34->ForeColor = System::Drawing::Color::Red;
			this->button34->Location = System::Drawing::Point(378, 221);
			this->button34->Margin = System::Windows::Forms::Padding(0);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(41, 12);
			this->button34->TabIndex = 33;
			this->button34->Text = L"23";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::White;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button35->ForeColor = System::Drawing::Color::Yellow;
			this->button35->Location = System::Drawing::Point(472, 233);
			this->button35->Margin = System::Windows::Forms::Padding(0);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(12, 41);
			this->button35->TabIndex = 32;
			this->button35->Text = L"25";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::White;
			this->button36->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button36->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button36->ForeColor = System::Drawing::Color::Red;
			this->button36->Location = System::Drawing::Point(219, 380);
			this->button36->Margin = System::Windows::Forms::Padding(0);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(41, 12);
			this->button36->TabIndex = 39;
			this->button36->Text = L"50";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::White;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button37->ForeColor = System::Drawing::Color::Yellow;
			this->button37->Location = System::Drawing::Point(260, 339);
			this->button37->Margin = System::Windows::Forms::Padding(0);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(12, 41);
			this->button37->TabIndex = 38;
			this->button37->Text = L"41";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::White;
			this->button38->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button38->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button38->ForeColor = System::Drawing::Color::Red;
			this->button38->Location = System::Drawing::Point(219, 327);
			this->button38->Margin = System::Windows::Forms::Padding(0);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(41, 12);
			this->button38->TabIndex = 37;
			this->button38->Text = L"40";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::White;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button39->ForeColor = System::Drawing::Color::Yellow;
			this->button39->Location = System::Drawing::Point(207, 339);
			this->button39->Margin = System::Windows::Forms::Padding(0);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(12, 41);
			this->button39->TabIndex = 36;
			this->button39->Text = L"40";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::White;
			this->button40->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button40->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button40->ForeColor = System::Drawing::Color::Red;
			this->button40->Location = System::Drawing::Point(272, 221);
			this->button40->Margin = System::Windows::Forms::Padding(0);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(41, 12);
			this->button40->TabIndex = 43;
			this->button40->Text = L"21";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::White;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button41->ForeColor = System::Drawing::Color::Yellow;
			this->button41->Location = System::Drawing::Point(419, 180);
			this->button41->Margin = System::Windows::Forms::Padding(0);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(12, 41);
			this->button41->TabIndex = 42;
			this->button41->Text = L"14";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::White;
			this->button42->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button42->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button42->ForeColor = System::Drawing::Color::Red;
			this->button42->Location = System::Drawing::Point(431, 168);
			this->button42->Margin = System::Windows::Forms::Padding(0);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(41, 12);
			this->button42->TabIndex = 41;
			this->button42->Text = L"14";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::White;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button43->ForeColor = System::Drawing::Color::Yellow;
			this->button43->Location = System::Drawing::Point(366, 180);
			this->button43->Margin = System::Windows::Forms::Padding(0);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(12, 41);
			this->button43->TabIndex = 40;
			this->button43->Text = L"13";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::White;
			this->button44->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button44->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button44->ForeColor = System::Drawing::Color::Red;
			this->button44->Location = System::Drawing::Point(378, 115);
			this->button44->Margin = System::Windows::Forms::Padding(0);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(41, 12);
			this->button44->TabIndex = 47;
			this->button44->Text = L"03";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::White;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button45->ForeColor = System::Drawing::Color::Yellow;
			this->button45->Location = System::Drawing::Point(207, 127);
			this->button45->Margin = System::Windows::Forms::Padding(0);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(12, 41);
			this->button45->TabIndex = 46;
			this->button45->Text = L"00";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::White;
			this->button46->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button46->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button46->ForeColor = System::Drawing::Color::Red;
			this->button46->Location = System::Drawing::Point(272, 115);
			this->button46->Margin = System::Windows::Forms::Padding(0);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(41, 12);
			this->button46->TabIndex = 45;
			this->button46->Text = L"01";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::White;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button47->ForeColor = System::Drawing::Color::Yellow;
			this->button47->Location = System::Drawing::Point(366, 127);
			this->button47->Margin = System::Windows::Forms::Padding(0);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(12, 41);
			this->button47->TabIndex = 44;
			this->button47->Text = L"03";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::White;
			this->button48->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button48->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button48->ForeColor = System::Drawing::Color::Red;
			this->button48->Location = System::Drawing::Point(431, 115);
			this->button48->Margin = System::Windows::Forms::Padding(0);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(41, 12);
			this->button48->TabIndex = 51;
			this->button48->Text = L"04";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::White;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button49->ForeColor = System::Drawing::Color::Yellow;
			this->button49->Location = System::Drawing::Point(472, 127);
			this->button49->Margin = System::Windows::Forms::Padding(0);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(12, 41);
			this->button49->TabIndex = 50;
			this->button49->Text = L"05";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::White;
			this->button50->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button50->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button50->ForeColor = System::Drawing::Color::Red;
			this->button50->Location = System::Drawing::Point(325, 115);
			this->button50->Margin = System::Windows::Forms::Padding(0);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(41, 12);
			this->button50->TabIndex = 49;
			this->button50->Text = L"02";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::White;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button51->ForeColor = System::Drawing::Color::Yellow;
			this->button51->Location = System::Drawing::Point(419, 127);
			this->button51->Margin = System::Windows::Forms::Padding(0);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(12, 41);
			this->button51->TabIndex = 48;
			this->button51->Text = L"04";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::White;
			this->button52->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button52->FlatAppearance->BorderSize = 0;
			this->button52->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button52->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button52->ForeColor = System::Drawing::Color::Red;
			this->button52->Location = System::Drawing::Point(431, 274);
			this->button52->Margin = System::Windows::Forms::Padding(0);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(41, 12);
			this->button52->TabIndex = 55;
			this->button52->Text = L"34";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::White;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button53->ForeColor = System::Drawing::Color::Yellow;
			this->button53->Location = System::Drawing::Point(207, 233);
			this->button53->Margin = System::Windows::Forms::Padding(0);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(12, 41);
			this->button53->TabIndex = 54;
			this->button53->Text = L"20";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::White;
			this->button54->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button54->FlatAppearance->BorderSize = 0;
			this->button54->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button54->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button54->ForeColor = System::Drawing::Color::Red;
			this->button54->Location = System::Drawing::Point(219, 221);
			this->button54->Margin = System::Windows::Forms::Padding(0);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(41, 12);
			this->button54->TabIndex = 53;
			this->button54->Text = L"20";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::White;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button55->ForeColor = System::Drawing::Color::Yellow;
			this->button55->Location = System::Drawing::Point(419, 233);
			this->button55->Margin = System::Windows::Forms::Padding(0);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(12, 41);
			this->button55->TabIndex = 52;
			this->button55->Text = L"24";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::White;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button56->ForeColor = System::Drawing::Color::Yellow;
			this->button56->Location = System::Drawing::Point(472, 180);
			this->button56->Margin = System::Windows::Forms::Padding(0);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(12, 41);
			this->button56->TabIndex = 56;
			this->button56->Text = L"15";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::White;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button57->ForeColor = System::Drawing::Color::Yellow;
			this->button57->Location = System::Drawing::Point(472, 286);
			this->button57->Margin = System::Windows::Forms::Padding(0);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(12, 41);
			this->button57->TabIndex = 57;
			this->button57->Text = L"35";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::White;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button58->ForeColor = System::Drawing::Color::Yellow;
			this->button58->Location = System::Drawing::Point(207, 180);
			this->button58->Margin = System::Windows::Forms::Padding(0);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(12, 41);
			this->button58->TabIndex = 58;
			this->button58->Text = L"10";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::White;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button59->ForeColor = System::Drawing::Color::Yellow;
			this->button59->Location = System::Drawing::Point(207, 286);
			this->button59->Margin = System::Windows::Forms::Padding(0);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(12, 41);
			this->button59->TabIndex = 59;
			this->button59->Text = L"30";
			this->button59->UseVisualStyleBackColor = false;
			this->button59->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::White;
			this->button60->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button60->FlatAppearance->BorderSize = 0;
			this->button60->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button60->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button60->ForeColor = System::Drawing::Color::Red;
			this->button60->Location = System::Drawing::Point(378, 380);
			this->button60->Margin = System::Windows::Forms::Padding(0);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(41, 12);
			this->button60->TabIndex = 60;
			this->button60->Text = L"53";
			this->button60->UseVisualStyleBackColor = false;
			this->button60->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::Color::White;
			this->button61->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button61->FlatAppearance->BorderSize = 0;
			this->button61->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button61->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button61->ForeColor = System::Drawing::Color::Red;
			this->button61->Location = System::Drawing::Point(272, 380);
			this->button61->Margin = System::Windows::Forms::Padding(0);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(41, 12);
			this->button61->TabIndex = 61;
			this->button61->Text = L"51";
			this->button61->UseVisualStyleBackColor = false;
			this->button61->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::Color::White;
			this->button62->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button62->FlatAppearance->BorderSize = 0;
			this->button62->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button62->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button62->ForeColor = System::Drawing::Color::Red;
			this->button62->Location = System::Drawing::Point(272, 168);
			this->button62->Margin = System::Windows::Forms::Padding(0);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(41, 12);
			this->button62->TabIndex = 62;
			this->button62->Text = L"11";
			this->button62->UseVisualStyleBackColor = false;
			this->button62->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::Color::White;
			this->button63->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button63->FlatAppearance->BorderSize = 0;
			this->button63->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button63->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button63->ForeColor = System::Drawing::Color::Red;
			this->button63->Location = System::Drawing::Point(325, 168);
			this->button63->Margin = System::Windows::Forms::Padding(0);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(41, 12);
			this->button63->TabIndex = 63;
			this->button63->Text = L"12";
			this->button63->UseVisualStyleBackColor = false;
			this->button63->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Block_Fill_Click);
			// 
			// button64
			// 
			this->button64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button64->Location = System::Drawing::Point(219, 127);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(41, 41);
			this->button64->TabIndex = 64;
			this->button64->Text = L"1";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button65
			// 
			this->button65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button65->Location = System::Drawing::Point(219, 180);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(41, 41);
			this->button65->TabIndex = 65;
			this->button65->Text = L"6";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button66
			// 
			this->button66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button66->Location = System::Drawing::Point(219, 233);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(41, 41);
			this->button66->TabIndex = 66;
			this->button66->Text = L"11";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button67
			// 
			this->button67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button67->Location = System::Drawing::Point(219, 286);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(41, 41);
			this->button67->TabIndex = 67;
			this->button67->Text = L"16";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button68
			// 
			this->button68->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button68->Location = System::Drawing::Point(219, 339);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(41, 41);
			this->button68->TabIndex = 68;
			this->button68->Text = L"21";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button69
			// 
			this->button69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button69->Location = System::Drawing::Point(272, 339);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(41, 41);
			this->button69->TabIndex = 73;
			this->button69->Text = L"22";
			this->button69->UseVisualStyleBackColor = true;
			this->button69->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button70
			// 
			this->button70->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button70->Location = System::Drawing::Point(272, 286);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(41, 41);
			this->button70->TabIndex = 72;
			this->button70->Text = L"17";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button71
			// 
			this->button71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button71->Location = System::Drawing::Point(272, 233);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(41, 41);
			this->button71->TabIndex = 71;
			this->button71->Text = L"12";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button72
			// 
			this->button72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button72->Location = System::Drawing::Point(272, 180);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(41, 41);
			this->button72->TabIndex = 70;
			this->button72->Text = L"7";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button73
			// 
			this->button73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button73->Location = System::Drawing::Point(272, 127);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(41, 41);
			this->button73->TabIndex = 69;
			this->button73->Text = L"2";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button74
			// 
			this->button74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button74->Location = System::Drawing::Point(325, 339);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(41, 41);
			this->button74->TabIndex = 78;
			this->button74->Text = L"23";
			this->button74->UseVisualStyleBackColor = true;
			this->button74->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button75
			// 
			this->button75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button75->Location = System::Drawing::Point(325, 286);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(41, 41);
			this->button75->TabIndex = 77;
			this->button75->Text = L"18";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button76
			// 
			this->button76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button76->Location = System::Drawing::Point(325, 233);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(41, 41);
			this->button76->TabIndex = 76;
			this->button76->Text = L"13";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button77
			// 
			this->button77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button77->Location = System::Drawing::Point(325, 180);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(41, 41);
			this->button77->TabIndex = 75;
			this->button77->Text = L"8";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button78
			// 
			this->button78->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button78->Location = System::Drawing::Point(325, 127);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(41, 41);
			this->button78->TabIndex = 74;
			this->button78->Text = L"3";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button79
			// 
			this->button79->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button79->Location = System::Drawing::Point(378, 339);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(41, 41);
			this->button79->TabIndex = 83;
			this->button79->Text = L"24";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button80
			// 
			this->button80->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button80->Location = System::Drawing::Point(378, 286);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(41, 41);
			this->button80->TabIndex = 82;
			this->button80->Text = L"19";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button81
			// 
			this->button81->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button81->Location = System::Drawing::Point(378, 233);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(41, 41);
			this->button81->TabIndex = 81;
			this->button81->Text = L"14";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button82
			// 
			this->button82->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button82->Location = System::Drawing::Point(378, 180);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(41, 41);
			this->button82->TabIndex = 80;
			this->button82->Text = L"9";
			this->button82->UseVisualStyleBackColor = true;
			this->button82->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button83
			// 
			this->button83->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button83->Location = System::Drawing::Point(378, 127);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(41, 41);
			this->button83->TabIndex = 79;
			this->button83->Text = L"4";
			this->button83->UseVisualStyleBackColor = true;
			this->button83->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button84
			// 
			this->button84->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button84->Location = System::Drawing::Point(431, 339);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(41, 41);
			this->button84->TabIndex = 88;
			this->button84->Text = L"25";
			this->button84->UseVisualStyleBackColor = true;
			this->button84->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button85
			// 
			this->button85->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button85->Location = System::Drawing::Point(431, 286);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(41, 41);
			this->button85->TabIndex = 87;
			this->button85->Text = L"20";
			this->button85->UseVisualStyleBackColor = true;
			this->button85->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button86
			// 
			this->button86->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button86->Location = System::Drawing::Point(431, 233);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(41, 41);
			this->button86->TabIndex = 86;
			this->button86->Text = L"15";
			this->button86->UseVisualStyleBackColor = true;
			this->button86->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button87
			// 
			this->button87->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button87->Location = System::Drawing::Point(431, 180);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(41, 41);
			this->button87->TabIndex = 85;
			this->button87->Text = L"10";
			this->button87->UseVisualStyleBackColor = true;
			this->button87->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// button88
			// 
			this->button88->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button88->Location = System::Drawing::Point(431, 127);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(41, 41);
			this->button88->TabIndex = 84;
			this->button88->Text = L"5";
			this->button88->UseVisualStyleBackColor = true;
			this->button88->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::NumberTile_Click);
			// 
			// Inv_chekbox
			// 
			this->Inv_chekbox->AutoSize = true;
			this->Inv_chekbox->Location = System::Drawing::Point(264, 63);
			this->Inv_chekbox->Name = L"Inv_chekbox";
			this->Inv_chekbox->Size = System::Drawing::Size(167, 17);
			this->Inv_chekbox->TabIndex = 89;
			this->Inv_chekbox->Text = L"»нвертировать добавление";
			this->Inv_chekbox->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 479);
			this->Controls->Add(this->Inv_chekbox);
			this->Controls->Add(this->button84);
			this->Controls->Add(this->button85);
			this->Controls->Add(this->button86);
			this->Controls->Add(this->button87);
			this->Controls->Add(this->button88);
			this->Controls->Add(this->button79);
			this->Controls->Add(this->button80);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->button82);
			this->Controls->Add(this->button83);
			this->Controls->Add(this->button74);
			this->Controls->Add(this->button75);
			this->Controls->Add(this->button76);
			this->Controls->Add(this->button77);
			this->Controls->Add(this->button78);
			this->Controls->Add(this->button69);
			this->Controls->Add(this->button70);
			this->Controls->Add(this->button71);
			this->Controls->Add(this->button72);
			this->Controls->Add(this->button73);
			this->Controls->Add(this->button68);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Redact_Button);
			this->Controls->Add(this->Fix_Button);
			this->Controls->Add(this->Solve_button);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

	private: System::Void Solve_Click(System::Object^ sender, System::EventArgs^ e) {
		
		array <int, 2>^ NumberArray = gcnew array <int, 2>(5, 5);
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				if (CenterButtonArray[x, y]->Text != String::Empty)
				{
					NumberArray[x, y] = Convert::ToInt32(CenterButtonArray[x, y]->Text);
				}
				else
				{
					NumberArray[x, y] = -1;
				}
			}
		}

		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				if (NumberArray[x,y] == 0) 
				{
					UpButtonArray[x, y]->BackColor = Color::Red;
					UpButtonArray[x, y + 1]->BackColor = Color::Red;
					DownButtonArray[x, y]->BackColor = Color::Red;
					DownButtonArray[x + 1, y]->BackColor = Color::Red;
				}
			}
		}

		if (NumberArray[0, 0] == 3)
		{
			UpButtonArray[0, 0]->BackColor = Color::Black;
			DownButtonArray[0, 0]->BackColor = Color::Black;
		}
		if (NumberArray[0,4] == 3) 
		{
			UpButtonArray[0, 5]->BackColor = Color::Black;
			DownButtonArray[0, 4]->BackColor = Color::Black;
		}
		if (NumberArray[4,4] == 3) 
		{
			UpButtonArray[4, 5]->BackColor = Color::Black;
			DownButtonArray[5, 4]->BackColor = Color::Black;
		}
		if (NumberArray[4,0] == 3) 
		{
			UpButtonArray[4, 0]->BackColor = Color::Black;
			DownButtonArray[5,0]->BackColor = Color::Black;
		}

		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				if (CenterButtonArray[x, y]->Text != String::Empty)
				{
					NumberArray[x, y] = Convert::ToInt32(CenterButtonArray[x, y]->Text);
				}
				else
				{
					NumberArray[x, y] = -1;
				}
			}
		}

		/*CenterButtonArray[1, 3]->BackColor = Color::Black;
		UpButtonArray[1, 3]->BackColor = Color::Black;
		UpButtonArray[1, 4]->BackColor = Color::Black;
		DownButtonArray[1, 3]->BackColor = Color::Black;
		DownButtonArray[2, 3]->BackColor = Color::Black;*/
	}
		  
		   

private: System::Void Redact_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		for each (Control ^ ctl in this->Controls)
		{
			if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Center))
			{
				ctl->Enabled = true;
			}
			else 
			{
				if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Tile))
				{
					ctl->Enabled = false;
				}
			}
		}

}
private: System::Void Fixing_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (Control ^ ctl in this->Controls) 
	{
		if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Tile))
		{
			ctl->Enabled = true;
		}
		else
		{
			if ((dynamic_cast<Button^>(ctl) != nullptr) && (ctl->BackgroundImageLayout == ImageLayout::Center))
			{
				ctl->Enabled = false;
			}
		}
	}
}
 
	   
private: System::Void NumberTile_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Button^ ctl = safe_cast<Button^>(sender);
	if ((ctl->Text == String::Empty) && (this->Inv_chekbox->CheckState == CheckState::Checked))
	{
		return;
	}
	if ((ctl->Text == String::Empty) && (this->Inv_chekbox->CheckState == CheckState::Unchecked))
	{
		ctl->Text = "0";
	}
	
	else 
	{
		if ((ctl->Text == "0") && (this->Inv_chekbox->CheckState == CheckState::Checked))
		{
			ctl->Text = String::Empty;
		}
		else 
		{
			if ((this->Inv_chekbox->CheckState == CheckState::Unchecked) && (Convert::ToInt32(ctl->Text) + 1 <= 3))
			{
				ctl->Text = Convert::ToString(Convert::ToInt32(ctl->Text) + 1);
			}
			if (this->Inv_chekbox->CheckState == CheckState::Checked)
			{
				ctl->Text = Convert::ToString(Convert::ToInt32(ctl->Text) - 1);
			}
		}

	}
	
}
private: System::Void Block_Fill_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Button^ ctl = safe_cast<Button^>(sender);
	
	if (ctl->BackColor.Name == "White") 
	{
		ctl->BackColor = Color::Black;
		
	}
	else 
	{
		if (ctl->BackColor.Name == "Black") 
		{
			ctl->BackColor = Color::White;
		}
	}
}

};
}
