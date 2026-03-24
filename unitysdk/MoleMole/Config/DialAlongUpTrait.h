#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE370F80)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE370A80)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_0964D76C59C6E4FE_OFFSET UNITYSDK_OFFSET(0xE370FE0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE3706D0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE3704A0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE371700)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0xE3712A0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_4CCCD244A04EF8F1_OFFSET UNITYSDK_OFFSET(0xE371770)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xE370B00)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_949D5BE2491FA05D_OFFSET UNITYSDK_OFFSET(0xE3715A0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xE370490)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE3705A0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE371920)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xE3713D0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE371590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DialAlongUpTrait_TypeDefinitionIndex = 47724;

	class DialAlongUpTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single rotateSpeed; // 0x18
		::System::Single initialRotation; // 0x1C
		::System::Boolean useRigidbody; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DialAlongUpTrait* Method_2_949D5BE2491FA05D(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DialAlongUpTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_949D5BE2491FA05D_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DialAlongUpTrait* Method_2_4CCCD244A04EF8F1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DialAlongUpTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_4CCCD244A04EF8F1_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0964D76C59C6E4FE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_0964D76C59C6E4FE_OFFSET))(this, a1, a2);
		}
	};
}
