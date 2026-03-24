#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CF2AFE112809DE0B_METHOD_1_A993A97B0BBBCEC9_OFFSET UNITYSDK_OFFSET(0x6B972A0)
#define CLASS_1_CF2AFE112809DE0B__CTOR_OFFSET UNITYSDK_OFFSET(0x6B97290)

inline static constexpr unsigned int Class_1_CF2AFE112809DE0B_TypeDefinitionIndex = 69971;

class Class_1_CF2AFE112809DE0B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF2AFE112809DE0B__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_A993A97B0BBBCEC9(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CF2AFE112809DE0B_METHOD_1_A993A97B0BBBCEC9_OFFSET))(a1);
	}
};
