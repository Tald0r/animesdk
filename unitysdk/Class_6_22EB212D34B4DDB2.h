#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_D8BD3409B7BC87A2.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"

#define CLASS_6_22EB212D34B4DDB2_METHOD_6_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x9E10B50)
#define CLASS_6_22EB212D34B4DDB2__CTOR_OFFSET UNITYSDK_OFFSET(0x9E10B60)

inline static constexpr unsigned int Class_6_22EB212D34B4DDB2_TypeDefinitionIndex = 64635;

class Class_6_22EB212D34B4DDB2 : public ::Class_5_D8BD3409B7BC87A2
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_22EB212D34B4DDB2__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_6_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_22EB212D34B4DDB2_METHOD_6_858CF2EC5EE423D3_OFFSET))(this);
	}
};
