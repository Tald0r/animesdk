#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF174D80)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF1746D0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_1362C35F089A1E42_OFFSET UNITYSDK_OFFSET(0xF175630)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xF174240)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xF175310)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xF174010)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_20FFBFCFFA98BCF8_OFFSET UNITYSDK_OFFSET(0xF1753F0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xF1755C0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xF174750)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xF174110)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xF173FC0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xF175550)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0xF174DE0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1753E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PathGraphTrait_TypeDefinitionIndex = 70773;

	class PathGraphTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PathGraphID; // 0x10
		::System::Int32 StateID; // 0x14
		::System::Boolean EnableAllSubGraph; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* EnabledSubGraph; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::PathGraphTrait* Method_2_20FFBFCFFA98BCF8(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::PathGraphTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_20FFBFCFFA98BCF8_OFFSET))(a1);
		}

		::System::Boolean Method_2_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::PathGraphTrait* Method_2_1362C35F089A1E42(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::PathGraphTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_METHOD_2_1362C35F089A1E42_OFFSET))(a1, a2);
		}
	};
}
