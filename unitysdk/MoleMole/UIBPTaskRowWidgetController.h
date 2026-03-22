#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_22.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79F6D62CE30E3F8E_165;
class Class_3_AE02BC8285203464_9;
namespace MoleMole { class UIBPTaskRewardRowItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONCLICKLOCKED_OFFSET UNITYSDK_OFFSET(0xC5EFDB0)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONCLICKRECEIVE_OFFSET UNITYSDK_OFFSET(0xC5EFB40)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7F5C0F0)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0x7F5C270)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x7F5C300)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7F5C190)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7F5BFD0)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0xC5EFAA0)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHTASKPROGRESS_OFFSET UNITYSDK_OFFSET(0xC5EF970)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHTASKSTATUS_OFFSET UNITYSDK_OFFSET(0x7F5C980)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHTASKTYPE_OFFSET UNITYSDK_OFFSET(0x7F5C540)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_SETREWARD_OFFSET UNITYSDK_OFFSET(0xC5EFE80)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F0170)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC5F0180)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xC5F01F0)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC5F0250)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC5F02D0)
#define MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC5F0350)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPTaskRowWidgetController_TypeDefinitionIndex = 63708;

	class UIBPTaskRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_165* _view; // 0x2D0
		::Class_3_AE02BC8285203464_9* refBPTask; // 0x2D8
		::MoleMole::UIBPTaskRewardRowItemWidgetController* taskRewardItem; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshTaskType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHTASKTYPE_OFFSET))(this);
		}

		::System::Void RefreshTaskStatus(::Enum_3_4608E37A1B3D374A_22 targetStatus)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_22))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHTASKSTATUS_OFFSET))(this, targetStatus);
		}

		::System::Void RefreshTaskProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHTASKPROGRESS_OFFSET))(this);
		}

		::System::Void RefreshRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_REFRESHREDDOT_OFFSET))(this);
		}

		::System::Void OnClickReceive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONCLICKRECEIVE_OFFSET))(this);
		}

		::System::Void OnClickLocked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_ONCLICKLOCKED_OFFSET))(this);
		}

		::System::Void SetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER_SETREWARD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
