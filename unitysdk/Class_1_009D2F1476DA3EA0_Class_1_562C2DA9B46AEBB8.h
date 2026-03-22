#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class Action; }

#define CLASS_1_009D2F1476DA3EA0_CLASS_1_562C2DA9B46AEBB8_METHOD_1_97C44B24A30BE8CB_OFFSET UNITYSDK_OFFSET(0x9595E50)
#define CLASS_1_009D2F1476DA3EA0_CLASS_1_562C2DA9B46AEBB8__CTOR_OFFSET UNITYSDK_OFFSET(0x9595E40)

inline static constexpr unsigned int Class_1_009D2F1476DA3EA0_Class_1_562C2DA9B46AEBB8_TypeDefinitionIndex = 57860;

class Class_1_009D2F1476DA3EA0_Class_1_562C2DA9B46AEBB8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009D2F1476DA3EA0_CLASS_1_562C2DA9B46AEBB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97C44B24A30BE8CB(::MoleMole::Config::SkillTypeToAttackTagsConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SkillTypeToAttackTagsConfig*))((::PBYTE)hIl2Cpp + CLASS_1_009D2F1476DA3EA0_CLASS_1_562C2DA9B46AEBB8_METHOD_1_97C44B24A30BE8CB_OFFSET))(this, a1);
	}
};
