#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCD19A00)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCD19770)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCD193F0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCD18EF0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0xCD197D0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_35DC431136EB061A_OFFSET UNITYSDK_OFFSET(0xCD19120)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xCD19470)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xCD18EE0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_A57828EC5BD5373C_OFFSET UNITYSDK_OFFSET(0xCD19B50)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCD18FF0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCD19D00)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_DF08DFCEF48F1D2E_OFFSET UNITYSDK_OFFSET(0xCD19D70)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD19B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnableBeHitTrait_TypeDefinitionIndex = 62127;

	class EnableBeHitTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::CampType Camp; // 0x10
		::System::Boolean SetAliveState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_35DC431136EB061A(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_35DC431136EB061A_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::EnableBeHitTrait* Method_2_A57828EC5BD5373C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::EnableBeHitTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_A57828EC5BD5373C_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::EnableBeHitTrait* Method_2_DF08DFCEF48F1D2E(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::EnableBeHitTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_DF08DFCEF48F1D2E_OFFSET))(a1);
		}
	};
}
