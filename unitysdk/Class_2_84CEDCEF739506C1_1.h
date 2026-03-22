#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_105.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_673.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_84CEDCEF739506C1_1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16A1C620)
#define CLASS_2_84CEDCEF739506C1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1C610)

inline static constexpr unsigned int Class_2_84CEDCEF739506C1_1_TypeDefinitionIndex = 17034;

class Class_2_84CEDCEF739506C1_1 : public ::Class_1_D9FAA3DCCFE14DB8_105
{
public:
	::System::String* Field_2_0; // 0x68

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_673 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_673, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
