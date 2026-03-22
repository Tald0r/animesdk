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
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCD1CB90)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCD1C950)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_0AD7C8B2EEDD1C81_OFFSET UNITYSDK_OFFSET(0xCD1D560)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xCD1C9D0)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCD1C540)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_301B7346895214E0_OFFSET UNITYSDK_OFFSET(0xCD1D400)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_3E1FF8CB8AF751E6_OFFSET UNITYSDK_OFFSET(0xCD1D250)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xCD1C530)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_A42B0141BE94FABE_OFFSET UNITYSDK_OFFSET(0xCD1CBF0)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCD1C640)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xCD1C770)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCD1D600)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xCD1CDE0)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1D240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int KinematicTrait_TypeDefinitionIndex = 67674;

	class KinematicTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsKinematic; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::KinematicTrait* Method_2_3E1FF8CB8AF751E6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::KinematicTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_3E1FF8CB8AF751E6_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::KinematicTrait* Method_2_301B7346895214E0(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::KinematicTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_301B7346895214E0_OFFSET))(a1);
		}

		::System::Boolean Method_2_0AD7C8B2EEDD1C81(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_0AD7C8B2EEDD1C81_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_A42B0141BE94FABE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_METHOD_2_A42B0141BE94FABE_OFFSET))(this, a1, a2);
		}
	};
}
