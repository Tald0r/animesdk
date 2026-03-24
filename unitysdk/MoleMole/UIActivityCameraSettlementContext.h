#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DEA03B4D83AE9E3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_00ACD147555A40FA;
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD2313A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraSettlementContext_TypeDefinitionIndex = 62035;

	class UIActivityCameraSettlementContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_00ACD147555A40FA* settlementRecord; // 0x28
		::UnityEngine::RenderTexture* captureRT; // 0x30
		::System::Boolean IsRequestFinishPhotoQuest; // 0x38
		::Enum_3_3DEA03B4D83AE9E3 SourceType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
