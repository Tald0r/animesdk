#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9B5BA30)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9B5B770)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9B5B360)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x9B5B7D0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x9B5AE60)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_353105E82FD2FDD0_OFFSET UNITYSDK_OFFSET(0x9B5BEA0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_35DC431136EB061A_OFFSET UNITYSDK_OFFSET(0x9B5B090)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_5CCE7A4B8EC6305E_OFFSET UNITYSDK_OFFSET(0x9B5BC80)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x9B5AF60)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x9B5AE10)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x9B5BE30)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x9B5B3E0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x9B5BAF0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B5BC70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterBattleRegionTrait_TypeDefinitionIndex = 48583;

	class CharacterBattleRegionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* OverrideBornBattleRegion; // 0x10
		::System::Boolean EnableBattleRegionTeleport; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_35DC431136EB061A(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_35DC431136EB061A_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_POSTPROCESSENTITY_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CharacterBattleRegionTrait* Method_2_5CCE7A4B8EC6305E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CharacterBattleRegionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_5CCE7A4B8EC6305E_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CharacterBattleRegionTrait* Method_2_353105E82FD2FDD0(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CharacterBattleRegionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_353105E82FD2FDD0_OFFSET))(a1);
		}
	};
}
