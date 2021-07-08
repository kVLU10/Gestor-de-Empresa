#pragma once
using namespace System;


namespace SalesController {

	[Serializable]
	public ref class ConnectionParam
	{
	public:
		property String^ Server;
		property String^ Database;
		property String^ User;
		property String^ Password;
	};
}