#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC23F690)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC23F420)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xC23F000)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xC23F4A0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xC23EFF0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xC23F100)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B6986B42F4273007_OFFSET UNITYSDK_OFFSET(0xC23F970)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xC23F230)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xC23FAD0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_D39AAF7777560A81_OFFSET UNITYSDK_OFFSET(0xC23F6F0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_EEE092BDF360730B_OFFSET UNITYSDK_OFFSET(0xC23FB40)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xC23F960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CoopRewardTrait_TypeDefinitionIndex = 47777;

	class CoopRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_D39AAF7777560A81(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_D39AAF7777560A81_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::CoopRewardTrait* Method_2_B6986B42F4273007(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B6986B42F4273007_OFFSET))(a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CoopRewardTrait* Method_2_EEE092BDF360730B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_EEE092BDF360730B_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}
	};
}
