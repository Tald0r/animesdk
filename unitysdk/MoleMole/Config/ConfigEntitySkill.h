#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_EQUALSSKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB9164A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_ISEXQTE_OFFSET UNITYSDK_OFFSET(0xB916520)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xB916480)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySkill_TypeDefinitionIndex = 58465;

	class ConfigEntitySkill : public ::System::Object
	{
	public:
		::System::String* InstantTriggerAnimEventID; // 0x10
		::Il2CppArray<::System::String*>* TagList; // 0x18
		::System::String* InstantTriggerAbilityName; // 0x20
		::System::Single NeedSp; // 0x28
		::System::Int32 MaxEp; // 0x2C
		::System::Boolean NotConsumeFever; // 0x30
		::System::Boolean ResetSlienceCdOnConsumeEP; // 0x31
		::System::Boolean EPEmptyWhenInit; // 0x32
		::System::Int32 ConsumeOnceEP; // 0x34
		::MoleMole::Config::EntitySkillType SkillType; // 0x38
		::System::Int32 SilenceCDRecoverEP; // 0x3C
		::MoleMole::Config::EntitySkillType SkillType02; // 0x40
		::System::Single SilenceCD; // 0x44
		::System::Int32 ForceCDRecoverEP; // 0x48
		::System::Single ForceCD; // 0x4C
		::System::Single CountCD; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL__CTOR_OFFSET))(this);
		}

		::System::Boolean EqualsSkillType(::MoleMole::Config::EntitySkillType inputSkillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EntitySkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_EQUALSSKILLTYPE_OFFSET))(this, inputSkillType);
		}

		::System::Boolean IsExQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_ISEXQTE_OFFSET))(this);
		}
	};
}
