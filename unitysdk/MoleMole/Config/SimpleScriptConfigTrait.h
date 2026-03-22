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

#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xEC48350)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEC48160)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEC47EE0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xEC47CB0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_2D1E87061B69CB48_OFFSET UNITYSDK_OFFSET(0xEC489A0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0xEC481C0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xEC47F60)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xEC47DB0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xEC47C60)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_D1FF45A7A0892972_OFFSET UNITYSDK_OFFSET(0xEC487F0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC487E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SimpleScriptConfigTrait_TypeDefinitionIndex = 78318;

	class SimpleScriptConfigTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* ScritptConfigPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::SimpleScriptConfigTrait* Method_2_D1FF45A7A0892972(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::SimpleScriptConfigTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_D1FF45A7A0892972_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::SimpleScriptConfigTrait* Method_2_2D1E87061B69CB48(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::SimpleScriptConfigTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_2D1E87061B69CB48_OFFSET))(a1);
		}

		::System::Boolean Method_2_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
		}
	};
}
