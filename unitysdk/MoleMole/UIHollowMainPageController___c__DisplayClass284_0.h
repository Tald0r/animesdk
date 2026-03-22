#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CHANGECHESSBOARDUPORDOWNMOVEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x80B09B0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET UNITYSDK_OFFSET(0x80B09A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass284_0_TypeDefinitionIndex = 52579;

	class UIHollowMainPageController___c__DisplayClass284_0 : public ::System::Object
	{
	public:
		::System::Action* onAnimFinish; // 0x10
		::Class_5_AF65C3A968E836D2* newChessboard; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* neighbors; // 0x20
		::MoleMole::UIHollowMainPageController* __4__this; // 0x28
		::MoleMole::HollowChessboard::HollowEntity* tempLightEntity; // 0x30
		::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D_Enum_3_E7F2C0F6C689EC3E directionType; // 0x38
		::MoleMole::HollowChessboard::HollowChessboardUID fromChessboardUid; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeChessboardUpOrDownMoveEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CHANGECHESSBOARDUPORDOWNMOVEENTITY_B__0_OFFSET))(this);
		}
	};
}
