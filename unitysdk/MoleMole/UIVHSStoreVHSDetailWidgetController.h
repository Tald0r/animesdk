#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_44;
class Class_2_208CC9941471731A_836;
class Class_2_B90CB9D82BD51720_1;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET UNITYSDK_OFFSET(0xAA75EA0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0xAA76560)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA763E0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA76480)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA75D50)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_SET_DATA_OFFSET UNITYSDK_OFFSET(0xAA76570)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA76600)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA766A0)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA76710)
#define MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA76790)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreVHSDetailWidgetController_TypeDefinitionIndex = 74027;

	class UIVHSStoreVHSDetailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B90CB9D82BD51720_1* _view; // 0x2A0
		::Class_2_208CC9941471731A_836* _data; // 0x2A8
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_44*, ::System::Int32>>* _currentPreviewVHSCollectionTags; // 0x2B0

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

		::Class_2_208CC9941471731A_836* get_data()
		{
			return ((::Class_2_208CC9941471731A_836*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_GET_DATA_OFFSET))(this);
		}

		::System::Void set_data(::Class_2_208CC9941471731A_836* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_836*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREVHSDETAILWIDGETCONTROLLER_SET_DATA_OFFSET))(this, value);
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
