#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_217;
class Class_2_208CC9941471731A_457;
class Class_2_B90CB9D82BD51720;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET UNITYSDK_OFFSET(0xEE4F0F0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0xEE4F7B0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE4F630)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE4F6D0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE4EFA0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_SET_DATA_OFFSET UNITYSDK_OFFSET(0xEE4F7C0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEE4F850)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE4F900)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE4F970)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE4F9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreVHSDetailWidgetController_TypeDefinitionIndex = 38978;

	class UIVHSStoreVHSDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B90CB9D82BD51720* _view; // 0x2A0
		::Class_2_208CC9941471731A_457* _data; // 0x2A8
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_217*, ::System::Int32>>* _currentPreviewVHSCollectionTags; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AfterDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_457* get_data()
		{
			return ((::Class_2_208CC9941471731A_457*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_GET_DATA_OFFSET))(this);
		}

		::System::Void set_data(::Class_2_208CC9941471731A_457* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_457*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_SET_DATA_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
