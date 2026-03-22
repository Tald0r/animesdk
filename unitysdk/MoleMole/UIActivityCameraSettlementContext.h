#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DEA03B4D83AE9E3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_283BC81E67AC81A1;
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BB380)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraSettlementContext_TypeDefinitionIndex = 64932;

	class UIActivityCameraSettlementContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_283BC81E67AC81A1* settlementRecord; // 0x28
		::UnityEngine::RenderTexture* captureRT; // 0x30
		::System::Boolean IsRequestFinishPhotoQuest; // 0x38
		::Enum_3_3DEA03B4D83AE9E3 SourceType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
