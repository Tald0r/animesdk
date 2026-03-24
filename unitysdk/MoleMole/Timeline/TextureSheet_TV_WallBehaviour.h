#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole::Timeline { class TextureSheet_TV_WallClip; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB93F3F0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0xB93F160)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB93F150)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xB93F4B0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_65A0F51B8CD97552_OFFSET UNITYSDK_OFFSET(0xB93F170)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xB93F3E0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB93F2F0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB93EF90)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB93F000)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB93EDE0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB93F140)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextureSheet_TV_WallBehaviour_TypeDefinitionIndex = 37406;

	class TextureSheet_TV_WallBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::SceneObjectStateWidget*>* walls; // 0x10
		::MoleMole::Timeline::TextureSheet_TV_WallClip* clip; // 0x18
		::System::String* configKey; // 0x20
		::System::Double lastTime; // 0x28
		::System::Double deltaTime; // 0x30
		::System::String* lastConfigKey; // 0x38
		::System::Boolean isInit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_65A0F51B8CD97552(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_65A0F51B8CD97552_OFFSET))(this, a1);
		}

		::System::Void Method_2_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Boolean Method_2_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLBEHAVIOUR_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
		}
	};
}
