#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;

#define MOLEMOLE_SUBSYSTEMBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA49E500)
#define MOLEMOLE_SUBSYSTEMBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0xA49E5F0)
#define MOLEMOLE_SUBSYSTEMBASE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA49E8D0)
#define MOLEMOLE_SUBSYSTEMBASE_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xA49E4F0)
#define MOLEMOLE_SUBSYSTEMBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA49EB30)
#define MOLEMOLE_SUBSYSTEMBASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xA49EDB0)
#define MOLEMOLE_SUBSYSTEMBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA49EE70)
#define MOLEMOLE_SUBSYSTEMBASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xA49F0D0)
#define MOLEMOLE_SUBSYSTEMBASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA49EF30)
#define MOLEMOLE_SUBSYSTEMBASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA49EFA0)
#define MOLEMOLE_SUBSYSTEMBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA49EED0)
#define MOLEMOLE_SUBSYSTEMBASE_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0xA49EE10)
#define MOLEMOLE_SUBSYSTEMBASE_PREPARETODESTROY_OFFSET UNITYSDK_OFFSET(0xA49E580)
#define MOLEMOLE_SUBSYSTEMBASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xA49F010)
#define MOLEMOLE_SUBSYSTEMBASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xA49F070)
#define MOLEMOLE_SUBSYSTEMBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA49E670)
#define MOLEMOLE_SUBSYSTEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA49F140)

namespace MoleMole
{
	inline static constexpr unsigned int SubsystemBase_TypeDefinitionIndex = 76116;

	class SubsystemBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableUpdateWhenGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_AWAKE_OFFSET))(this);
		}

		::System::Void PrepareToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_PREPARETODESTROY_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_DESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONWILLDESTROY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUBSYSTEMBASE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}
	};
}
