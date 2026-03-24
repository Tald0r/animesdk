#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_11ADBB2FD32E89C4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }

#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD569150)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xD5691C0)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD5692A0)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5693A0)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD5693D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForceSetOwnToggleWidgetController_TypeDefinitionIndex = 62190;

	class UIForceSetOwnToggleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_11ADBB2FD32E89C4* get__viewModel()
		{
			return ((::Class_2_11ADBB2FD32E89C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::UIGeneralFilterPopWindowController* popWindow, ::System::Int32 ownFilterGroupIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralFilterPopWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_INIT_OFFSET))(this, popWindow, ownFilterGroupIndex);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
