#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_69B820D1836544B3_METHOD_1_754623CD13F94435_OFFSET UNITYSDK_OFFSET(0xB029F50)
#define CLASS_1_69B820D1836544B3_METHOD_1_E17DD98ABB75CBDE_OFFSET UNITYSDK_OFFSET(0xB02A000)
#define CLASS_1_69B820D1836544B3__CTOR_OFFSET UNITYSDK_OFFSET(0xB029F40)

inline static constexpr unsigned int Class_1_69B820D1836544B3_TypeDefinitionIndex = 76818;

class Class_1_69B820D1836544B3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69B820D1836544B3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_754623CD13F94435(::System::String* a1, ::System::String*& a2, ::System::String*& a3, ::System::String*& a4, ::System::String*& a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_69B820D1836544B3_METHOD_1_754623CD13F94435_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_1_E17DD98ABB75CBDE(::MoleMole::Config::ScreenEffectType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_1_69B820D1836544B3_METHOD_1_E17DD98ABB75CBDE_OFFSET))(a1);
	}
};
