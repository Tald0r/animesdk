#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xEC3D2B0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEC3CA60)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEC3C3D0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xEC3BF40)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xEC3BD10)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xEC3D670)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0xEC3CD70)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xEC3C450)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_86B2586D8C91C749_OFFSET UNITYSDK_OFFSET(0xEC3CAC0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xEC3BD00)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xEC3BE10)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xEC3D890)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_D279970D717FABE4_OFFSET UNITYSDK_OFFSET(0xEC3D6E0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_DA8032BE3FA2FD2E_OFFSET UNITYSDK_OFFSET(0xEC3D510)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0xEC3D350)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xEC3CEA0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC3D4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectDoorTrait_TypeDefinitionIndex = 48465;

	class EffectDoorTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		// static const ::System::Single OverrideDoorOffsetLeftRight; // 0x0
		::System::Single Length; // 0x10
		::System::Single Width; // 0x14
		::System::Single Height; // 0x18
		::System::Boolean UseOneWayDoor; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::EffectDoorTrait* Method_2_DA8032BE3FA2FD2E(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::EffectDoorTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_DA8032BE3FA2FD2E_OFFSET))(a1);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::EffectDoorTrait* Method_2_D279970D717FABE4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::EffectDoorTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_D279970D717FABE4_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_86B2586D8C91C749(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_86B2586D8C91C749_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
