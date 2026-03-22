#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_REACHIKCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x55D290)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x55D200)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_METHOD_2_A7FD4B676C8A33C1_OFFSET UNITYSDK_OFFSET(0x55D2F0)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x55D300)
#define MOLEMOLE_CONFIG_REACHIKCONFIG_METHOD_2_D61A3BD754050C8F_OFFSET UNITYSDK_OFFSET(0x55D1F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReachIKConfig_TypeDefinitionIndex = 66467;

	struct alignas(8) ReachIKConfig
	{
		::System::String* Name; // 0x10
		::System::UInt32 MemberID; // 0x18
		::System::String* AttachPoint; // 0x20

		::System::Void Method_2_D61A3BD754050C8F(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_METHOD_2_D61A3BD754050C8F_OFFSET))(this, a1);
		}

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_A7FD4B676C8A33C1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_METHOD_2_A7FD4B676C8A33C1_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKCONFIG_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}
