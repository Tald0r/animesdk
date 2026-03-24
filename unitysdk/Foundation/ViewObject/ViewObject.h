#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectReadyFlagsRequest.h"
#include "unitysdk/System/Object.h"

class Class_1_5FA9CCDDD9957726;
class Class_1_B7E341C5F1A6F199;
namespace Foundation::ViewObject { class IViewObjectComponent; }
namespace Foundation::ViewObject::Container { template <typename T> class ComponentContainer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_ADDREADYREQUIRE_OFFSET UNITYSDK_OFFSET(0x8B54FC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_CHECKCUSTOMREADYFLAGSEVENT_OFFSET UNITYSDK_OFFSET(0x8B54D90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_CHECKREADY_OFFSET UNITYSDK_OFFSET(0x8B541F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_CLEARALLCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x8B539A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_AWOKEN_OFFSET UNITYSDK_OFFSET(0x8B53770)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_BPOSTEDREADY_OFFSET UNITYSDK_OFFSET(0x8B54CC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_COMPONENTSVIEW_OFFSET UNITYSDK_OFFSET(0x8B556D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_CONFIGVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x8B53710)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x8B535E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_MARKEDFORDESTROY_OFFSET UNITYSDK_OFFSET(0x8B53730)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_METAFLAGS_OFFSET UNITYSDK_OFFSET(0x8B537B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8B535A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_NETID_OFFSET UNITYSDK_OFFSET(0x8B535C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_READYFLAGS_OFFSET UNITYSDK_OFFSET(0x8B54D00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_RECYCLING_OFFSET UNITYSDK_OFFSET(0x8B53750)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_REQUIREREADYFLAGS_OFFSET UNITYSDK_OFFSET(0x8B54CE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_SELFHANDLE_OFFSET UNITYSDK_OFFSET(0x8B53580)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_SPAWNCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8B53790)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_HASREADYFLAG_OFFSET UNITYSDK_OFFSET(0x8B54D20)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_INTERNALATTACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8B54540)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_INTERNALUNATTACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8B54360)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_MARKDESTROY_OFFSET UNITYSDK_OFFSET(0x8B53D30)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_MARKSPAWNCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8B53E00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYCOMPONENTAWAKE_OFFSET UNITYSDK_OFFSET(0x8B53E90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYCOMPONENTFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x8B55350)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYCOMPONENTUPDATEENABLE_OFFSET UNITYSDK_OFFSET(0x8B53670)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYREADY_OFFSET UNITYSDK_OFFSET(0x8B54E70)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_ONECSEVENT_OFFSET UNITYSDK_OFFSET(0x8B546E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_RECYCLE_OFFSET UNITYSDK_OFFSET(0x8B537D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_REGISTERCUSTOMREADYFLAGSEVENT_OFFSET UNITYSDK_OFFSET(0x8B550B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_REMOVEREADYFLAG_OFFSET UNITYSDK_OFFSET(0x8B54F50)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_REMOVEREADYREQUIRE_OFFSET UNITYSDK_OFFSET(0x8B55030)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SETCONFIGVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x8B54670)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SETREADYFLAG_OFFSET UNITYSDK_OFFSET(0x8B54EE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_AWOKEN_OFFSET UNITYSDK_OFFSET(0x8B53780)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_BPOSTEDREADY_OFFSET UNITYSDK_OFFSET(0x8B54CD0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_CONFIGVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x8B53720)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x8B535F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_MARKEDFORDESTROY_OFFSET UNITYSDK_OFFSET(0x8B53740)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_METAFLAGS_OFFSET UNITYSDK_OFFSET(0x8B537C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8B535B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_NETID_OFFSET UNITYSDK_OFFSET(0x8B535D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_READYFLAGS_OFFSET UNITYSDK_OFFSET(0x8B54D10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_RECYCLING_OFFSET UNITYSDK_OFFSET(0x8B53760)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_REQUIREREADYFLAGS_OFFSET UNITYSDK_OFFSET(0x8B54CF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_SELFHANDLE_OFFSET UNITYSDK_OFFSET(0x8B53590)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_SPAWNCOMPLETE_OFFSET UNITYSDK_OFFSET(0x8B537A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x8B542C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x8B55750)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObject_TypeDefinitionIndex = 46600;

	class ViewObject : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MaxFlags = 0xFFFFFFFF; // 0x0
		::Foundation::ViewObject::Container::ComponentContainer_1<::Foundation::ViewObject::IViewObjectComponent*>* ComponentContainer; // 0x10
		::Foundation::ViewObject::ViewObjectHandle _SelfHandle_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectReadyFlagsRequest>* _readyFlagsRequests; // 0x30
		::Class_1_5FA9CCDDD9957726* _ConfigViewObject_k__BackingField; // 0x38
		::System::UInt32 _NetID_k__BackingField; // 0x40
		::System::UInt32 _RequireReadyFlags_k__BackingField; // 0x44
		::System::Boolean _bPostedReady_k__BackingField; // 0x48
		::System::Boolean _SpawnComplete_k__BackingField; // 0x49
		::System::Boolean _Awoken_k__BackingField; // 0x4A
		::System::Boolean _enable; // 0x4B
		::System::UInt32 _ReadyFlags_k__BackingField; // 0x4C
		::System::Boolean _Recycling_k__BackingField; // 0x50
		::System::Boolean _MarkedForDestroy_k__BackingField; // 0x51
		::Foundation::ViewObject::EViewObjectMetaFlags _MetaFlags_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT__CTOR_OFFSET))(this);
		}

		::Foundation::ViewObject::ViewObjectHandle get_SelfHandle()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_SELFHANDLE_OFFSET))(this);
		}

		::System::Void set_SelfHandle(::Foundation::ViewObject::ViewObjectHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_SELFHANDLE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_NetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_NETID_OFFSET))(this);
		}

		::System::Void set_NetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_NETID_OFFSET))(this, value);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_ENABLE_OFFSET))(this, value);
		}

		::Class_1_5FA9CCDDD9957726* get_ConfigViewObject()
		{
			return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_CONFIGVIEWOBJECT_OFFSET))(this);
		}

		::System::Void set_ConfigViewObject(::Class_1_5FA9CCDDD9957726* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_CONFIGVIEWOBJECT_OFFSET))(this, value);
		}

		::System::Boolean get_MarkedForDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_MARKEDFORDESTROY_OFFSET))(this);
		}

		::System::Void set_MarkedForDestroy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_MARKEDFORDESTROY_OFFSET))(this, value);
		}

		::System::Boolean get_Recycling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_RECYCLING_OFFSET))(this);
		}

		::System::Void set_Recycling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_RECYCLING_OFFSET))(this, value);
		}

		::System::Boolean get_Awoken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_AWOKEN_OFFSET))(this);
		}

		::System::Void set_Awoken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_AWOKEN_OFFSET))(this, value);
		}

		::System::Boolean get_SpawnComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_SPAWNCOMPLETE_OFFSET))(this);
		}

		::System::Void set_SpawnComplete(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_SPAWNCOMPLETE_OFFSET))(this, value);
		}

		::Foundation::ViewObject::EViewObjectMetaFlags get_MetaFlags()
		{
			return ((::Foundation::ViewObject::EViewObjectMetaFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_METAFLAGS_OFFSET))(this);
		}

		::System::Void set_MetaFlags(::Foundation::ViewObject::EViewObjectMetaFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectMetaFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_METAFLAGS_OFFSET))(this, value);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_RECYCLE_OFFSET))(this);
		}

		::System::Void MarkDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_MARKDESTROY_OFFSET))(this);
		}

		::System::Void MarkSpawnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_MARKSPAWNCOMPLETE_OFFSET))(this);
		}

		::System::Void NotifyComponentAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYCOMPONENTAWAKE_OFFSET))(this);
		}

		::System::Void NotifyComponentUpdateEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYCOMPONENTUPDATEENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_UPDATE_OFFSET))(this);
		}

		::System::Void ClearAllComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_CLEARALLCOMPONENTS_OFFSET))(this);
		}

		::System::Void InternalUnAttachComponent(::Foundation::ViewObject::IViewObjectComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::IViewObjectComponent*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_INTERNALUNATTACHCOMPONENT_OFFSET))(this, component);
		}

		::System::Void InternalAttachComponent(::Foundation::ViewObject::IViewObjectComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::IViewObjectComponent*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_INTERNALATTACHCOMPONENT_OFFSET))(this, component);
		}

		::System::Void SetConfigViewObject(::Class_1_5FA9CCDDD9957726* configViewObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SETCONFIGVIEWOBJECT_OFFSET))(this, configViewObject);
		}

		::System::Void OnEcsEvent(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_ONECSEVENT_OFFSET))(this, evt);
		}

		::System::Boolean get_bPostedReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_BPOSTEDREADY_OFFSET))(this);
		}

		::System::Void set_bPostedReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_BPOSTEDREADY_OFFSET))(this, value);
		}

		::System::UInt32 get_RequireReadyFlags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_REQUIREREADYFLAGS_OFFSET))(this);
		}

		::System::Void set_RequireReadyFlags(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_REQUIREREADYFLAGS_OFFSET))(this, value);
		}

		::System::UInt32 get_ReadyFlags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_READYFLAGS_OFFSET))(this);
		}

		::System::Void set_ReadyFlags(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SET_READYFLAGS_OFFSET))(this, value);
		}

		::System::Boolean HasReadyFlag(::System::UInt32 flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_HASREADYFLAG_OFFSET))(this, flag);
		}

		::System::Void CheckReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_CHECKREADY_OFFSET))(this);
		}

		::System::Void SetReadyFlag(::System::UInt32 flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_SETREADYFLAG_OFFSET))(this, flag);
		}

		::System::Void RemoveReadyFlag(::System::UInt32 flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_REMOVEREADYFLAG_OFFSET))(this, flag);
		}

		::System::Void AddReadyRequire(::System::UInt32 bitFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_ADDREADYREQUIRE_OFFSET))(this, bitFlag);
		}

		::System::Void RemoveReadyRequire(::System::UInt32 bitFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_REMOVEREADYREQUIRE_OFFSET))(this, bitFlag);
		}

		::System::Void RegisterCustomReadyFlagsEvent(::System::UInt32 flags, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent featureEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_REGISTERCUSTOMREADYFLAGSEVENT_OFFSET))(this, flags, featureEvent);
		}

		::System::Void CheckCustomReadyFlagsEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_CHECKCUSTOMREADYFLAGSEVENT_OFFSET))(this);
		}

		::System::Void NotifyReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYREADY_OFFSET))(this);
		}

		::System::Void NotifyComponentFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent featureEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_NOTIFYCOMPONENTFEATUREEVENT_OFFSET))(this, featureEvent);
		}

		::System::Collections::Generic::IEnumerable_1<::Foundation::ViewObject::IViewObjectComponent*>* get_ComponentsView()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::ViewObject::IViewObjectComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT_GET_COMPONENTSVIEW_OFFSET))(this);
		}
	};
}
