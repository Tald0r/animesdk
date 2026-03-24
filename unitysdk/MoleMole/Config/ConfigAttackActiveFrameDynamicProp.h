#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xB912340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackActiveFrameDynamicProp_TypeDefinitionIndex = 49215;

	class ConfigAttackActiveFrameDynamicProp : public ::System::Object
	{
	public:
		::System::String* BlendCustomPropertyKey; // 0x10
		::System::Int32 OverrdieDynamicPropKey; // 0x18
		::System::Single IndividualFeverConsumePercent; // 0x1C
		::System::Single IndividualFeverRecoverPercent; // 0x20
		::System::Single ExhaustedAccumPercent; // 0x24
		::System::Single RpConsumePercent; // 0x28
		::System::Single SpConsumePercent; // 0x2C
		::System::Single ExhaustedChasePercent; // 0x30
		::System::Single EtherInfectionPercentage; // 0x34
		::System::Single CustomAttackPropertyPercent; // 0x38
		::System::Int32 OverrideDynamicPropKey2; // 0x3C
		::System::Single FeverRecoveryPercent; // 0x40
		::System::Single DamageRatioPercent; // 0x44
		::System::Single RpRecoveryPercent; // 0x48
		::System::Single EtherPurifyPercentage; // 0x4C
		::System::Boolean IsOverrideDynamicProp; // 0x50
		::System::Single ElementAbnormalAccumPercent; // 0x54
		::System::Single BreakStunRatioPercent; // 0x58
		::System::Single SpRecoveryPercent; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKACTIVEFRAMEDYNAMICPROP__CTOR_OFFSET))(this);
		}
	};
}
