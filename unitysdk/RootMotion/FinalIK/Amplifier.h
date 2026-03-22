#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"

namespace RootMotion::FinalIK { class Amplifier_Body; }

#define ROOTMOTION_FINALIK_AMPLIFIER_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1A6E9A20)
#define ROOTMOTION_FINALIK_AMPLIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E9B60)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Amplifier_TypeDefinitionIndex = 35143;

	class Amplifier : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::Amplifier_Body*>* bodies; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AMPLIFIER_ONMODIFYOFFSET_OFFSET))(this);
		}
	};
}
