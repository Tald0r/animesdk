#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_61DC1B04A857465A;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x73D7EE0)
#define MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x73D7F50)
#define MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x73D8050)
#define MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x73D8360)
#define MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x73D8420)
#define MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x73D8430)
#define MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x73D84A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleAutoOperationRowWidgetController_TypeDefinitionIndex = 53324;

	class UISuibianTempleAutoOperationRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_61DC1B04A857465A* get__viewModel()
		{
			return ((::Class_2_61DC1B04A857465A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEAUTOOPERATIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
