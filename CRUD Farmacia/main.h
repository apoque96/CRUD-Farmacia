#pragma once

namespace CRUDFarmacia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Medicamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ registro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Principios;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dosis;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Caducidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Compra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Venta;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fiscal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dirección;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Teléfono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	private: System::Windows::Forms::Label^ label8;















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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Medicamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->registro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Principios = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dosis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Caducidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Compra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Venta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fiscal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dirección = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Teléfono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Medicamento,
					this->registro, this->Categoría, this->Principios, this->Dosis
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 184);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(956, 136);
			this->dataGridView1->TabIndex = 0;
			// 
			// Medicamento
			// 
			this->Medicamento->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Medicamento->HeaderText = L"Medicamento";
			this->Medicamento->Name = L"Medicamento";
			this->Medicamento->ReadOnly = true;
			// 
			// registro
			// 
			this->registro->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->registro->HeaderText = L"Número de registro";
			this->registro->Name = L"registro";
			this->registro->ReadOnly = true;
			// 
			// Categoría
			// 
			this->Categoría->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Categoría->HeaderText = L"Categoría";
			this->Categoría->Name = L"Categoría";
			this->Categoría->ReadOnly = true;
			// 
			// Principios
			// 
			this->Principios->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Principios->HeaderText = L"Principios Activos";
			this->Principios->Name = L"Principios";
			this->Principios->ReadOnly = true;
			// 
			// Dosis
			// 
			this->Dosis->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Dosis->HeaderText = L"Dosis recomendada(mg)";
			this->Dosis->Name = L"Dosis";
			this->Dosis->ReadOnly = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Stock,
					this->Caducidad, this->Proveedor, this->Compra, this->Venta
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 347);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(956, 136);
			this->dataGridView2->TabIndex = 1;
			// 
			// Stock
			// 
			this->Stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->ReadOnly = true;
			// 
			// Caducidad
			// 
			this->Caducidad->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Caducidad->HeaderText = L"Fecha de caducidad";
			this->Caducidad->Name = L"Caducidad";
			this->Caducidad->ReadOnly = true;
			// 
			// Proveedor
			// 
			this->Proveedor->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Proveedor->HeaderText = L"Proveedor";
			this->Proveedor->Name = L"Proveedor";
			this->Proveedor->ReadOnly = true;
			// 
			// Compra
			// 
			this->Compra->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Compra->HeaderText = L"Precio de compra";
			this->Compra->Name = L"Compra";
			this->Compra->ReadOnly = true;
			// 
			// Venta
			// 
			this->Venta->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Venta->HeaderText = L"Precio de venta";
			this->Venta->Name = L"Venta";
			this->Venta->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(877, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 59);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(877, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 59);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(778, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 59);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Informe";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(778, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 59);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Promedio";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(681, 21);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 59);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Precio más alto";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(681, 103);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 59);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Buscar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nombre";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(455, 21);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 9;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &main::dateTimePicker1_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Principios Activos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Dosis recomendada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Stock";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(240, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Precio de compra";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(240, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Precio de venta";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(119, 93);
			this->maskedTextBox1->Mask = L"000.00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox1->TabIndex = 21;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(336, 18);
			this->maskedTextBox2->Mask = L"000.00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox2->TabIndex = 22;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(336, 57);
			this->maskedTextBox3->Mask = L"000.00";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox3->TabIndex = 23;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(336, 93);
			this->maskedTextBox4->Mask = L"000.00";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox4->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(504, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Fecha de caducidad";
			this->label7->Click += gcnew System::EventHandler(this, &main::label7_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Nombre,
					this->Nit, this->Fiscal, this->Dirección, this->Teléfono, this->Correo
			});
			this->dataGridView3->Location = System::Drawing::Point(455, 75);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(200, 87);
			this->dataGridView3->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(524, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Proveedor";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			// 
			// Nit
			// 
			this->Nit->HeaderText = L"Nit";
			this->Nit->Name = L"Nit";
			this->Nit->ReadOnly = true;
			// 
			// Fiscal
			// 
			this->Fiscal->HeaderText = L"Dirección fiscal";
			this->Fiscal->Name = L"Fiscal";
			this->Fiscal->ReadOnly = true;
			// 
			// Dirección
			// 
			this->Dirección->HeaderText = L"Dirección";
			this->Dirección->Name = L"Dirección";
			this->Dirección->ReadOnly = true;
			// 
			// Teléfono
			// 
			this->Teléfono->HeaderText = L"Teléfono";
			this->Teléfono->Name = L"Teléfono";
			this->Teléfono->ReadOnly = true;
			// 
			// Correo
			// 
			this->Correo->HeaderText = L"Correo";
			this->Correo->Name = L"Correo";
			this->Correo->ReadOnly = true;
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 495);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"main";
			this->Text = L"main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
