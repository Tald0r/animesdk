#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController.h"

class Class_2_79F6D62CE30E3F8E_8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0xA3C8090)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETHOLLOWMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0xA3C7FB0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3C79E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3C7B20)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0xA3C7D00)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C8100)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0xA3C8110)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3C8170)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3C8210)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0xA3C8220)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_Monster_TypeDefinitionIndex = 63862;

	class UIMonsterCardInfoPopWindowController_Monster : public ::MoleMole::UIMonsterCardInfoPopWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_8* _view; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_UPDATEBOSSCFGLIST_OFFSET))(this);
		}

		::System::Int32 GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetHollowMonsterIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETHOLLOWMONSTERIDLIST_OFFSET))(this);
		}

		::System::Int32 __base_GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_UPDATEBOSSCFGLIST_OFFSET))(this);
		}
	};
}
