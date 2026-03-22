#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_68CB59C4BCB15F7F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xF172930)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF172670)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF172250)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xF171D50)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0xF1726D0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_35DC431136EB061A_OFFSET UNITYSDK_OFFSET(0xF171F80)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_3EA02C0EE1E2C55B_OFFSET UNITYSDK_OFFSET(0xF172BD0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xF1722D0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xF171D40)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xF171E50)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xF172B60)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_D87DBB00692D4C5F_OFFSET UNITYSDK_OFFSET(0xF1729B0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1729A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterSpawnerTrait_TypeDefinitionIndex = 72820;

	class MonsterSpawnerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SpawnerID; // 0x10
		::Enum_3_68CB59C4BCB15F7F MonsterSpawnerType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_35DC431136EB061A(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_35DC431136EB061A_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_297EA0FD117460C4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_297EA0FD117460C4_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::MonsterSpawnerTrait* Method_2_D87DBB00692D4C5F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MonsterSpawnerTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_D87DBB00692D4C5F_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MonsterSpawnerTrait* Method_2_3EA02C0EE1E2C55B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MonsterSpawnerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_3EA02C0EE1E2C55B_OFFSET))(a1);
		}
	};
}
