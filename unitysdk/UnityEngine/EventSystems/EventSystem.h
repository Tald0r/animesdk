#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseInputModule; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A41B4F0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CHANGEEVENTMODULE_OFFSET UNITYSDK_OFFSET(0x1A41BD70)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_EARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x1A41B790)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ALREADYSELECTING_OFFSET UNITYSDK_OFFSET(0x1A418C50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_BASEEVENTDATACACHE_OFFSET UNITYSDK_OFFSET(0x1A418ED0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x1A418850)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTPOINTERCACHE_OFFSET UNITYSDK_OFFSET(0x1A418800)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A418880)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A418530)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ENABLEFASTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1A418390)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_FIRSTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A418860)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1A4188A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_LASTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A418890)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_PIXELDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1A418830)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDNAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1A418810)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SHAREDRAYCASTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1A419850)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SHAREDRAYCASTGRAPHICCOMPARER_OFFSET UNITYSDK_OFFSET(0x1A419DF0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1A41A8A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A41A850)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1A41B4A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A41B640)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A41AA40)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A41A970)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0x1A419E20)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1A418FD0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTGRAPHICCOMPARER_OFFSET UNITYSDK_OFFSET(0x1A419880)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTONE_OFFSET UNITYSDK_OFFSET(0x1A41A0B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1A418F30)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A418C60)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4185F0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_ENABLEFASTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1A418420)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_FIRSTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A418870)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_PIXELDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1A418840)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDNAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1A418820)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKMODULES_OFFSET UNITYSDK_OFFSET(0x1A41ABC0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKRAYCASTTARGETS_OFFSET UNITYSDK_OFFSET(0x1A41ACF0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A41BFA0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEIMPL_OFFSET UNITYSDK_OFFSET(0x1A41B890)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEMODULES_OFFSET UNITYSDK_OFFSET(0x1A4189C0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A41B810)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A41C320)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4188B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A41C420)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A41C4B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A41C540)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A41C5D0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A41C660)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventSystem_TypeDefinitionIndex = 8507;

	class EventSystem : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Comparison_1<::UnityEngine::UI::Graphic*>** StaticGet_s_RaycastGraphicComparer()
		{
			return (::System::Comparison_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x75E0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventSystem*>** StaticGet_m_EventSystems()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventSystem*>**)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x75E8);
		}
		static ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>** StaticGet_s_RaycastComparer()
		{
			return (::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>**)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x75F0);
		}
		static ::System::Boolean* StaticGet_TemporaryDisableFastRaycast()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x3B20);
		}
		static ::System::Boolean* StaticGet_EnableDebugPrintMovingUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x3B21);
		}
		static ::System::Boolean* StaticGet_s_EnableFastRaycast()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x3B22);
		}
		static ::System::Boolean* StaticGet_EnableUpdateBeforePhysics()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x3B23);
		}
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseInputModule*>* m_SystemInputModules; // 0x18
		::UnityEngine::EventSystems::BaseInputModule* m_CurrentInputModule; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>* m_CurrentPointerCache; // 0x28
		::UnityEngine::GameObject* m_FirstSelected; // 0x30
		::System::Boolean m_sendNavigationEvents; // 0x38
		::System::Int32 m_DragThreshold; // 0x3C
		::UnityEngine::GameObject* m_CurrentSelected; // 0x40
		::System::Boolean m_HasFocus; // 0x48
		::System::Boolean m_SelectionGuard; // 0x49
		::UnityEngine::EventSystems::BaseEventData* m_DummyData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableFastRaycast()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ENABLEFASTRAYCAST_OFFSET))();
		}

		static ::System::Void set_EnableFastRaycast(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_ENABLEFASTRAYCAST_OFFSET))(value);
		}

		static ::UnityEngine::EventSystems::EventSystem* get_current()
		{
			return ((::UnityEngine::EventSystems::EventSystem*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::EventSystems::EventSystem* value)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_CURRENT_OFFSET))(value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>* get_CurrentPointerCache()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTPOINTERCACHE_OFFSET))(this);
		}

		::System::Boolean get_sendNavigationEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDNAVIGATIONEVENTS_OFFSET))(this);
		}

		::System::Void set_sendNavigationEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDNAVIGATIONEVENTS_OFFSET))(this, value);
		}

		::System::Int32 get_pixelDragThreshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_PIXELDRAGTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_pixelDragThreshold(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_PIXELDRAGTHRESHOLD_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule()
		{
			return ((::UnityEngine::EventSystems::BaseInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTINPUTMODULE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_firstSelectedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_FIRSTSELECTEDGAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_firstSelectedGameObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_FIRSTSELECTEDGAMEOBJECT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_currentSelectedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTSELECTEDGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_lastSelectedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_LASTSELECTEDGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void UpdateModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEMODULES_OFFSET))(this);
		}

		::System::Boolean get_alreadySelecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ALREADYSELECTING_OFFSET))(this);
		}

		::System::Void SetSelectedGameObject(::UnityEngine::GameObject* selected, ::UnityEngine::EventSystems::BaseEventData* pointer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET))(this, selected, pointer);
		}

		::UnityEngine::EventSystems::BaseEventData* get_baseEventDataCache()
		{
			return ((::UnityEngine::EventSystems::BaseEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_BASEEVENTDATACACHE_OFFSET))(this);
		}

		::System::Void SetSelectedGameObject_1(::UnityEngine::GameObject* selected)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_1_OFFSET))(this, selected);
		}

		static ::System::Int32 RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs)
		{
			return ((::System::Int32(*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTCOMPARER_OFFSET))(lhs, rhs);
		}

		static ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* get_SharedRaycastComparer()
		{
			return ((::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SHAREDRAYCASTCOMPARER_OFFSET))();
		}

		static ::System::Int32 RaycastGraphicComparer(::UnityEngine::UI::Graphic* lhs, ::UnityEngine::UI::Graphic* rhs)
		{
			return ((::System::Int32(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTGRAPHICCOMPARER_OFFSET))(lhs, rhs);
		}

		static ::System::Comparison_1<::UnityEngine::UI::Graphic*>* get_SharedRaycastGraphicComparer()
		{
			return ((::System::Comparison_1<::UnityEngine::UI::Graphic*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SHAREDRAYCASTGRAPHICCOMPARER_OFFSET))();
		}

		::System::Void RaycastAll(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* raycastResults)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTALL_OFFSET))(this, eventData, raycastResults);
		}

		::UnityEngine::EventSystems::RaycastResult RaycastOne(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTONE_OFFSET))(this, eventData);
		}

		::System::Boolean IsPointerOverGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean IsPointerOverGameObject_1(::System::Int32 pointerId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_1_OFFSET))(this, pointerId);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void TickModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKMODULES_OFFSET))(this);
		}

		::System::Void TickRaycastTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKRAYCASTTARGETS_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void EarlyUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_EARLYUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEIMPL_OFFSET))(this);
		}

		::System::Void ChangeEventModule(::UnityEngine::EventSystems::BaseInputModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseInputModule*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CHANGEEVENTMODULE_OFFSET))(this, module);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_ONENABLE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
