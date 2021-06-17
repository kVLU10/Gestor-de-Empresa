#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		GraphicsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnSearchP;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnFromStart;

	private: System::Windows::Forms::Button^ BtnRefresh;
	private: System::Windows::Forms::Button^ btnSearchDNI;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSearchP = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnFromStart = (gcnew System::Windows::Forms::Button());
			this->BtnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnSearchDNI = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(525, 215);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(534, 376);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(163, 301);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(163, 142);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 24);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(163, 87);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(176, 24);
			this->comboBox3->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(517, 89);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(252, 22);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(807, 91);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(252, 22);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(615, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Desde";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(905, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Hasta";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(125, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"INFORME DE VENTAS POR PRODUCTO";
			// 
			// btnSearchP
			// 
			this->btnSearchP->Location = System::Drawing::Point(360, 86);
			this->btnSearchP->Name = L"btnSearchP";
			this->btnSearchP->Size = System::Drawing::Size(75, 23);
			this->btnSearchP->TabIndex = 10;
			this->btnSearchP->Text = L"Buscar";
			this->btnSearchP->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(73, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Producto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(73, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Categoría";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(163, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"INFORME DE ASISTENCIA";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(73, 304);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"DNI";
			// 
			// btnFromStart
			// 
			this->btnFromStart->Location = System::Drawing::Point(571, 152);
			this->btnFromStart->Name = L"btnFromStart";
			this->btnFromStart->Size = System::Drawing::Size(137, 23);
			this->btnFromStart->TabIndex = 15;
			this->btnFromStart->Text = L"Desde siempre";
			this->btnFromStart->UseVisualStyleBackColor = true;
			// 
			// BtnRefresh
			// 
			this->BtnRefresh->Location = System::Drawing::Point(864, 152);
			this->BtnRefresh->Name = L"BtnRefresh";
			this->BtnRefresh->Size = System::Drawing::Size(137, 23);
			this->BtnRefresh->TabIndex = 16;
			this->BtnRefresh->Text = L"Reiniciar";
			this->BtnRefresh->UseVisualStyleBackColor = true;
			// 
			// btnSearchDNI
			// 
			this->btnSearchDNI->Location = System::Drawing::Point(360, 299);
			this->btnSearchDNI->Name = L"btnSearchDNI";
			this->btnSearchDNI->Size = System::Drawing::Size(75, 26);
			this->btnSearchDNI->TabIndex = 8;
			this->btnSearchDNI->Text = L"Buscar";
			this->btnSearchDNI->UseVisualStyleBackColor = true;
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1115, 631);
			this->Controls->Add(this->BtnRefresh);
			this->Controls->Add(this->btnFromStart);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnSearchP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnSearchDNI);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



};
}
