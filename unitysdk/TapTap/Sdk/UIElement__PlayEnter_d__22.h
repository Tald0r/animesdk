#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIElement; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ADAD2B0)
#define TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ADAD810)
#define TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ADAD870)
#define TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ADAD820)
#define TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADAD2A0)
#define TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAD280)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIElement__PlayEnter_d__22_TypeDefinitionIndex = 9460;

	class UIElement__PlayEnter_d__22 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* _rectTransform_5__5; // 0x10
		::UnityEngine::CanvasGroup* _canvasGroup_5__4; // 0x18
		::TapTap::Sdk::UIElement* __4__this; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Single _startTime_5__2; // 0x30
		::System::Single _targetX_5__6; // 0x34
		::System::Single _endTime_5__3; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__PLAYENTER_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
