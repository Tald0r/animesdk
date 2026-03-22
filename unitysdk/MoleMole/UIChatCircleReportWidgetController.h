#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_CFB77E4CE51A29F6;
class Class_2_1C97EB19EBCD7CE1_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD034680)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD0346F0)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD0347B0)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD034890)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD034BF0)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD034C00)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD034C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatCircleReportWidgetController_TypeDefinitionIndex = 48685;

	class UIChatCircleReportWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1C97EB19EBCD7CE1_1* get__viewModel()
		{
			return ((::Class_2_1C97EB19EBCD7CE1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::Class_1_CFB77E4CE51A29F6* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CFB77E4CE51A29F6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
