#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_268;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_POINTERDOWNBANGBOOCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9851EE0)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9851F50)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x9851FF0)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9852070)
#define MOLEMOLE_POINTERDOWNBANGBOOCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x98520F0)

namespace MoleMole
{
	inline static constexpr unsigned int PointerDownBangBooCard_TypeDefinitionIndex = 78043;

	class PointerDownBangBooCard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_1<::Class_0_16E4307DCC419505_268*>* Field_5_0; // 0x18
		::System::Action* OnPointerUp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Func_1<::Class_0_16E4307DCC419505_268*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Class_0_16E4307DCC419505_268*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERDOWNBANGBOOCARD_ONPOINTERDOWN_OFFSET))(this, a1);
		}
	};
}
