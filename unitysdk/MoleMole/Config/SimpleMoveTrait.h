#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB04590)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCB044A0)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCB043F0)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCB041C0)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_9175492CFF855BA0_OFFSET UNITYSDK_OFFSET(0xCB048D0)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_969A80C882053A6C_OFFSET UNITYSDK_OFFSET(0xCB04530)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xCB041B0)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCB042C0)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_CB6D4C2BB3D51B49_OFFSET UNITYSDK_OFFSET(0xCB046F0)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0xCB04470)
#define MOLEMOLE_CONFIG_SIMPLEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB046E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SimpleMoveTrait_TypeDefinitionIndex = 79462;

	class SimpleMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::SimpleMoveTrait* Method_2_CB6D4C2BB3D51B49(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::SimpleMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_CB6D4C2BB3D51B49_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_969A80C882053A6C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_969A80C882053A6C_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::SimpleMoveTrait* Method_2_9175492CFF855BA0(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::SimpleMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLEMOVETRAIT_METHOD_2_9175492CFF855BA0_OFFSET))(a1);
		}
	};
}
