#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIFocusBase.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class Selectable; }

#define MONOUIFOCUS_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x972B220)
#define MONOUIFOCUS_GET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0x972B200)
#define MONOUIFOCUS_SET_ANIM_OFFSET UNITYSDK_OFFSET(0x972B230)
#define MONOUIFOCUS_SET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0x972B210)
#define MONOUIFOCUS__CTOR_OFFSET UNITYSDK_OFFSET(0x972B240)

inline static constexpr unsigned int MonoUIFocus_TypeDefinitionIndex = 53831;

class MonoUIFocus : public ::MonoUIFocusBase
{
public:
	::UnityEngine::UI::Selectable* _selectable_k__BackingField; // 0x20
	::UnityEngine::Animator* _anim_k__BackingField; // 0x28
	::UnityEngine::CanvasGroup* canvasGroup; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFOCUS__CTOR_OFFSET))(this);
	}

	::UnityEngine::UI::Selectable* get_selectable()
	{
		return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFOCUS_GET_SELECTABLE_OFFSET))(this);
	}

	::System::Void set_selectable(::UnityEngine::UI::Selectable* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + MONOUIFOCUS_SET_SELECTABLE_OFFSET))(this, value);
	}

	::UnityEngine::Animator* get_anim()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIFOCUS_GET_ANIM_OFFSET))(this);
	}

	::System::Void set_anim(::UnityEngine::Animator* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MONOUIFOCUS_SET_ANIM_OFFSET))(this, value);
	}
};
