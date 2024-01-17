#pragma once

namespace FirstApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormOne
	/// </summary>
	public ref class FormOne : public System::Windows::Forms::Form
	{
	public:
		FormOne(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormOne()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ equally;











	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Label^ ResLab;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ divide;




	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: int first_num;
	private: char user_action = ' ';







	protected:

	protected:









	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->equally = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->ResLab = (gcnew System::Windows::Forms::Label());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(14, 104);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 46);
			this->button7->TabIndex = 15;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Gold;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(233, 104);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(52, 46);
			this->plus->TabIndex = 19;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &FormOne::plus_Click);
			// 
			// equally
			// 
			this->equally->BackColor = System::Drawing::Color::DodgerBlue;
			this->equally->Cursor = System::Windows::Forms::Cursors::Default;
			this->equally->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equally->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equally->ForeColor = System::Drawing::Color::White;
			this->equally->Location = System::Drawing::Point(160, 315);
			this->equally->Name = L"equally";
			this->equally->Size = System::Drawing::Size(126, 46);
			this->equally->TabIndex = 23;
			this->equally->Text = L"=";
			this->equally->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->equally->UseVisualStyleBackColor = false;
			this->equally->Click += gcnew System::EventHandler(this, &FormOne::equally_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Red;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_exit->Location = System::Drawing::Point(13, 13);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(27, 23);
			this->btn_exit->TabIndex = 34;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &FormOne::btn_exit_Click);
			// 
			// ResLab
			// 
			this->ResLab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResLab->ForeColor = System::Drawing::Color::White;
			this->ResLab->Location = System::Drawing::Point(13, 39);
			this->ResLab->Name = L"ResLab";
			this->ResLab->Size = System::Drawing::Size(273, 44);
			this->ResLab->TabIndex = 35;
			this->ResLab->Text = L"0";
			this->ResLab->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Gold;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(233, 156);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(52, 46);
			this->minus->TabIndex = 36;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &FormOne::minus_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::Gold;
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiply->Location = System::Drawing::Point(233, 205);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(52, 46);
			this->multiply->TabIndex = 37;
			this->multiply->Text = L"×";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &FormOne::multiply_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::Gold;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divide->Location = System::Drawing::Point(233, 257);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(52, 46);
			this->divide->TabIndex = 38;
			this->divide->Text = L"÷";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &FormOne::divide_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gold;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(12, 315);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(67, 46);
			this->button20->TabIndex = 39;
			this->button20->Text = L"(";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gold;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(87, 315);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 46);
			this->button13->TabIndex = 40;
			this->button13->Text = L")";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(87, 104);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 46);
			this->button6->TabIndex = 41;
			this->button6->Text = L"2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(160, 104);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 46);
			this->button8->TabIndex = 42;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(160, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 46);
			this->button1->TabIndex = 45;
			this->button1->Text = L"6";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(87, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 46);
			this->button2->TabIndex = 44;
			this->button2->Text = L"5";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(14, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 46);
			this->button3->TabIndex = 43;
			this->button3->Text = L"4";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(160, 257);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 46);
			this->button4->TabIndex = 51;
			this->button4->Text = L",";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(87, 257);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 46);
			this->button5->TabIndex = 50;
			this->button5->Text = L"0";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(14, 257);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 46);
			this->button9->TabIndex = 49;
			this->button9->Text = L"С";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &FormOne::CleanRes);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(160, 205);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 46);
			this->button14->TabIndex = 48;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(87, 205);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 46);
			this->button17->TabIndex = 47;
			this->button17->Text = L"8";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(14, 205);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 46);
			this->button18->TabIndex = 46;
			this->button18->Text = L"7";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &FormOne::AddSimbol);
			// 
			// FormOne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(298, 386);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->equally);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->ResLab);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormOne";
			this->Text = L"FirstProjectWinForms";
			this->Load += gcnew System::EventHandler(this, &FormOne::FormOne_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FormOne_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}



private: System::Void AddSimbol(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);
	this->ResLab->ForeColor = Color::White;
	if (this->ResLab->Text == "0") {
		this->ResLab->Text = button->Text;
	}
	else this->ResLab->Text += button->Text;
}
private: System::Void CleanRes(System::Object^ sender, System::EventArgs^ e) {
	this->ResLab->Text = "0";
}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}

private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToInt32(this->ResLab->Text);
	this->user_action = action;
	this->ResLab->Text = "0";
}
private: System::Void equally_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
		return;
	
	int second = System::Convert::ToInt32(this->ResLab->Text);
	int res;
	switch (this->user_action)
	{
	case '+': res = first_num + second; break;
	case '-': res = first_num - second; break;
	case '*': res = first_num * second; break;
	case '/':
		if (second == 0) {
			res = 0;
			MessageBox::Show(this, "Действие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->ResLab->ForeColor = Color::DarkRed;
		}
		else
			res = first_num / second;
		break;

	default:
		break;
	}

	
	this->ResLab->Text = System::Convert::ToString(res);
}
};
}
