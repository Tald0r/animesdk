#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define CLASS_2_47BB065BE5107FA1_CLASS_1_411C3AD4E9447B2C_METHOD_1_D9BAA9877EA14480_OFFSET UNITYSDK_OFFSET(0xDA29B50)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_411C3AD4E9447B2C__CTOR_OFFSET UNITYSDK_OFFSET(0xDA29B40)

inline static constexpr unsigned int Class_2_47BB065BE5107FA1_Class_1_411C3AD4E9447B2C_TypeDefinitionIndex = 79710;

class Class_2_47BB065BE5107FA1_Class_1_411C3AD4E9447B2C : public ::System::Object
{
public:
	::Struct_2_FA5F50563E60AFBA Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_411C3AD4E9447B2C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D9BAA9877EA14480(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_411C3AD4E9447B2C_METHOD_1_D9BAA9877EA14480_OFFSET))(this, a1);
	}
};
