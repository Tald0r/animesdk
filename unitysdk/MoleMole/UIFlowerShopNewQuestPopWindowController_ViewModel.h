#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_119;

#define MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xBF03170)
#define MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBF03230)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewQuestPopWindowController_ViewModel_TypeDefinitionIndex = 77099;

	class UIFlowerShopNewQuestPopWindowController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_119<::System::Collections::Generic::List_1<::System::Int32>*>* CustomQuestIDs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
