#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6334351218D157D7.h"
#include "unitysdk/Enum_3_4D23D4D1211777E9.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_DD2AD9AF7F7E0075_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x99FEF30)
#define CLASS_3_DD2AD9AF7F7E0075_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x99FEF20)
#define CLASS_3_DD2AD9AF7F7E0075__CTOR_OFFSET UNITYSDK_OFFSET(0x99FF2C0)

inline static constexpr unsigned int Class_3_DD2AD9AF7F7E0075_TypeDefinitionIndex = 48056;

class Class_3_DD2AD9AF7F7E0075 : public ::Class_2_6334351218D157D7<::MoleMole::EntityHandle>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD2AD9AF7F7E0075__CTOR_OFFSET))(this);
	}

	::Enum_3_4D23D4D1211777E9 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_4D23D4D1211777E9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD2AD9AF7F7E0075_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD2AD9AF7F7E0075_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}
};
