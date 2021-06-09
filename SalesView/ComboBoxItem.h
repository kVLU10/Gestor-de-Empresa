#pragma once
using namespace System;

public ref class ComboBoxItem
{
public:
	String^ Name;
	int Value;
	ComboBoxItem(String^ Name)
	{
		this->Name = Name;
	}

	String^ ToString()  override
	{
		return  this->Name;
	}

};

