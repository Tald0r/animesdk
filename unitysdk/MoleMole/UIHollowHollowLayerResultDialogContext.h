#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UILevelResultPageContext; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT_EXECUTECLOSE_OFFSET UNITYSDK_OFFSET(0xC0393B0)
#define MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC0393A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowHollowLayerResultDialogContext_TypeDefinitionIndex = 39534;

	class UIHollowHollowLayerResultDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UILevelResultPageContext* _pageContext; // 0x28
		::System::Action* _onClose; // 0x30
		::System::Boolean ShowBlackMask; // 0x38

		::System::Void _ctor(::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT__CTOR_OFFSET))(this, onClose);
		}

		::System::Void ExecuteClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWHOLLOWLAYERRESULTDIALOGCONTEXT_EXECUTECLOSE_OFFSET))(this);
		}
	};
}
