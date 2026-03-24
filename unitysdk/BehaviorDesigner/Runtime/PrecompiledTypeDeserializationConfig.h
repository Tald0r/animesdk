#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG_SETPRECOMPILEDTYPEDESERIALIZATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1B465690)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4656F0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationConfig_TypeDefinitionIndex = 31177;

	class PrecompiledTypeDeserializationConfig : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PrecompiledTypeDeserializationConfig_TypeDefinitionIndex)->GetStaticField(0x7C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void SetPrecompiledTypeDeserializationEnabled()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG_SETPRECOMPILEDTYPEDESERIALIZATIONENABLED_OFFSET))();
		}
	};
}
