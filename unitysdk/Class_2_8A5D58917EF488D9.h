#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F6C737121024A5A.h"

class Class_0_16E4307DCC419505_239;
namespace System { class String; }

#define CLASS_2_8A5D58917EF488D9_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xE7C7750)
#define CLASS_2_8A5D58917EF488D9_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xE7C7570)
#define CLASS_2_8A5D58917EF488D9_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE7C7690)
#define CLASS_2_8A5D58917EF488D9__CTOR_OFFSET UNITYSDK_OFFSET(0xE7C7560)

inline static constexpr unsigned int Class_2_8A5D58917EF488D9_TypeDefinitionIndex = 69585;

class Class_2_8A5D58917EF488D9 : public ::Class_1_6F6C737121024A5A
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_239*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_239*&))((::PBYTE)hIl2Cpp + CLASS_2_8A5D58917EF488D9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A5D58917EF488D9_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A5D58917EF488D9_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A5D58917EF488D9_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
