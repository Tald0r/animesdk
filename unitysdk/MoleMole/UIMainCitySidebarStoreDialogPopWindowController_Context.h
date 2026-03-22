#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4F5B254ADA117E5F.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYSIDEBARSTOREDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA82C930)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarStoreDialogPopWindowController_Context_TypeDefinitionIndex = 60126;

	class UIMainCitySidebarStoreDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CurrentSelectId; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* PreviewItemList; // 0x30
		::MoleMole::UIControllerContextBase* JumpFromContext; // 0x38
		::Enum_3_4F5B254ADA117E5F JumpFrom; // 0x40
		::System::Boolean FromBack; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARSTOREDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
