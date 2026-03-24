#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseEventData.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_InputButton.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1B3E1640)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3E15C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKTIME_OFFSET UNITYSDK_OFFSET(0x1B3E15A0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1B3E1560)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DRAGGING_OFFSET UNITYSDK_OFFSET(0x1B3E1620)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ELIGIBLEFORCLICK_OFFSET UNITYSDK_OFFSET(0x1B3E1500)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ENTEREVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1B3E1830)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_LASTPRESS_OFFSET UNITYSDK_OFFSET(0x1B3E13C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERCURRENTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1B3E1420)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERDRAG_OFFSET UNITYSDK_OFFSET(0x1B3E1400)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERENTER_OFFSET UNITYSDK_OFFSET(0x1B3E13A0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERID_OFFSET UNITYSDK_OFFSET(0x1B3E1520)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESSRAYCAST_OFFSET UNITYSDK_OFFSET(0x1B3E1480)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESS_OFFSET UNITYSDK_OFFSET(0x1B3E19C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B3E1540)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSEVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1B3E18F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3E1580)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RAWPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x1B3E13E0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1B3E15E0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_USEDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B3E1600)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISPOINTERMOVING_OFFSET UNITYSDK_OFFSET(0x1B3E1770)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISSCROLLING_OFFSET UNITYSDK_OFFSET(0x1B3E17D0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0x1B3E1650)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3E15D0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKTIME_OFFSET UNITYSDK_OFFSET(0x1B3E15B0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1B3E1570)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DRAGGING_OFFSET UNITYSDK_OFFSET(0x1B3E1630)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_ELIGIBLEFORCLICK_OFFSET UNITYSDK_OFFSET(0x1B3E1510)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_LASTPRESS_OFFSET UNITYSDK_OFFSET(0x1B3E13D0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERCURRENTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1B3E1450)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERDRAG_OFFSET UNITYSDK_OFFSET(0x1B3E1410)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERENTER_OFFSET UNITYSDK_OFFSET(0x1B3E13B0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERID_OFFSET UNITYSDK_OFFSET(0x1B3E1530)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESSRAYCAST_OFFSET UNITYSDK_OFFSET(0x1B3E14C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESS_OFFSET UNITYSDK_OFFSET(0x1B3E19D0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B3E1550)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_PRESSPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3E1590)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RAWPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x1B3E13F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1B3E15F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_USEDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B3E1610)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B3E1AE0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E1660)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B3E24C0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerEventData_TypeDefinitionIndex = 8497;

	class PointerEventData : public ::UnityEngine::EventSystems::BaseEventData
	{
	public:
		::UnityEngine::GameObject* _pointerEnter_k__BackingField; // 0x20
		::UnityEngine::GameObject* m_PointerPress; // 0x28
		::UnityEngine::GameObject* _lastPress_k__BackingField; // 0x30
		::UnityEngine::GameObject* _rawPointerPress_k__BackingField; // 0x38
		::UnityEngine::GameObject* _pointerDrag_k__BackingField; // 0x40
		::UnityEngine::EventSystems::RaycastResult _pointerCurrentRaycast_k__BackingField; // 0x48
		::UnityEngine::EventSystems::RaycastResult _pointerPressRaycast_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* hovered; // 0xD8
		::System::Boolean _eligibleForClick_k__BackingField; // 0xE0
		::System::Int32 _pointerId_k__BackingField; // 0xE4
		::UnityEngine::Vector2 _position_k__BackingField; // 0xE8
		::UnityEngine::Vector2 _delta_k__BackingField; // 0xF0
		::UnityEngine::Vector2 _pressPosition_k__BackingField; // 0xF8
		::UnityEngine::Vector3 _worldPosition_k__BackingField; // 0x100
		::UnityEngine::Vector3 _worldNormal_k__BackingField; // 0x10C
		::System::Single _clickTime_k__BackingField; // 0x118
		::System::Int32 _clickCount_k__BackingField; // 0x11C
		::UnityEngine::Vector2 _scrollDelta_k__BackingField; // 0x120
		::System::Boolean _useDragThreshold_k__BackingField; // 0x128
		::System::Boolean _dragging_k__BackingField; // 0x129
		::UnityEngine::EventSystems::PointerEventData_InputButton _button_k__BackingField; // 0x12C

		::System::Void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA__CTOR_OFFSET))(this, eventSystem);
		}

		::UnityEngine::GameObject* get_pointerEnter()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERENTER_OFFSET))(this);
		}

		::System::Void set_pointerEnter(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERENTER_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_lastPress()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_LASTPRESS_OFFSET))(this);
		}

		::System::Void set_lastPress(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_LASTPRESS_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_rawPointerPress()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RAWPOINTERPRESS_OFFSET))(this);
		}

		::System::Void set_rawPointerPress(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RAWPOINTERPRESS_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_pointerDrag()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERDRAG_OFFSET))(this);
		}

		::System::Void set_pointerDrag(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERDRAG_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast()
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERCURRENTRAYCAST_OFFSET))(this);
		}

		::System::Void set_pointerCurrentRaycast(::UnityEngine::EventSystems::RaycastResult value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERCURRENTRAYCAST_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast()
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESSRAYCAST_OFFSET))(this);
		}

		::System::Void set_pointerPressRaycast(::UnityEngine::EventSystems::RaycastResult value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESSRAYCAST_OFFSET))(this, value);
		}

		::System::Boolean get_eligibleForClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ELIGIBLEFORCLICK_OFFSET))(this);
		}

		::System::Void set_eligibleForClick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_ELIGIBLEFORCLICK_OFFSET))(this, value);
		}

		::System::Int32 get_pointerId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERID_OFFSET))(this);
		}

		::System::Void set_pointerId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERID_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_delta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_delta(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DELTA_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_pressPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSPOSITION_OFFSET))(this);
		}

		::System::Void set_pressPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_PRESSPOSITION_OFFSET))(this, value);
		}

		::System::Single get_clickTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKTIME_OFFSET))(this);
		}

		::System::Void set_clickTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKTIME_OFFSET))(this, value);
		}

		::System::Int32 get_clickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKCOUNT_OFFSET))(this);
		}

		::System::Void set_clickCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_scrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_SCROLLDELTA_OFFSET))(this);
		}

		::System::Void set_scrollDelta(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_SCROLLDELTA_OFFSET))(this, value);
		}

		::System::Boolean get_useDragThreshold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_USEDRAGTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_useDragThreshold(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_USEDRAGTHRESHOLD_OFFSET))(this, value);
		}

		::System::Boolean get_dragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DRAGGING_OFFSET))(this);
		}

		::System::Void set_dragging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DRAGGING_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::PointerEventData_InputButton get_button()
		{
			return ((::UnityEngine::EventSystems::PointerEventData_InputButton(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_BUTTON_OFFSET))(this);
		}

		::System::Void set_button(::UnityEngine::EventSystems::PointerEventData_InputButton value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_BUTTON_OFFSET))(this, value);
		}

		::System::Boolean IsPointerMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISPOINTERMOVING_OFFSET))(this);
		}

		::System::Boolean IsScrolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISSCROLLING_OFFSET))(this);
		}

		::UnityEngine::Camera* get_enterEventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ENTEREVENTCAMERA_OFFSET))(this);
		}

		::UnityEngine::Camera* get_pressEventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSEVENTCAMERA_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_pointerPress()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESS_OFFSET))(this);
		}

		::System::Void set_pointerPress(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESS_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
