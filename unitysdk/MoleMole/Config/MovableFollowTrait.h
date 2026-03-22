#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x6255300)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x62552A0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6255220)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x6254D20)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x6DF5F50)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_35DC431136EB061A_OFFSET UNITYSDK_OFFSET(0x6254F50)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_51A97E59478F3AA4_OFFSET UNITYSDK_OFFSET(0x6DF61C0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_5789597FCF3BA428_OFFSET UNITYSDK_OFFSET(0x6DF5C30)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x6254D10)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x6254E20)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x6DF6370)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_D5A817156E733CD6_OFFSET UNITYSDK_OFFSET(0x6DF5AD0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x6DF5AC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MovableFollowTrait_TypeDefinitionIndex = 38908;

	class MovableFollowTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::UnityEngine::Vector3 PosOffset; // 0x10
		::System::Int32 FollowConfigID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_35DC431136EB061A(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_35DC431136EB061A_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MovableFollowTrait* Method_2_D5A817156E733CD6(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MovableFollowTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_D5A817156E733CD6_OFFSET))(a1);
		}

		::System::Boolean Method_2_5789597FCF3BA428(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_5789597FCF3BA428_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::MovableFollowTrait* Method_2_51A97E59478F3AA4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MovableFollowTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_51A97E59478F3AA4_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
