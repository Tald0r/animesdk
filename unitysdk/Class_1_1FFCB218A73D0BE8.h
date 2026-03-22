#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_60B60884B6778625.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_2_C5D830057BD6D4F5_1;
class Class_2_C9E71E68DA068632;
class Class_3_F25445702F7D8455;

#define CLASS_1_1FFCB218A73D0BE8_METHOD_1_57569C655EC4C88F_OFFSET UNITYSDK_OFFSET(0x6BF61F0)
#define CLASS_1_1FFCB218A73D0BE8_METHOD_1_8559F4FDD7650370_OFFSET UNITYSDK_OFFSET(0x6BF6280)
#define CLASS_1_1FFCB218A73D0BE8_METHOD_1_999227AE19D7042F_OFFSET UNITYSDK_OFFSET(0x6BF6160)

inline static constexpr unsigned int Class_1_1FFCB218A73D0BE8_TypeDefinitionIndex = 70244;

class Class_1_1FFCB218A73D0BE8 : public ::System::Object
{
public:
	static ::System::Single Method_1_999227AE19D7042F(::Class_3_F25445702F7D8455* a1, ::Enum_3_60B60884B6778625 a2)
	{
		return ((::System::Single(*)(::Class_3_F25445702F7D8455*, ::Enum_3_60B60884B6778625))((::PBYTE)hIl2Cpp + CLASS_1_1FFCB218A73D0BE8_METHOD_1_999227AE19D7042F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_57569C655EC4C88F(::Class_2_C5D830057BD6D4F5_1* a1, ::System::Boolean a2, ::Class_2_C9E71E68DA068632* a3)
	{
		return ((::System::Void(*)(::Class_2_C5D830057BD6D4F5_1*, ::System::Boolean, ::Class_2_C9E71E68DA068632*))((::PBYTE)hIl2Cpp + CLASS_1_1FFCB218A73D0BE8_METHOD_1_57569C655EC4C88F_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_8559F4FDD7650370(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FFCB218A73D0BE8_METHOD_1_8559F4FDD7650370_OFFSET))(a1, a2, a3);
	}
};
