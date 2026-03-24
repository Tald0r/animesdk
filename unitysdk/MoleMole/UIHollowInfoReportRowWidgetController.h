#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_5F20C77812135856.h"

class Class_1_30D3D578039787FA;
class Class_2_61C40A7AE60889AD_Class_1_BBAF5C1264336F94;
class Class_2_7F8B43B7EEA2AD07;
class Class_3_650F49643915C963;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0xAD59590)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD57800)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAD57B70)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD578A0)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD57760)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAD57CD0)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_SCENEVAR_OFFSET UNITYSDK_OFFSET(0xAD58FE0)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_SHOWPOPWINDOWICON_OFFSET UNITYSDK_OFFSET(0xAD59170)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAD59670)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD59700)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xAD59770)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD597F0)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD59870)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoReportRowWidgetController_TypeDefinitionIndex = 57519;

	class UIHollowInfoReportRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7F8B43B7EEA2AD07* _view; // 0x2D0
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _loadedMats; // 0x2D8
		::Class_1_30D3D578039787FA* uiFrameTextureSheetPlayer; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::Struct_2_5F20C77812135856 SceneVar(::Class_2_61C40A7AE60889AD_Class_1_BBAF5C1264336F94* context, ::Class_3_650F49643915C963* report)
		{
			return ((::Struct_2_5F20C77812135856(*)(::PVOID, ::Class_2_61C40A7AE60889AD_Class_1_BBAF5C1264336F94*, ::Class_3_650F49643915C963*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_SCENEVAR_OFFSET))(this, context, report);
		}

		::System::Void ShowPopWindowIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_SHOWPOPWINDOWICON_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_3_650F49643915C963* report)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_650F49643915C963*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, report);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
