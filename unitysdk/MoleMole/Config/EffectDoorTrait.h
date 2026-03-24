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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAF9160)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCAF88C0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCAF8250)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xCAF7DC0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCAF7B90)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xCAF9740)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0xCAF8C20)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xCAF82D0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xCAF7B80)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCAF7C90)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_B80EBAED80A5066C_OFFSET UNITYSDK_OFFSET(0xCAF8920)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCAF9570)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_D279970D717FABE4_OFFSET UNITYSDK_OFFSET(0xCAF93C0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_DA8032BE3FA2FD2E_OFFSET UNITYSDK_OFFSET(0xCAF95E0)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0xCAF9200)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xCAF8D50)
#define MOLEMOLE_CONFIG_EFFECTDOORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF93A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectDoorTrait_TypeDefinitionIndex = 57338;

	class EffectDoorTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		// static const ::System::Single OverrideDoorOffsetLeftRight; // 0x0
		::System::Single Length; // 0x18
		::System::Single Width; // 0x1C
		::System::Single Height; // 0x20
		::System::Boolean UseOneWayDoor; // 0x24

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

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
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

		::System::Boolean Method_2_B80EBAED80A5066C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_B80EBAED80A5066C_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::EffectDoorTrait* Method_2_D279970D717FABE4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::EffectDoorTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_D279970D717FABE4_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::EffectDoorTrait* Method_2_DA8032BE3FA2FD2E(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::EffectDoorTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_DA8032BE3FA2FD2E_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTDOORTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
