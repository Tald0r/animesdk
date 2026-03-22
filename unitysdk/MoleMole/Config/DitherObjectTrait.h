#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCCA1970)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCCA17B0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCCA1570)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xCCA15F0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCCA1340)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_9E83FBD025D6303E_OFFSET UNITYSDK_OFFSET(0xCCA1A20)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCCA1440)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xCCA12F0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0xCCA1810)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_F6DAD249D5BA073C_OFFSET UNITYSDK_OFFSET(0xCCA1BD0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCA19E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DitherObjectTrait_TypeDefinitionIndex = 39128;

	class DitherObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DitherConfigKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DitherObjectTrait* Method_2_9E83FBD025D6303E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DitherObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_9E83FBD025D6303E_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_D32A5475BAED534D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_D32A5475BAED534D_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::DitherObjectTrait* Method_2_F6DAD249D5BA073C(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DitherObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_F6DAD249D5BA073C_OFFSET))(a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
