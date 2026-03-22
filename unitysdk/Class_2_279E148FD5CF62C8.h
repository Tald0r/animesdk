#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_D07FAEB04D978617;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionOr; }

#define CLASS_2_279E148FD5CF62C8_METHOD_2_AC13E1A23375417A_OFFSET UNITYSDK_OFFSET(0x88E2880)
#define CLASS_2_279E148FD5CF62C8__CTOR_OFFSET UNITYSDK_OFFSET(0x88E2800)

inline static constexpr unsigned int Class_2_279E148FD5CF62C8_TypeDefinitionIndex = 40189;

class Class_2_279E148FD5CF62C8 : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionOr* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_279E148FD5CF62C8__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AC13E1A23375417A(::Class_1_D07FAEB04D978617* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D07FAEB04D978617*))((::PBYTE)hIl2Cpp + CLASS_2_279E148FD5CF62C8_METHOD_2_AC13E1A23375417A_OFFSET))(this, a1);
	}
};
