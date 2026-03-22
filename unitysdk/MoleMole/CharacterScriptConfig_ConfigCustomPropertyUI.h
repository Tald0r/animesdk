#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI__CTOR_OFFSET UNITYSDK_OFFSET(0x6294F10)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUI_TypeDefinitionIndex = 47316;

	class CharacterScriptConfig_ConfigCustomPropertyUI : public ::System::Object
	{
	public:
		::System::String* MaxValueMaterialPath; // 0x10
		::System::String* HudCustomProperty; // 0x18
		::System::String* UICtrlName; // 0x20
		::System::String* HudEffectFadeOutAnimClip; // 0x28
		::System::String* ExtraMaterialPath; // 0x30
		::System::String* HudEffectLoopAnimClip; // 0x38
		::System::String* HudEffectFadeInAnimClip; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CustomPropertyRedirections; // 0x48
		::System::String* HudEffectPath; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI__CTOR_OFFSET))(this);
		}
	};
}
