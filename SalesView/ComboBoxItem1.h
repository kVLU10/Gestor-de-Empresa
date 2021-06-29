#pragma once
using namespace System;

public ref class ComboBoxItem1
{
public:
	String^ Name;
	String^ Value;
	ComboBoxItem1(String^ Name, String^ Value)
	{
		this->Name = Name;
		this->Value = Value;
	}

	String^ ToString()  override
	{
		return  this->Value + " " + this->Name;
	}

};

