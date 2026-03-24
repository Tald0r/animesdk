#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xACCD0C0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xACCCC50)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xACCC090)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xACCB960)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xACCB730)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_1_OFFSET UNITYSDK_OFFSET(0xACCD510)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xACCD330)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0xACCC110)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET UNITYSDK_OFFSET(0xACCCCB0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_813A526A67BEC9FE_OFFSET UNITYSDK_OFFSET(0xACCD580)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xACCB830)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xACCD730)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_CCB7D74737DB9388_OFFSET UNITYSDK_OFFSET(0xACCD3B0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0xACCB6C0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xACCD3A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeleportSelectionTrait_TypeDefinitionIndex = 81263;

	class ConfigTeleportSelectionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::TeleportSelectionType Type; // 0x18
		::System::Single PreInteractDistanceOffset; // 0x1C
		::System::Single InteractDistanceOffset; // 0x20
		::System::Single InteractAngle; // 0x24
		::System::Boolean NeedShowUI; // 0x28
		::System::String* MobileTextKey; // 0x30
		::System::String* PcOrConsoleTextKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_7D22EC5431ECF5C7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* Method_2_CCB7D74737DB9388(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_CCB7D74737DB9388_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554_1(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_1_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* Method_2_813A526A67BEC9FE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_813A526A67BEC9FE_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
