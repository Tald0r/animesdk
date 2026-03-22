#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_40A95B07B099F6CF.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_72B6B191ED643E5E_2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xD280D70)
#define CLASS_2_72B6B191ED643E5E_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD280D60)

inline static constexpr unsigned int Class_2_72B6B191ED643E5E_2_TypeDefinitionIndex = 75508;

class Class_2_72B6B191ED643E5E_2 : public ::System::Attribute
{
public:
	::Enum_3_40A95B07B099F6CF Field_2_0; // 0x10

	::System::Void _ctor(::Enum_3_40A95B07B099F6CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_40A95B07B099F6CF))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E_2__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_40A95B07B099F6CF Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_40A95B07B099F6CF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E_2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
