#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D4F14A9976FAEBF1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_711029325A16F9C2_OFFSET UNITYSDK_OFFSET(0xD844D20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_7FE685DCE6329F46_OFFSET UNITYSDK_OFFSET(0xD844AF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_C0C89E0E67AC729E_OFFSET UNITYSDK_OFFSET(0xD844B90)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_DF7E81ADDCFE3A0C_OFFSET UNITYSDK_OFFSET(0xD844C60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER__CTOR_OFFSET UNITYSDK_OFFSET(0xD844AE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_TypeDefinitionIndex = 44954;

	class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower : public ::System::Object
	{
	public:
		::Enum_3_D4F14A9976FAEBF1 EffectTarget; // 0x10
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffStartSizeX; // 0x18
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffStartSizeY; // 0x20
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffFadeInTime; // 0x28
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffHoldTime; // 0x30
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffFadeOutTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::DynamicFloat* Method_1_7FE685DCE6329F46(::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* a1)
		{
			return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_7FE685DCE6329F46_OFFSET))(a1);
		}

		::System::Void Method_1_C0C89E0E67AC729E(::MoleMole::Config::EffectAutoDynamicValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectAutoDynamicValue*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_C0C89E0E67AC729E_OFFSET))(this, a1);
		}

		static ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* Method_1_DF7E81ADDCFE3A0C(::MoleMole::Config::DynamicFloat* a1)
		{
			return ((::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor*(*)(::MoleMole::Config::DynamicFloat*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_DF7E81ADDCFE3A0C_OFFSET))(a1);
		}

		::MoleMole::Config::EffectAutoDynamicValue* Method_1_711029325A16F9C2(::MoleMole::Config::EffectAutoDynamicValue* a1)
		{
			return ((::MoleMole::Config::EffectAutoDynamicValue*(*)(::PVOID, ::MoleMole::Config::EffectAutoDynamicValue*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_711029325A16F9C2_OFFSET))(this, a1);
		}
	};
}
