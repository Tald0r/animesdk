#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_738AC7DCAA31737E_METHOD_1_0171AF1A1B2198AD_OFFSET UNITYSDK_OFFSET(0x6AB9990)

inline static constexpr unsigned int Class_1_738AC7DCAA31737E_TypeDefinitionIndex = 78106;

class Class_1_738AC7DCAA31737E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_0171AF1A1B2198AD(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_738AC7DCAA31737E_METHOD_1_0171AF1A1B2198AD_OFFSET))(a1);
	}
};
