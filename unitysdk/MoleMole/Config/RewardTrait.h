#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_REWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEC55E90)
#define MOLEMOLE_CONFIG_REWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEC55500)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xEC55580)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xEC54EB0)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xEC54C80)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_89B2FC95210CA3EA_OFFSET UNITYSDK_OFFSET(0xEC55EF0)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xEC54C70)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_AE02BD0EDAFFECB6_OFFSET UNITYSDK_OFFSET(0xEC567D0)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xEC54D80)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xEC56600)
#define MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_DCE68CCAA1F301B4_OFFSET UNITYSDK_OFFSET(0xEC56670)
#define MOLEMOLE_CONFIG_REWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC565F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RewardTrait_TypeDefinitionIndex = 63674;

	class RewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RewardType; // 0x18
		::System::Int32 RewardID; // 0x1C
		::System::Boolean IsRefreshAfterOnceReward; // 0x20
		::System::Int32 RewardShowType; // 0x24
		::System::Int32 RewardTimeType; // 0x28
		::System::Boolean IsShowModel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::RewardTrait* Method_2_DCE68CCAA1F301B4(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::RewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_DCE68CCAA1F301B4_OFFSET))(a1);
		}

		static ::MoleMole::Config::RewardTrait* Method_2_AE02BD0EDAFFECB6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::RewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_AE02BD0EDAFFECB6_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_89B2FC95210CA3EA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_89B2FC95210CA3EA_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REWARDTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
