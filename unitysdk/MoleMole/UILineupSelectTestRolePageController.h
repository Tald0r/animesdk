#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_A0E3DEDE1BCD4C13;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILineupSelectTestRolePageController_UIRoleSelect; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x9E74990)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_DESTROYALLUNIT_OFFSET UNITYSDK_OFFSET(0x9E74B90)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETALLAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9E75900)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETSHOWAVATARID_OFFSET UNITYSDK_OFFSET(0x9E751F0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9E73ED0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_INITUI_OFFSET UNITYSDK_OFFSET(0x9E74000)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET UNITYSDK_OFFSET(0x9E75890)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E74850)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9E73EE0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E74B00)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9E748F0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SELECTROLE_OFFSET UNITYSDK_OFFSET(0x9E75300)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETMODELACTIVE_OFFSET UNITYSDK_OFFSET(0x9E74670)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETROLEIMAGEACTIVE_OFFSET UNITYSDK_OFFSET(0x9E74D20)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E75A30)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E75B40)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9E75BB0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E75BC0)
#define MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9E75BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectTestRolePageController_TypeDefinitionIndex = 41634;

	class UILineupSelectTestRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_A0E3DEDE1BCD4C13* _view; // 0x2F8
		::Il2CppArray<::MoleMole::UILineupSelectTestRolePageController_UIRoleSelect*>* _units; // 0x300
		::System::UInt32 avatarCount; // 0x308
		::System::UInt32 loadedAvatarCount; // 0x30C
		::System::Boolean random; // 0x310
		::System::Boolean isIndex; // 0x311
		::System::Int32 avatarIndex; // 0x314
		::UnityEngine::Transform* imagesRoot; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* _avatarIDs; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void InitUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_INITUI_OFFSET))(this);
		}

		::UnityEngine::Transform* SetRoleImageActive()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETROLEIMAGEACTIVE_OFFSET))(this);
		}

		::System::Void SetModelActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SETMODELACTIVE_OFFSET))(this, active);
		}

		::System::Void SelectRole(::System::Int32 slotIndex, ::Class_2_D89CCC627A66D0AD* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_SELECTROLE_OFFSET))(this, slotIndex, item);
		}

		::System::Void LoadRTModelFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_LOADRTMODELFINISHED_OFFSET))(this);
		}

		::System::Int32 GetShowAvatarID(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETSHOWAVATARID_OFFSET))(this, index);
		}

		::System::Void GetAllAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_GETALLAVATARIDS_OFFSET))(this);
		}

		::System::Void DestroyAllUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER_DESTROYALLUNIT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
