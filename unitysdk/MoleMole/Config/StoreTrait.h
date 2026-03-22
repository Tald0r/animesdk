#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE447090)
#define MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE446CA0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE4467A0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_25996F1180FB0C28_OFFSET UNITYSDK_OFFSET(0xE4470F0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_35DC431136EB061A_OFFSET UNITYSDK_OFFSET(0xE4469D0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xE446D20)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B3F1B1F480D03900_OFFSET UNITYSDK_OFFSET(0xE447540)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE4468A0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xE446750)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE4476A0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DBAB6B72838D903E_OFFSET UNITYSDK_OFFSET(0xE447390)
#define MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE447380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StoreTrait_TypeDefinitionIndex = 66210;

	class StoreTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 StoreID; // 0x10
		::System::String* PlayerPointKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_35DC431136EB061A(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_35DC431136EB061A_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::StoreTrait* Method_2_DBAB6B72838D903E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DBAB6B72838D903E_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_25996F1180FB0C28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_25996F1180FB0C28_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::StoreTrait* Method_2_B3F1B1F480D03900(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_B3F1B1F480D03900_OFFSET))(a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
