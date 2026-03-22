#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_21.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_97.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_85_METHOD_2_011FED32953F4A34_OFFSET UNITYSDK_OFFSET(0x114F7B70)
#define CLASS_2_208CC9941471731A_85_TOSTRING_OFFSET UNITYSDK_OFFSET(0x114F7B80)
#define CLASS_2_208CC9941471731A_85__CTOR_OFFSET UNITYSDK_OFFSET(0x114F7B60)

inline static constexpr unsigned int Class_2_208CC9941471731A_85_TypeDefinitionIndex = 10023;

class Class_2_208CC9941471731A_85 : public ::Class_1_EBCA2A4357C4C8BF_21
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_97 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_97, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_011FED32953F4A34()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_85_METHOD_2_011FED32953F4A34_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_85_TOSTRING_OFFSET))(this);
	}
};
