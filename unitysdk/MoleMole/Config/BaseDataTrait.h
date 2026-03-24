#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_BASEDATATRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB092000)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB091D60)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xB092060)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xB092300)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xB091B30)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xB0926E0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_30F308F2DEB302CA_OFFSET UNITYSDK_OFFSET(0xB092580)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xB091DE0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_9C0BDA1095E3B8A0_OFFSET UNITYSDK_OFFSET(0xB0923D0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xB091C30)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xB091AE0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xB0923C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseDataTrait_TypeDefinitionIndex = 65835;

	class BaseDataTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GameplayTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::BaseDataTrait* Method_2_9C0BDA1095E3B8A0(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::BaseDataTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_9C0BDA1095E3B8A0_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::BaseDataTrait* Method_2_30F308F2DEB302CA(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::BaseDataTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_30F308F2DEB302CA_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}
	};
}
