#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3D264BF892C65E0C_METHOD_1_00F33E40040648EB_OFFSET UNITYSDK_OFFSET(0x9AB4BE0)

inline static constexpr unsigned int Class_1_3D264BF892C65E0C_TypeDefinitionIndex = 49559;

class Class_1_3D264BF892C65E0C : public ::System::Object
{
public:
	static ::System::String* Method_1_00F33E40040648EB(::MoleMole::Config::DamageHitType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageHitType))((::PBYTE)hIl2Cpp + CLASS_1_3D264BF892C65E0C_METHOD_1_00F33E40040648EB_OFFSET))(a1);
	}
};
