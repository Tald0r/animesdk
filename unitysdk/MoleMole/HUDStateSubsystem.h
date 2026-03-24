#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73D51F1A281E07E6.h"
#include "unitysdk/Enum_3_C0FE5C5ECCA2F598.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_EDE9798445562320.h"

class Class_1_3E086DDEB4C7E270;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x6E94100)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GETFACT_OFFSET UNITYSDK_OFFSET(0x6E93BB0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET UNITYSDK_OFFSET(0x6E93AA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_DEFAULTHUDSTATE_OFFSET UNITYSDK_OFFSET(0x6E93B90)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0x6E93520)
#define MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET UNITYSDK_OFFSET(0x6E93490)
#define MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET UNITYSDK_OFFSET(0x6E93DC0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6E93FA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6E94000)
#define MOLEMOLE_HUDSTATESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6E94060)
#define MOLEMOLE_HUDSTATESUBSYSTEM_POPHUDSTATE_OFFSET UNITYSDK_OFFSET(0x6E93880)
#define MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET UNITYSDK_OFFSET(0x6E93660)
#define MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEDEFAULT_OFFSET UNITYSDK_OFFSET(0x6E93D40)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SETFACT_OFFSET UNITYSDK_OFFSET(0x6E93C30)
#define MOLEMOLE_HUDSTATESUBSYSTEM_SET_DEFAULTHUDSTATE_OFFSET UNITYSDK_OFFSET(0x6E93BA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_0_OFFSET UNITYSDK_OFFSET(0x6E94C10)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_1_OFFSET UNITYSDK_OFFSET(0x6E94CA0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_2_OFFSET UNITYSDK_OFFSET(0x6E94CD0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_3_OFFSET UNITYSDK_OFFSET(0x6E94D00)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_4_OFFSET UNITYSDK_OFFSET(0x6E94D90)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_5_OFFSET UNITYSDK_OFFSET(0x6E94DC0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_6_OFFSET UNITYSDK_OFFSET(0x6E94E40)
#define MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_7_OFFSET UNITYSDK_OFFSET(0x6E94EC0)
#define MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6E94B40)
#define MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET UNITYSDK_OFFSET(0x6E93E80)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6E94F50)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6E94FB0)
#define MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6E95010)

namespace MoleMole
{
	inline static constexpr unsigned int HUDStateSubsystem_TypeDefinitionIndex = 43590;

	class HUDStateSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HUDStateSubsystem*>
	{
	public:
		::Class_1_3E086DDEB4C7E270* _facts; // 0x10
		::System::Action_1<::Enum_3_C0FE5C5ECCA2F598>* OnChangeToSubState; // 0x18
		::Enum_3_C0FE5C5ECCA2F598 _DefaultHudState_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::Enum_3_C0FE5C5ECCA2F598 get_OverrideHudState()
		{
			return ((::Enum_3_C0FE5C5ECCA2F598(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_OVERRIDEHUDSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>* get_HUDStateOverrideList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_EDE9798445562320>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_HUDSTATEOVERRIDELIST_OFFSET))(this);
		}

		::System::Void PushHudState(::System::String* tag, ::Enum_3_C0FE5C5ECCA2F598 state, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_C0FE5C5ECCA2F598, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_PUSHHUDSTATE_OFFSET))(this, tag, state, priority);
		}

		::System::Void PopHudState(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_POPHUDSTATE_OFFSET))(this, tag, needRefresh);
		}

		::Enum_3_C0FE5C5ECCA2F598 get_DefaultHudState()
		{
			return ((::Enum_3_C0FE5C5ECCA2F598(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_DEFAULTHUDSTATE_OFFSET))(this);
		}

		::System::Void set_DefaultHudState(::Enum_3_C0FE5C5ECCA2F598 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C0FE5C5ECCA2F598))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SET_DEFAULTHUDSTATE_OFFSET))(this, value);
		}

		::Enum_3_C0FE5C5ECCA2F598 get_CurrentHudState()
		{
			return ((::Enum_3_C0FE5C5ECCA2F598(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GET_CURRENTHUDSTATE_OFFSET))(this);
		}

		::System::Boolean GetFact(::Enum_3_73D51F1A281E07E6 key)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_73D51F1A281E07E6))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_GETFACT_OFFSET))(this, key);
		}

		::System::Void SetFact(::Enum_3_73D51F1A281E07E6 key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_73D51F1A281E07E6, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_SETFACT_OFFSET))(this, key, value);
		}

		::System::Void RecomputeDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_RECOMPUTEDEFAULT_OFFSET))(this);
		}

		::System::Void NotifyIfChanged(::System::Boolean force, ::Enum_3_C0FE5C5ECCA2F598 last)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_C0FE5C5ECCA2F598))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_NOTIFYIFCHANGED_OFFSET))(this, force, last);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean _isCoopMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__ISCOOPMODE_OFFSET))(this);
		}

		::System::Void BindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM_BINDEVENTS_OFFSET))(this);
		}

		::System::Void _BindEvents_b__22_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_0_OFFSET))(this, args);
		}

		::System::Void _BindEvents_b__22_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_1_OFFSET))(this, args);
		}

		::System::Void _BindEvents_b__22_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_2_OFFSET))(this, args);
		}

		::System::Void _BindEvents_b__22_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_3_OFFSET))(this, args);
		}

		::System::Void _BindEvents_b__22_4(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_4_OFFSET))(this, args);
		}

		::System::Void _BindEvents_b__22_5(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_5_OFFSET))(this, args);
		}

		::System::Void _BindEvents_b__22_6(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_6_OFFSET))(this, args);
		}

		::System::Void _BindEvents_b__22_7(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM__BINDEVENTS_B__22_7_OFFSET))(this, args);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDSTATESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
