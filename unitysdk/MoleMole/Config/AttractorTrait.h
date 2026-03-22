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

#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCCF9F40)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCCF9CC0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0xCCF9FA0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xCCFA200)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCCF98B0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xCCFA650)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xCCF9D40)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_73C4177E6639D923_OFFSET UNITYSDK_OFFSET(0xCCFA430)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCCF99B0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xCCF9860)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xCCF9AE0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCCFA5E0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_C55FF61D8ADABD1B_OFFSET UNITYSDK_OFFSET(0xCCFA2D0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCFA2C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttractorTrait_TypeDefinitionIndex = 36549;

	class AttractorTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* attractorInstanceIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AttractorTrait* Method_2_C55FF61D8ADABD1B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AttractorTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_C55FF61D8ADABD1B_OFFSET))(a1);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AttractorTrait* Method_2_73C4177E6639D923(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AttractorTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_73C4177E6639D923_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
		}
	};
}
