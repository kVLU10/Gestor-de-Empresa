#pragma once
using namespace System;

public ref class ComboBoxItem1
{
public:
	String^ Name;
	int Value;
	ComboBoxItem1(String^ Name)
	{
		this->Name = Name;
	}

	String^ ToString()  override
	{
		return  this->Name;
	}

};

