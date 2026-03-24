#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63AD998EF2DC353E.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_INPUTACTIONEVENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x319C80)
#define MOLEMOLE_INPUTACTIONEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x319BF0)
#define MOLEMOLE_INPUTACTIONEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x319B80)
#define MOLEMOLE_INPUTACTIONEVENT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x6E97DC0)
#define MOLEMOLE_INPUTACTIONEVENT_GET_INPUTDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x2EC6E0)
#define MOLEMOLE_INPUTACTIONEVENT_METHOD_2_E7C75C4FE7D6D7C8_OFFSET UNITYSDK_OFFSET(0x319CD0)
#define MOLEMOLE_INPUTACTIONEVENT_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x319C90)
#define MOLEMOLE_INPUTACTIONEVENT_SET_INPUTDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x3028C0)

namespace MoleMole
{
	inline static constexpr unsigned int InputActionEvent_TypeDefinitionIndex = 65192;

	struct alignas(4) InputActionEvent
	{
		::MoleMole::InputActionEventType actionEvent; // 0x10
		::MoleMole::InputLogicEventType logicEvent; // 0x14
		::Enum_3_63AD998EF2DC353E _inputDeviceUsage; // 0x18

		static ::MoleMole::InputActionEvent get_Empty()
		{
			return ((::MoleMole::InputActionEvent(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GET_EMPTY_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_EQUALS_1_OFFSET))(this, a1);
		}

		::Enum_3_63AD998EF2DC353E get_InputDeviceUsage()
		{
			return ((::Enum_3_63AD998EF2DC353E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_GET_INPUTDEVICEUSAGE_OFFSET))(this);
		}

		::System::Void set_InputDeviceUsage(::Enum_3_63AD998EF2DC353E a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63AD998EF2DC353E))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_SET_INPUTDEVICEUSAGE_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
		}

		::System::Boolean Method_2_E7C75C4FE7D6D7C8(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_INPUTACTIONEVENT_METHOD_2_E7C75C4FE7D6D7C8_OFFSET))(this, a1);
		}
	};
}
