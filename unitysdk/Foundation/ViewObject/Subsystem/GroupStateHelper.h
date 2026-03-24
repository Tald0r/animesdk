#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeData.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/System/Object.h"

class Class_3_620977F55CD7E401_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_91DE080BA52DB786;

#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x14EFBC30)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CACHESTATE_OFFSET UNITYSDK_OFFSET(0x14EFC190)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x14EFBAE0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_GET_INS_OFFSET UNITYSDK_OFFSET(0x14EFB9B0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x14EFC2A0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ONGETALLGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x14EFBF70)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x14EFBE00)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_TRYGETSTATEVALUE_OFFSET UNITYSDK_OFFSET(0x14EFC7B0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFC880)

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupStateHelper_TypeDefinitionIndex = 70249;

	class GroupStateHelper : public ::System::Object
	{
	public:
		::Class_1_91DE080BA52DB786<::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry>* _groupStateChangeListenEntries; // 0x10
		::System::Collections::Generic::Dictionary_2<::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32>* GroupStateValueCache; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER__CTOR_OFFSET))(this);
		}

		static ::Foundation::ViewObject::Subsystem::GroupStateHelper* get_Ins()
		{
			return ((::Foundation::ViewObject::Subsystem::GroupStateHelper*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_GET_INS_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CLEAR_OFFSET))(this);
		}

		::System::Void AddListener(::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDLISTENER_OFFSET))(this, entry);
		}

		::System::Void RemoveListener(::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVELISTENER_OFFSET))(this, entry);
		}

		::System::Void OnGetAllGroupState(::System::UInt32 groupId, ::Class_3_620977F55CD7E401_2* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_620977F55CD7E401_2*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ONGETALLGROUPSTATE_OFFSET))(this, groupId, rsp);
		}

		::System::Void NotifyGroupStateChange(::Foundation::ViewObject::Subsystem::GroupStateChangeData data)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGROUPSTATECHANGE_OFFSET))(this, data);
		}

		::System::Void CacheState(::Foundation::Tuple_2<::System::UInt32, ::System::String*> key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CACHESTATE_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetStateValue(::Foundation::Tuple_2<::System::UInt32, ::System::String*> key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_TRYGETSTATEVALUE_OFFSET))(this, key, value);
		}
	};
}
