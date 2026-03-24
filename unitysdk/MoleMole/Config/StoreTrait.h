#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD7CD7E0)
#define MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD7CCD80)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xD7CCE00)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xD7CC730)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xD7CDF70)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xD7CC500)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xD7CE060)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0xD7CC470)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B3F1B1F480D03900_OFFSET UNITYSDK_OFFSET(0xD7CE2F0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xD7CC600)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xD7CE280)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DBAB6B72838D903E_OFFSET UNITYSDK_OFFSET(0xD7CE0D0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0xD7CD840)
#define MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xD7CE050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StoreTrait_TypeDefinitionIndex = 37598;

	class StoreTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 StoreID; // 0x18
		::System::String* PlayerPointKey; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* ActiveMemberConfigIDList; // 0x28
		::System::Int32 TeleportID; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* HideTags; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* Args; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_66A56A98FBC17877_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::StoreTrait* Method_2_DBAB6B72838D903E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DBAB6B72838D903E_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::StoreTrait* Method_2_B3F1B1F480D03900(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B3F1B1F480D03900_OFFSET))(a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
		}
	};
}
