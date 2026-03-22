#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_111.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_458.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_298_METHOD_2_5F2EF3795625C3B4_OFFSET UNITYSDK_OFFSET(0x114B8860)
#define CLASS_2_208CC9941471731A_298__CTOR_OFFSET UNITYSDK_OFFSET(0x114B8850)

inline static constexpr unsigned int Class_2_208CC9941471731A_298_TypeDefinitionIndex = 11055;

class Class_2_208CC9941471731A_298 : public ::Class_1_5DA2E7556103D5A3_111
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_458 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_458, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_298__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5F2EF3795625C3B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_298_METHOD_2_5F2EF3795625C3B4_OFFSET))(this);
	}
};
