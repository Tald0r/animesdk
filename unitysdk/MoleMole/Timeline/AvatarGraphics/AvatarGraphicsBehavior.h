#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIAvatarGraphics; }
namespace System { class Object; }

#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x8F3F0E0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x8F3F0F0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8F3F0D0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_B2281D20FCCE5E19_OFFSET UNITYSDK_OFFSET(0x8F3EFB0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET UNITYSDK_OFFSET(0x8F3F0C0)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8F3EF30)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x8F3EE10)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x8F3EB30)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8F3EC50)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8F3EFA0)

namespace MoleMole::Timeline::AvatarGraphics
{
	inline static constexpr unsigned int AvatarGraphicsBehavior_TypeDefinitionIndex = 57012;

	class AvatarGraphicsBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MoleMole::UIAvatarGraphics* graphicsComp; // 0x18
		::UnityEngine::Vector2 InitHairOffset; // 0x20
		::UnityEngine::Vector2 hairOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_3_B2281D20FCCE5E19(::MoleMole::UIAvatarGraphics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_B2281D20FCCE5E19_OFFSET))(this, a1);
		}

		::System::Void Method_3_ED01C45E2F8DB392(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSBEHAVIOR_METHOD_3_832295EC279E5994_2_OFFSET))(this);
		}
	};
}
