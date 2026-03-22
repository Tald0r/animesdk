#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AA2BE468EDCE452.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_2_84CEDCEF739506C1_2;
class Class_3_AA6DF3A878195D3F;
class Class_3_C0D5B1A036ED00F0;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_65E64D0A1BE71043_1_METHOD_2_7F8A2BBB0650534A_OFFSET UNITYSDK_OFFSET(0xB53E780)
#define CLASS_2_65E64D0A1BE71043_1_METHOD_2_873F1544B247CA21_OFFSET UNITYSDK_OFFSET(0xB53DEE0)
#define CLASS_2_65E64D0A1BE71043_1_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB53DE80)
#define CLASS_2_65E64D0A1BE71043_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB53DC30)

inline static constexpr unsigned int Class_2_65E64D0A1BE71043_1_TypeDefinitionIndex = 69292;

class Class_2_65E64D0A1BE71043_1 : public ::Class_1_5AA2BE468EDCE452
{
public:
	::Class_2_84CEDCEF739506C1_2* Field_2_4; // 0x40
	::Class_3_AA6DF3A878195D3F* Field_2_2; // 0x48
	::Class_3_C0D5B1A036ED00F0* Field_2_3; // 0x50
	::System::Single Field_2_5; // 0x58
	::System::Single Field_2_1; // 0x5C
	::System::Single Field_2_0; // 0x60

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_873F1544B247CA21(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1_METHOD_2_873F1544B247CA21_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7F8A2BBB0650534A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1_METHOD_2_7F8A2BBB0650534A_OFFSET))(this, a1);
	}
};
