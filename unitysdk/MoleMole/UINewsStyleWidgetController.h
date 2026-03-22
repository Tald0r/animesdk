#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_CB35AEC6EC44C02E;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ENABLEFOCUS_OFFSET UNITYSDK_OFFSET(0xA849B40)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA8497F0)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA849860)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0xA849A30)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWSTYLE_OFFSET UNITYSDK_OFFSET(0xA849960)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA849C10)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA849C40)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStyleWidgetController_TypeDefinitionIndex = 52903;

	class UINewsStyleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_CB35AEC6EC44C02E* get__viewModel()
		{
			return ((::Class_2_CB35AEC6EC44C02E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void ShowStyle(::System::Collections::Generic::List_1<::System::UInt32>* newsList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWSTYLE_OFFSET))(this, newsList);
		}

		::System::Void ShowDetailWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET))(this);
		}

		::System::Void EnableFocus(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ENABLEFOCUS_OFFSET))(this, enable);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
