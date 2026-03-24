#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPanelFadeInOutScript_Enum_3_A8AF1F0D9E275B5F.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B564300)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEIN_OFFSET UNITYSDK_OFFSET(0x1B564690)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEOUT_OFFSET UNITYSDK_OFFSET(0x1B564820)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_INIT_OFFSET UNITYSDK_OFFSET(0x1B564350)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B564A30)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B564980)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B564B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIPanelFadeInOutScript_TypeDefinitionIndex = 83479;

	class UIPanelFadeInOutScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* root; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::System::String* Field_5_2; // 0x28
		::System::String* Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x38
		::System::Single Field_5_5; // 0x3C
		::System::Single Field_5_6; // 0x40
		::System::Boolean Field_5_7; // 0x44
		::MoleMole::UIPanelFadeInOutScript_Enum_3_A8AF1F0D9E275B5F Field_5_8; // 0x48
		::System::Boolean Field_5_9; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_AWAKE_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_INIT_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEOUT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_ONDISABLE_OFFSET))(this);
		}
	};
}
