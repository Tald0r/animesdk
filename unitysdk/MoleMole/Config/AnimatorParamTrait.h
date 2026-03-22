#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorBoolParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorFloatParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorIntParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorTriggerParam.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x622D1A0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x622CE30)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x622C4F0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x622C570)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0x622C060)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x622BE30)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_295448A7D9E27995_OFFSET UNITYSDK_OFFSET(0x622D830)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_5B7AE7009068F755_OFFSET UNITYSDK_OFFSET(0x622D9E0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x622BF30)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x622D7C0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0x622CE90)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x622BDA0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x622D240)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x622D7B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorParamTrait_TypeDefinitionIndex = 76445;

	class AnimatorParamTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorTriggerParam>* AnimatorTriggerParams; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorBoolParam>* AnimatorBoolParams; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorIntParam>* AnimatorIntParams; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorFloatParam>* AnimatorFloatParams; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AnimatorParamTrait* Method_2_295448A7D9E27995(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_295448A7D9E27995_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::AnimatorParamTrait* Method_2_5B7AE7009068F755(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_5B7AE7009068F755_OFFSET))(a1);
		}

		::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_C7F9ED430E054F62_OFFSET))(this, a1, a2);
		}
	};
}
