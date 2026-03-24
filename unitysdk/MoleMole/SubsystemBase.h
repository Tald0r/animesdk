#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;

#define MOLEMOLE_SUBSYSTEMBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x7AA1A80)
#define MOLEMOLE_SUBSYSTEMBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x7AA1B70)
#define MOLEMOLE_SUBSYSTEMBASE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA1E50)
#define MOLEMOLE_SUBSYSTEMBASE_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x7AA1A70)
#define MOLEMOLE_SUBSYSTEMBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA20B0)
#define MOLEMOLE_SUBSYSTEMBASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x7A719A0)
#define MOLEMOLE_SUBSYSTEMBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7A702B0)
#define MOLEMOLE_SUBSYSTEMBASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x7A71640)
#define MOLEMOLE_SUBSYSTEMBASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA2380)
#define MOLEMOLE_SUBSYSTEMBASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7AA23F0)
#define MOLEMOLE_SUBSYSTEMBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x7A70810)
#define MOLEMOLE_SUBSYSTEMBASE_ONWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x7AA2320)
#define MOLEMOLE_SUBSYSTEMBASE_PREPARETODESTROY_OFFSET UNITYSDK_OFFSET(0x7AA1B00)
#define MOLEMOLE_SUBSYSTEMBASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A6F7E0)
#define MOLEMOLE_SUBSYSTEMBASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A6FA70)
#define MOLEMOLE_SUBSYSTEMBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x7AA1BF0)
#define MOLEMOLE_SUBSYSTEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x7AA2460)

namespace MoleMole
{
	inline static constexpr unsigned int SubsystemBase_TypeDefinitionIndex = 55457;

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
