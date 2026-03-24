#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/MonsterTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE2CAA60)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE2C9E00)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xE2C9E80)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE2C95F0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xE2CB100)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE2C93C0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE2CB5E0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_7FDF8510FF62247F_OFFSET UNITYSDK_OFFSET(0xE2CB7B0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE2C94C0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_B5C23565696FB69B_OFFSET UNITYSDK_OFFSET(0xE2CB650)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_BAA387A7C9320D60_OFFSET UNITYSDK_OFFSET(0xE2CAAC0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE2CB960)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xE2C9370)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0xE2CB1C0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xE2CB240)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2CB5D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterDefaultTrait_TypeDefinitionIndex = 44591;

	class ConfigMonsterDefaultTrait : public ::MoleMole::Config::MonsterTraitBase
	{
	public:
		::System::Int32 AIConfigId; // 0x18
		::MoleMole::Config::CampType Camp; // 0x1C
		::System::Boolean TowardsPlayer; // 0x20
		::System::Boolean MuteAI; // 0x21
		::System::Boolean MuteHUD; // 0x22
		::System::Single ModelSize; // 0x24
		::System::String* ShowName; // 0x28
		::System::Boolean SkipBorn; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_3_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_3_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_3_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_BAA387A7C9320D60(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_BAA387A7C9320D60_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigMonsterDefaultTrait* Method_3_B5C23565696FB69B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigMonsterDefaultTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_B5C23565696FB69B_OFFSET))(a1);
		}

		static ::MoleMole::Config::ConfigMonsterDefaultTrait* Method_3_7FDF8510FF62247F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigMonsterDefaultTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_7FDF8510FF62247F_OFFSET))(a1, a2);
		}

		::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Void Method_3_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_METHOD_3_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
