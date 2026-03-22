#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MOVABLETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCD1EF30)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCD1EAB0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCD1E0F0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xCD1DAA0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCD1D870)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0xCD1E170)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCD1D970)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xCD1D820)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCD1EFF0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_CA444252700C31C6_OFFSET UNITYSDK_OFFSET(0xCD1EB10)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_EFDD2B063A38FBA9_OFFSET UNITYSDK_OFFSET(0xCD1F060)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_F3186527AF5B9FE5_OFFSET UNITYSDK_OFFSET(0xCD1F1C0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1EFE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MovableTrait_TypeDefinitionIndex = 48357;

	class MovableTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* FixedCameraKey; // 0x10
		::Enum_3_E36C894DCA3F304A MovablePathDir; // 0x18
		::UnityEngine::Vector3 PosStart; // 0x1C
		::UnityEngine::Vector3 PosEnd; // 0x28
		::System::Int32 initProgress; // 0x34
		::System::Boolean reverseInputDir; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_8741A88D50268453_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MovableTrait* Method_2_EFDD2B063A38FBA9(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MovableTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_EFDD2B063A38FBA9_OFFSET))(a1);
		}

		static ::MoleMole::Config::MovableTrait* Method_2_F3186527AF5B9FE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MovableTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_F3186527AF5B9FE5_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_CA444252700C31C6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_CA444252700C31C6_OFFSET))(this, a1, a2);
		}
	};
}
