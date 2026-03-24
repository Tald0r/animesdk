#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace MoleMole { class UIMainCityCameraV2Context; }

#define MOLEMOLE_OPENBEGINPHOTOUI_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x8C90F00)
#define MOLEMOLE_OPENBEGINPHOTOUI_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x8C90EF0)
#define MOLEMOLE_OPENBEGINPHOTOUI_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x8C90F40)
#define MOLEMOLE_OPENBEGINPHOTOUI__CTOR_OFFSET UNITYSDK_OFFSET(0x8C90F10)

namespace MoleMole
{
	inline static constexpr unsigned int OpenBeginPhotoUI_TypeDefinitionIndex = 53599;

	class OpenBeginPhotoUI : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::UIMainCityCameraV2Context* _context; // 0x28

		::System::Void _ctor(::MoleMole::UIMainCityCameraV2Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityCameraV2Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENBEGINPHOTOUI__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENBEGINPHOTOUI_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENBEGINPHOTOUI_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENBEGINPHOTOUI_ONPROCESS_OFFSET))(this);
		}
	};
}
