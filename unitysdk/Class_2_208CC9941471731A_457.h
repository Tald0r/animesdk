#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_67.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_654.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_457_METHOD_2_F9F45BC372292C87_OFFSET UNITYSDK_OFFSET(0x16CE6D10)
#define CLASS_2_208CC9941471731A_457__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE6D00)

inline static constexpr unsigned int Class_2_208CC9941471731A_457_TypeDefinitionIndex = 12857;

class Class_2_208CC9941471731A_457 : public ::Class_1_D9FAA3DCCFE14DB8_67
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_654 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_654, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_457__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F9F45BC372292C87()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_457_METHOD_2_F9F45BC372292C87_OFFSET))(this);
	}
};
