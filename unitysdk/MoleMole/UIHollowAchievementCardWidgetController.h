#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_27B9A866BFC5E36A_1;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC067D20)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC067DC0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC067BD0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC067EA0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC068390)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0683C0)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC068430)
#define MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0684B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAchievementCardWidgetController_TypeDefinitionIndex = 77383;

	class UIHollowAchievementCardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_27B9A866BFC5E36A_1* _view; // 0x2A0
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* cardList; // 0x2A8
		::System::Boolean isInHollow; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* cardList, ::System::Boolean isInHollow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, cardList, isInHollow);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
