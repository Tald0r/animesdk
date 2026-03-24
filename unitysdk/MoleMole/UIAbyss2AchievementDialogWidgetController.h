#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowAchievementDialogOpenCardWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_2B44F482F0338480;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0xA689BA0)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0xA68AD00)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETGENRENAME_OFFSET UNITYSDK_OFFSET(0xA689960)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA68AD70)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0xA68AD80)
#define MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0xA68AD90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyss2AchievementDialogWidgetController_TypeDefinitionIndex = 47780;

	class UIAbyss2AchievementDialogWidgetController : public ::MoleMole::UIHollowAchievementDialogOpenCardWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* GetGenreName(::System::Int32 itemid, ::System::Int32 genreID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETGENRENAME_OFFSET))(this, itemid, genreID);
		}

		::Class_1_2B44F482F0338480* GetBadgeMap()
		{
			return ((::Class_1_2B44F482F0338480*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* GetCardList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rawCards)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET))(this, rawCards);
		}

		::Class_1_2B44F482F0338480* __base_GetBadgeMap()
		{
			return ((::Class_1_2B44F482F0338480*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* __base_GetCardList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* P0)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSS2ACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET))(this, P0);
		}
	};
}
