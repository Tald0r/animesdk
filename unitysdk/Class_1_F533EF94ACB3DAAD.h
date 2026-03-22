#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79526D80B8F6897C;

#define CLASS_1_F533EF94ACB3DAAD_METHOD_1_670F9011F4A497FF_OFFSET UNITYSDK_OFFSET(0x6E8B3F0)
#define CLASS_1_F533EF94ACB3DAAD_METHOD_1_A780420962C5A1CC_OFFSET UNITYSDK_OFFSET(0x6E8B310)
#define CLASS_1_F533EF94ACB3DAAD_METHOD_1_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x6E8B4D0)
#define CLASS_1_F533EF94ACB3DAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x6E8B3E0)

inline static constexpr unsigned int Class_1_F533EF94ACB3DAAD_TypeDefinitionIndex = 51637;

class Class_1_F533EF94ACB3DAAD : public ::System::Object
{
public:
	::Class_1_79526D80B8F6897C* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A780420962C5A1CC(::Class_1_79526D80B8F6897C* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD_METHOD_1_A780420962C5A1CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_670F9011F4A497FF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD_METHOD_1_670F9011F4A497FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F533EF94ACB3DAAD_METHOD_1_E83D3547A9015657_OFFSET))(this);
	}
};
