#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5DA2E7556103D5A3_245;
class Class_2_E75CF23561770A7A_1;
namespace MoleMole { class UIBattlePortal_HadalZoneConfig; }
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xCB2A670)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCB2A680)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCB2B300)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCB2A720)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2B910)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__FETCHTYPEDZONES_OFFSET UNITYSDK_OFFSET(0xCB2A8A0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xCB2B920)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEDYNAMICZONE_OFFSET UNITYSDK_OFFSET(0xCB2B5A0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEONEFIXEDZONE_OFFSET UNITYSDK_OFFSET(0xCB2B390)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEZONES_OFFSET UNITYSDK_OFFSET(0xCB2AEB0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCB2BA20)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCB2BA90)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCB2BAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZonePageController_TypeDefinitionIndex = 56995;

	class UIBattlePortal_HadalZonePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_E75CF23561770A7A_1* _view; // 0x2F8
		::System::Int32 _pageIndex; // 0x300
		::System::Int32 _prePageFixedItemCount; // 0x304
		::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_245*>* _fixedZoneLayers; // 0x308
		::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_245*>* _dynamicZoneLayers; // 0x310
		::MoleMole::UIBattlePortal_HadalZoneConfig* _pageWidgetsConfigs; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _FetchTypedZones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__FETCHTYPEDZONES_OFFSET))(this);
		}

		::System::Void _UpdateZones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEZONES_OFFSET))(this);
		}

		::System::Void _UpdateOneFixedZone(::UnityEngine::GameObject* itemObject, ::Class_1_5DA2E7556103D5A3_245* info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_5DA2E7556103D5A3_245*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEONEFIXEDZONE_OFFSET))(this, itemObject, info);
		}

		::System::Void _UpdateDynamicZone(::UnityEngine::GameObject* itemObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__UPDATEDYNAMICZONE_OFFSET))(this, itemObject);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
