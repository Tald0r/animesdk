#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER_AUDIOPLAYINGSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xB28A690)
#define MOLEMOLE_UICOMICPAGECONTROLLER_AUDIOPLAYINGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB28A710)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_audioPlayingState_TypeDefinitionIndex = 62533;

	class UIComicPageController_audioPlayingState : public ::System::Object
	{
	public:
		::System::String* audioKey; // 0x10
		::System::UInt32 audioPendingID; // 0x18
		::System::Boolean isFinish; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_AUDIOPLAYINGSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_AUDIOPLAYINGSTATE_RESET_OFFSET))(this);
		}
	};
}
