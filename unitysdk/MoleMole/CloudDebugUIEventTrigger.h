#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { template <typename T> class ExecuteEvents_EventFunction_1; }

#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_GETCLOUDDEBUGUIEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x9BADB70)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_METHOD_5_4573330CFA5A608A_OFFSET UNITYSDK_OFFSET(0x9BADEE0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_METHOD_5_F79009C70ED276C1_OFFSET UNITYSDK_OFFSET(0x9BAE460)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9BAF1D0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9BAE7E0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x9BAE960)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x9BAF2C0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x9BAF050)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x9BAED50)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9BAEAE0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x9BAE2E0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x9BAE660)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9BAEBD0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x9BAEED0)
#define MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BAF440)

namespace MoleMole
{
	inline static constexpr unsigned int CloudDebugUIEventTrigger_TypeDefinitionIndex = 80327;

	class CloudDebugUIEventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::CloudDebugUIEventTrigger** StaticGet_Ins()
		{
			return (::MoleMole::CloudDebugUIEventTrigger**)Il2CppClass::FromTypeDefinitionIndex(CloudDebugUIEventTrigger_TypeDefinitionIndex)->GetStaticField(0x42C50);
		}
		::System::Boolean IsPassUIEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::CloudDebugUIEventTrigger* GetCloudDebugUIEventTrigger()
		{
			return ((::MoleMole::CloudDebugUIEventTrigger*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_GETCLOUDDEBUGUIEVENTTRIGGER_OFFSET))();
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONDROP_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void Method_5_F79009C70ED276C1(::UnityEngine::EventSystems::EventTriggerType a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_METHOD_5_F79009C70ED276C1_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* Method_5_4573330CFA5A608A(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDDEBUGUIEVENTTRIGGER_METHOD_5_4573330CFA5A608A_OFFSET))(a1, a2);
		}
	};
}
