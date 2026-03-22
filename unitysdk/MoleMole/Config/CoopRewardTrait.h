#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6251C60)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6251A20)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x6251AA0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x6251610)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x6251600)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6251710)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B6986B42F4273007_OFFSET UNITYSDK_OFFSET(0x6252120)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0x6251840)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x62520B0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_EEE092BDF360730B_OFFSET UNITYSDK_OFFSET(0x6251F00)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_F4FDF6DDB7D0ADBB_OFFSET UNITYSDK_OFFSET(0x6251CC0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x6251EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CoopRewardTrait_TypeDefinitionIndex = 38324;

	class CoopRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RewardID; // 0x10

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

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F4FDF6DDB7D0ADBB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_F4FDF6DDB7D0ADBB_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::CoopRewardTrait* Method_2_EEE092BDF360730B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_EEE092BDF360730B_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CoopRewardTrait* Method_2_B6986B42F4273007(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_B6986B42F4273007_OFFSET))(a1);
		}
	};
}
