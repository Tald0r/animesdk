#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class DragableRectController_Class_3_50D343C44D28BEFB_4; }
namespace MoleMole { class DragableRectController_Class_3_50D343C44D28BEFB_5; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_DRAGABLERECTCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15ED7AE0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15ED7C70)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x15ED7FF0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15ED8170)
#define MOLEMOLE_DRAGABLERECTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED8500)

namespace MoleMole
{
	inline static constexpr unsigned int DragableRectController_TypeDefinitionIndex = 46191;

	class DragableRectController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean IsDeActiveWhenMoveToTarget; // 0x19
		::UnityEngine::RectTransform* Source; // 0x20
		::UnityEngine::RectTransform* Target; // 0x28
		::System::Single Offset; // 0x30
		::System::Single AutoMoveSpeed; // 0x34
		::MoleMole::DragableRectController_Class_3_50D343C44D28BEFB_4* OnDragToTarget; // 0x38
		::MoleMole::DragableRectController_Class_3_50D343C44D28BEFB_5* OnDragToTargetCheck; // 0x40
		::UnityEngine::Vector3 Field_5_8; // 0x48
		::System::Boolean Field_5_9; // 0x54
		::System::Boolean Field_5_10; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
