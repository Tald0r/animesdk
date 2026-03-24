#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_BD2BE7927F889C7B;
class Class_2_8B36B2DB492DBF9B_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFashionStoreSellLineWidgetController_Context; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CANCELSCROLLVIEWSELECT_OFFSET UNITYSDK_OFFSET(0xD120730)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_INITSELECTMANUALLY_OFFSET UNITYSDK_OFFSET(0xD120600)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ISROW_OFFSET UNITYSDK_OFFSET(0xD1206B0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD120140)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD1202C0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1201E0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD11FFF0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1207B0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__5_0_OFFSET UNITYSDK_OFFSET(0xD1207C0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD120830)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD1208A0)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD120920)
#define MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1209A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreSellLineWidgetController_TypeDefinitionIndex = 43437;

	class UIFashionStoreSellLineWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_8B36B2DB492DBF9B_3* _view; // 0x2D0
		::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>* _productList; // 0x2D8
		::System::Action_2<::System::Int32, ::System::Int32>* onClickProduct; // 0x2E0
		::MoleMole::UIFashionStoreSellLineWidgetController_Context* _context; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitSelectManually(::System::Int32 col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_INITSELECTMANUALLY_OFFSET))(this, col);
		}

		::System::Boolean IsRow(::System::Int32 row)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_ISROW_OFFSET))(this, row);
		}

		::System::Void CancelScrollViewSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER_CANCELSCROLLVIEWSELECT_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__5_0(::System::Int32 col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__5_0_OFFSET))(this, col);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORESELLLINEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
