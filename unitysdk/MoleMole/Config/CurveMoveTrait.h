#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9511300)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9510780)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x9510800)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0x9510050)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x950FE20)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x9511C40)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_37676FB75BFFC6D1_OFFSET UNITYSDK_OFFSET(0x9511D20)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x95117C0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x950FDA0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET UNITYSDK_OFFSET(0x9511360)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_A92655175538DE3D_OFFSET UNITYSDK_OFFSET(0x9511E80)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x950FF20)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x9511CB0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x95118F0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x9511C30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveTrait_TypeDefinitionIndex = 40040;

	class CurveMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single MinHeight; // 0x18
		::System::Single MaxHeight; // 0x1C
		::System::Single ColliderOpenHeight; // 0x20
		::System::Single TimeOffset; // 0x24
		::System::Collections::Generic::List_1<::System::Int32>* TimePeriods; // 0x28
		::System::String* UpCurveKey; // 0x30
		::System::String* DownCurveKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_66A56A98FBC17877_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_7D22EC5431ECF5C7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CurveMoveTrait* Method_2_37676FB75BFFC6D1(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_37676FB75BFFC6D1_OFFSET))(a1);
		}

		static ::MoleMole::Config::CurveMoveTrait* Method_2_A92655175538DE3D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_A92655175538DE3D_OFFSET))(a1, a2);
		}
	};
}
