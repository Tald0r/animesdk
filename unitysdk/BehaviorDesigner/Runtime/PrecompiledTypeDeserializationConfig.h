#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG_SETPRECOMPILEDTYPEDESERIALIZATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1AE54340)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE543A0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationConfig_TypeDefinitionIndex = 30224;

	class PrecompiledTypeDeserializationConfig : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PrecompiledTypeDeserializationConfig_TypeDefinitionIndex)->GetStaticField(0x7940);
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
