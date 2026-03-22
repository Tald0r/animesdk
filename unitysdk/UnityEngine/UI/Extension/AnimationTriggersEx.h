#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class AnimationTriggers; }

#define UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX_PRESSEDUPANIMNAME_OFFSET UNITYSDK_OFFSET(0x16EB2E90)
#define UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EB2F10)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int AnimationTriggersEx_TypeDefinitionIndex = 60682;

	class AnimationTriggersEx : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_kDefaultPressedUpAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimationTriggersEx_TypeDefinitionIndex)->GetStaticField(0x37020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX__CCTOR_OFFSET))();
		}

		static ::System::String* PressedUpAnimName(::UnityEngine::UI::AnimationTriggers* animTriggers)
		{
			return ((::System::String*(*)(::UnityEngine::UI::AnimationTriggers*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX_PRESSEDUPANIMNAME_OFFSET))(animTriggers);
		}
	};
}
