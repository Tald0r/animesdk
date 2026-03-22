#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Struct_2_9A6EB2DDAF7C08FF.h"
#include "unitysdk/Struct_2_B4D613182A1ABAE6.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_380;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
template <typename T> class Class_1_CD1ECF9C8E1FE909;

#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ADDRECEIVER_OFFSET UNITYSDK_OFFSET(0x993CEB0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x993C840)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_CLEAN_OFFSET UNITYSDK_OFFSET(0x993C730)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x993C910)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_GET_DEBUGRECEIVERLIST_OFFSET UNITYSDK_OFFSET(0x993D3A0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_A2F9B094563C5CED_OFFSET UNITYSDK_OFFSET(0x993CF70)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_A51C99ADEC940A24_OFFSET UNITYSDK_OFFSET(0x993CA80)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x993C7D0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x993CC70)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x993CD80)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_REMOVERECEIVER_OFFSET UNITYSDK_OFFSET(0x993D2F0)
#define MOLEMOLE_MONOTRIGGEREVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x993D3B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTriggerEventDispatcher_TypeDefinitionIndex = 44313;

	class MonoTriggerEventDispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_380*>* Field_5_1; // 0x20
		::Class_1_CD1ECF9C8E1FE909<::Struct_2_B4D613182A1ABAE6>* Field_5_2; // 0x28
		::Foundation::ViewObject::SuiteInfo SuiteInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_CLEAN_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void AddReceiver(::Class_0_16E4307DCC419505_380* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_380*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_ADDRECEIVER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveReceiver(::Class_0_16E4307DCC419505_380* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_380*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_REMOVERECEIVER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_380*>* get_DebugReceiverList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_380*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_GET_DEBUGRECEIVERLIST_OFFSET))(this);
		}

		::System::Void Method_5_A51C99ADEC940A24(::Struct_2_9A6EB2DDAF7C08FF a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9A6EB2DDAF7C08FF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_A51C99ADEC940A24_OFFSET))(this, a1);
		}

		::System::Void Method_5_A2F9B094563C5CED(::Class_0_16E4307DCC419505_380* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_380*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTRIGGEREVENTDISPATCHER_METHOD_5_A2F9B094563C5CED_OFFSET))(this, a1);
		}
	};
}
