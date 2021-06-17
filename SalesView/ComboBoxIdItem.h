#pragma once

using namespace System;

public ref class ComboBoxIdItem
{
public:
	String^ Name;
	int Value;
	ComboBoxIdItem(String^ Name, int Value)
	{
		this->Name = Name;
		this->Value = Value;
	}

	String^ ToString() override
	{
		return this->Value + " - " + this->Name;
	}

};


