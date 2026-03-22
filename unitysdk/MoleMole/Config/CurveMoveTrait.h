#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE439E80)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE439300)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE438BD0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE4389A0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE43A8E0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_37676FB75BFFC6D1_OFFSET UNITYSDK_OFFSET(0xE43A780)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0xE43A300)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_4ECA99273B8D9FC8_OFFSET UNITYSDK_OFFSET(0xE439EE0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xE439380)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_A92655175538DE3D_OFFSET UNITYSDK_OFFSET(0xE43A9C0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE438AA0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE43A950)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xE438920)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xE43A430)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE43A770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveTrait_TypeDefinitionIndex = 70891;

	class CurveMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single MinHeight; // 0x10
		::System::Single MaxHeight; // 0x14
		::System::Single ColliderOpenHeight; // 0x18
		::System::Single TimeOffset; // 0x1C
		::System::Collections::Generic::List_1<::System::Int32>* TimePeriods; // 0x20
		::System::String* UpCurveKey; // 0x28
		::System::String* DownCurveKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
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

		static ::MoleMole::Config::CurveMoveTrait* Method_2_37676FB75BFFC6D1(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_37676FB75BFFC6D1_OFFSET))(a1);
		}

		::System::Boolean Method_2_4ECA99273B8D9FC8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_4ECA99273B8D9FC8_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CurveMoveTrait* Method_2_A92655175538DE3D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_A92655175538DE3D_OFFSET))(a1, a2);
		}
	};
}
