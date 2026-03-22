#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15EC81F0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15EC7800)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0x15EC71B0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x15EC88C0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x15EC6F80)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_24FE016FD8ACDD68_OFFSET UNITYSDK_OFFSET(0x15EC8250)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x15EC8BD0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x15EC7880)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x15EC6F10)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_8EE18F25E27CEE7C_OFFSET UNITYSDK_OFFSET(0x15EC89B0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_AFBDC4A8E379724E_OFFSET UNITYSDK_OFFSET(0x15EC8C40)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x15EC7080)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x15EC8B60)
#define MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC89A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MapIconTrait_TypeDefinitionIndex = 78581;

	class MapIconTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 InfoPanelID; // 0x10
		::System::Boolean ShowInOutside; // 0x14
		::System::String* VOStateKey; // 0x18
		::System::Int32 VOStateValue; // 0x20
		::System::Boolean CanTrack; // 0x24
		::System::Collections::Generic::List_1<::System::Int32>* ValidSuitIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MapIconTrait* Method_2_8EE18F25E27CEE7C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_8EE18F25E27CEE7C_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_24FE016FD8ACDD68(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_24FE016FD8ACDD68_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MapIconTrait* Method_2_AFBDC4A8E379724E(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_AFBDC4A8E379724E_OFFSET))(a1);
		}
	};
}
