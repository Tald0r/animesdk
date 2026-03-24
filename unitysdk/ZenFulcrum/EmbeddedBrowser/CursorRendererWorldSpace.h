#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

namespace UnityEngine { class GameObject; }
namespace ZenFulcrum::EmbeddedBrowser { class PointerUIBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B6B3BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1B6B4060)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B6B4310)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6B4540)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B45A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererWorldSpace_TypeDefinitionIndex = 30572;

	class CursorRendererWorldSpace : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Single zOffset; // 0x20
		::System::Single size; // 0x24
		::UnityEngine::GameObject* cursorHolder; // 0x28
		::UnityEngine::GameObject* cursorImage; // 0x30
		::ZenFulcrum::EmbeddedBrowser::PointerUIBase* pointerUI; // 0x38
		::System::Boolean cursorVisible; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AWAKE_OFFSET))(this);
		}

		::System::Void CursorChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CURSORCHANGE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_ONDESTROY_OFFSET))(this);
		}
	};
}
