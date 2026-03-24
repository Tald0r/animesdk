#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
class Class_1_ABD7A7F1422D10D5;
namespace MoleMole::Config { class ConfigAbilityFragment; }
namespace MoleMole::Config { class ConfigAbilityFragmentParam; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB0843D0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB083B30)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB0838A0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xB083B90)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xB083410)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1EA0894A9616ED1B_OFFSET UNITYSDK_OFFSET(0xB084B20)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xB084880)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xB083920)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_765192F9253B61D8_OFFSET UNITYSDK_OFFSET(0xB083EB0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_7EB3EC942CE2F477_OFFSET UNITYSDK_OFFSET(0xB084B90)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_887F0117515D9A94_OFFSET UNITYSDK_OFFSET(0xB084710)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xB083510)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xB083640)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xB084490)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xB0833B0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0xB083D80)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_FA311815CBA2D8CB_OFFSET UNITYSDK_OFFSET(0xB084500)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xB083E30)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xB084470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityAttacherTrait_TypeDefinitionIndex = 60433;

	class AbilityAttacherTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityFragment*>* AbilityList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_F86E3F6E3E2B1642(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_F86E3F6E3E2B1642_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AbilityAttacherTrait* Method_2_FA311815CBA2D8CB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AbilityAttacherTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_FA311815CBA2D8CB_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_765192F9253B61D8(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_765192F9253B61D8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_887F0117515D9A94(::Class_1_ABD7A7F1422D10D5* a1, ::MoleMole::Config::ConfigAbilityFragmentParam* a2)
		{
			return ((::System::Void(*)(::Class_1_ABD7A7F1422D10D5*, ::MoleMole::Config::ConfigAbilityFragmentParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_887F0117515D9A94_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Void Method_2_1EA0894A9616ED1B(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1EA0894A9616ED1B_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AbilityAttacherTrait* Method_2_7EB3EC942CE2F477(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AbilityAttacherTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_7EB3EC942CE2F477_OFFSET))(a1);
		}
	};
}
