#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_655;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA776C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogV2PopWindowController_Context_TypeDefinitionIndex = 68478;

	class UIWorkBenchMemoryDialogV2PopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_655*>* partnerMemoryConfigTemplates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGV2POPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
