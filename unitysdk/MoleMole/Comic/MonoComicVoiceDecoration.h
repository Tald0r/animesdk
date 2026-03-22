#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicDecorateEventBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class VoiceDecorateEvent; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x6FBF260)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_EDITORAWAKE_OFFSET UNITYSDK_OFFSET(0x6FC0640)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x6FC0250)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x6FC0130)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITINEDITOR_OFFSET UNITYSDK_OFFSET(0x6FC0760)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x6FBF330)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x6FC0370)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x6FC0040)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x6FBFE30)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_OFFSET UNITYSDK_OFFSET(0x6FBFF10)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_5AE33E89D3D29F4D_OFFSET UNITYSDK_OFFSET(0x6FBF6F0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_7CDD918CEB77C56B_OFFSET UNITYSDK_OFFSET(0x6FBF450)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_90D0DC11D34D7114_OFFSET UNITYSDK_OFFSET(0x6FC04A0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x6FBFA90)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x6FBFBA0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x6FBF8B0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_SIMULATEANIMPROGRESSFOROUTER_OFFSET UNITYSDK_OFFSET(0x6FC05C0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x6FBF920)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x6FBFCD0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION__CTOR_OFFSET UNITYSDK_OFFSET(0x6FC0800)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x6FC0820)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x6FC0880)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x6FC08E0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x6FC0940)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x6FC0950)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x6FC09B0)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x6FC0A10)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x6FC0A70)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x6FC0A80)
#define MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x6FC0AE0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicVoiceDecoration_TypeDefinitionIndex = 73932;

	class MonoComicVoiceDecoration : public ::MoleMole::Comic::MonoComicDecorateEventBase
	{
	public:
		// static const ::System::String* Field_7_3; // 0x0
		// static const ::System::String* Field_7_4; // 0x0
		::UnityEngine::UI::Image* img; // 0x80
		::UnityEngine::Timeline::VoiceDecorateEvent* Field_7_1; // 0x88
		::UnityEngine::Animation* Field_7_2; // 0x90
		::UnityEngine::AnimationCurve* Field_7_5; // 0x98
		::System::Single Field_7_6; // 0xA0
		::System::Single Field_7_7; // 0xA4
		::UnityEngine::CanvasGroup* Field_7_8; // 0xA8
		::UnityEngine::RectTransform* Field_7_9; // 0xB0
		::UnityEngine::Vector2 Field_7_10; // 0xB8
		::UnityEngine::Vector3 Field_7_11; // 0xC0
		::UnityEngine::Vector2 Field_7_12; // 0xCC
		::UnityEngine::Vector3 Field_7_13; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_ENDPLAY_OFFSET))(this);
		}

		::System::Void Method_7_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_1290EA767C459179_OFFSET))(this);
		}

		::System::Single Method_7_90D0DC11D34D7114()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_90D0DC11D34D7114_OFFSET))(this);
		}

		::System::Void SimulateAnimProgressForOuter(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_SIMULATEANIMPROGRESSFOROUTER_OFFSET))(this, a1);
		}

		::System::Void EditorAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_EDITORAWAKE_OFFSET))(this);
		}

		::System::Void InitInEditor(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_INITINEDITOR_OFFSET))(this, a1);
		}

		::System::Void __base_EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_ENDPLAY_OFFSET))(this);
		}

		::System::Single __base_GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Single __base_GetFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_GETFADEOUTTIME_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void __base_JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void __base_PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION___BASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_5AE33E89D3D29F4D(::UnityEngine::Timeline::VoiceDecorateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::VoiceDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_5AE33E89D3D29F4D_OFFSET))(this, a1);
		}

		::System::Void Method_7_7CDD918CEB77C56B(::UnityEngine::Timeline::VoiceDecorateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::VoiceDecorateEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_7CDD918CEB77C56B_OFFSET))(this, a1);
		}

		::System::Void Method_7_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_OFFSET))(this, a1);
		}

		::System::Void Method_7_479759059E440327_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_479759059E440327_1_OFFSET))(this, a1);
		}

		::System::Void Method_7_9D9CF8F6C2342EE5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICVOICEDECORATION_METHOD_7_9D9CF8F6C2342EE5_OFFSET))(this, a1);
		}
	};
}
