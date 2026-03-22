#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AD7CB0A7B6228E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
class Class_2_23B5560011126547;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8A03EA0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8A03990)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8A031D0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_0919EC977BF19B99_OFFSET UNITYSDK_OFFSET(0x8A039F0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0x8A02C60)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET UNITYSDK_OFFSET(0x8A03D70)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x8A02A30)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x8A043A0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x8A03250)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_76075B8975E5E0D4_OFFSET UNITYSDK_OFFSET(0x8A04020)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x8A02A20)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x8A02B30)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_BDE4F449F5C5A6AE_OFFSET UNITYSDK_OFFSET(0x8A041F0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x8A04180)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x8A03F70)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x8A04010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcIkTrait_TypeDefinitionIndex = 65258;

	class ConfigNpcIkTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean EnablePlayerLookAtIk; // 0x10
		::Enum_3_71AD7CB0A7B6228E NpcLookAtIkType; // 0x14
		::System::Single NpcLookAtIkSectorRadius; // 0x18
		::System::Single NpcLookAtIkSectorAngle; // 0x1C
		::System::Boolean EnableNpcFootIk; // 0x20
		::Class_2_23B5560011126547* component; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1B38DDAB1EBE93B0(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigNpcIkTrait* Method_2_76075B8975E5E0D4(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigNpcIkTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_76075B8975E5E0D4_OFFSET))(a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigNpcIkTrait* Method_2_BDE4F449F5C5A6AE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigNpcIkTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_BDE4F449F5C5A6AE_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0919EC977BF19B99(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_0919EC977BF19B99_OFFSET))(this, a1, a2);
		}
	};
}
