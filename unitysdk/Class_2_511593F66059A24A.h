#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0340E479638D8801.h"

class Class_1_D07FAEB04D978617;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractConditionAnd; }

#define CLASS_2_511593F66059A24A_METHOD_2_AC13E1A23375417A_OFFSET UNITYSDK_OFFSET(0x9E5BEE0)
#define CLASS_2_511593F66059A24A__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5BE60)

inline static constexpr unsigned int Class_2_511593F66059A24A_TypeDefinitionIndex = 50844;

class Class_2_511593F66059A24A : public ::Class_1_0340E479638D8801
{
public:
	::MoleMole::Config::ConfigHollowInteractConditionAnd* Field_2_0; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowInteractCondition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractCondition*))((::PBYTE)hIl2Cpp + CLASS_2_511593F66059A24A__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AC13E1A23375417A(::Class_1_D07FAEB04D978617* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D07FAEB04D978617*))((::PBYTE)hIl2Cpp + CLASS_2_511593F66059A24A_METHOD_2_AC13E1A23375417A_OFFSET))(this, a1);
	}
};
