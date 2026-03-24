#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int ScreenLogCameraSubModule_TypeDefinitionIndex = 35484;

	class ScreenLogCameraSubModule : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DebugCameraDataBlender()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenLogCameraSubModule_TypeDefinitionIndex)->GetStaticField(0x8610);
		}
	};
}
