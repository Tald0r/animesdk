#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x89F2270)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x89F18D0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_1408A0A93A07AC2C_OFFSET UNITYSDK_OFFSET(0x89F13C0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_5DAF3CA1F13D8B5E_OFFSET UNITYSDK_OFFSET(0x89F22D0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x89F1950)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x89F2720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityFragmentParam_TypeDefinitionIndex = 38108;

	class ConfigAbilityFragmentParam : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::Enum_3_5D65F42F0EEB3310 ValType; // 0x18
		::System::Single Value; // 0x1C
		::System::Boolean BoolValue; // 0x20
		::System::Int32 IntValue; // 0x24
		::System::String* StringValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_1408A0A93A07AC2C(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_1408A0A93A07AC2C_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_5DAF3CA1F13D8B5E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_5DAF3CA1F13D8B5E_OFFSET))(this, a1, a2);
		}
	};
}
