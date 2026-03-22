#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3789DF75518DA078_METHOD_1_A069C59AAE453C4E_OFFSET UNITYSDK_OFFSET(0x7C75DE0)

inline static constexpr unsigned int Class_1_3789DF75518DA078_TypeDefinitionIndex = 69188;

class Class_1_3789DF75518DA078 : public ::System::Object
{
public:
	static ::System::String* Method_1_A069C59AAE453C4E(::MoleMole::Config::DamageElementType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_3789DF75518DA078_METHOD_1_A069C59AAE453C4E_OFFSET))(a1);
	}
};
