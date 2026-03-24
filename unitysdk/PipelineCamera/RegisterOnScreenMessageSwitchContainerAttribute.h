#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define PIPELINECAMERA_REGISTERONSCREENMESSAGESWITCHCONTAINERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x197CB6B0)

namespace PipelineCamera
{
	inline static constexpr unsigned int RegisterOnScreenMessageSwitchContainerAttribute_TypeDefinitionIndex = 35481;

	class RegisterOnScreenMessageSwitchContainerAttribute : public ::System::Attribute
	{
	public:
		::System::String* TypeName; // 0x10

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_REGISTERONSCREENMESSAGESWITCHCONTAINERATTRIBUTE__CTOR_OFFSET))(this, type);
		}
	};
}
