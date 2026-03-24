#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/MonsterTraitBase.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE2C8630)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE2C72B0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE2C6640)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE2C6410)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE2C90E0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_4ECA99273B8D9FC8_OFFSET UNITYSDK_OFFSET(0xE2C8690)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_65BF7FA8AEE718F0_OFFSET UNITYSDK_OFFSET(0xE2C91C0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0xE2C8EC0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0xE2C7330)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE2C6510)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE2C9150)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xE2C63C0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_D56589A09C9BD6DA_OFFSET UNITYSDK_OFFSET(0xE2C8F80)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2C8F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlertTrait_TypeDefinitionIndex = 61787;

	class ConfigMonsterAlertTrait : public ::MoleMole::Config::MonsterTraitBase
	{
	public:
		::System::Boolean UseNewMode; // 0x18
		::System::String* AlertConfigKey; // 0x20
		::System::Boolean IsSetAlertValueMax; // 0x28
		::System::Boolean EnterBattleRegardlessOfSameArea; // 0x29
		::System::Boolean NoStackAlertReduceOnEnemyExitSameArea; // 0x2A
		::System::Boolean IsHoldAlertValue; // 0x2B
		::System::Int32 AlertGroup; // 0x2C
		::System::Boolean IsHandleMuteLevelHudOnIdle; // 0x30
		::System::Boolean MuteLevelHudOnIdle; // 0x31
		::System::Boolean IsHandleMuteLevelHudOnEnterBattle; // 0x32
		::System::Boolean MuteLevelHudOnEnterBattle; // 0x33
		::System::Boolean IsHandleShowMonsterHPWhenLevelHUDShowOnIdle; // 0x34
		::System::Boolean ShowMonsterHPWhenLevelHUDShowOnIdle; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_3_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_3_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_3_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_8073A3C8BD4F2EE0(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_8073A3C8BD4F2EE0_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigMonsterAlertTrait* Method_3_D56589A09C9BD6DA(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigMonsterAlertTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_D56589A09C9BD6DA_OFFSET))(a1);
		}

		::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_4ECA99273B8D9FC8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_4ECA99273B8D9FC8_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_3_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigMonsterAlertTrait* Method_3_65BF7FA8AEE718F0(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigMonsterAlertTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_METHOD_3_65BF7FA8AEE718F0_OFFSET))(a1, a2);
		}
	};
}
