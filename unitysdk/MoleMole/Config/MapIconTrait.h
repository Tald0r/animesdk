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

#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE2DAB40)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE2DA160)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xE2DA1E0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE2D9B10)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xE2DB240)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE2D98E0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE2DB6B0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5EC289B2C3B1836B_OFFSET UNITYSDK_OFFSET(0xE2DABA0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_8EE18F25E27CEE7C_OFFSET UNITYSDK_OFFSET(0xE2DB490)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_AFBDC4A8E379724E_OFFSET UNITYSDK_OFFSET(0xE2DB330)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE2D99E0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE2DB640)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0xE2D9870)
#define MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2DB320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MapIconTrait_TypeDefinitionIndex = 49513;

	class MapIconTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 InfoPanelID; // 0x18
		::System::Boolean ShowInOutside; // 0x1C
		::System::String* VOStateKey; // 0x20
		::System::Int32 VOStateValue; // 0x28
		::System::Boolean CanTrack; // 0x2C
		::System::Collections::Generic::List_1<::System::Int32>* ValidSuitIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
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

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MapIconTrait* Method_2_AFBDC4A8E379724E(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_AFBDC4A8E379724E_OFFSET))(a1);
		}

		static ::MoleMole::Config::MapIconTrait* Method_2_8EE18F25E27CEE7C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_8EE18F25E27CEE7C_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_5EC289B2C3B1836B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5EC289B2C3B1836B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
