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

#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC1E3E80)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC1E3C40)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xC1E3CC0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xC1E4110)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xC1E3830)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xC1E41E0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xC1E3820)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xC1E3930)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xC1E3A60)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xC1E4400)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_CBD0C94253B27859_OFFSET UNITYSDK_OFFSET(0xC1E4250)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_F4FDF6DDB7D0ADBB_OFFSET UNITYSDK_OFFSET(0xC1E3EE0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_F9C2C5D6127F7EE5_OFFSET UNITYSDK_OFFSET(0xC1E4470)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E41D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShowHintTrait_TypeDefinitionIndex = 66398;

	class ShowHintTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ShowHintConfigID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ShowHintTrait* Method_2_CBD0C94253B27859(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ShowHintTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_CBD0C94253B27859_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F4FDF6DDB7D0ADBB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_F4FDF6DDB7D0ADBB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ShowHintTrait* Method_2_F9C2C5D6127F7EE5(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ShowHintTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_F9C2C5D6127F7EE5_OFFSET))(a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
