#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915;

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA4CA390)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C9820)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialDialogContenxt_TypeDefinitionIndex = 50721;

	class UIAllroundGeneralTutorialDialogContenxt : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915* popupGroupData; // 0x28
		::System::Boolean CanShowBottomTips; // 0x30
		::System::Boolean CanCloseOnlyReachEnd; // 0x31
		::System::Boolean isTrain; // 0x32
		::System::Int32 trainQuestID; // 0x34

		::System::Void _ctor(::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915* popupGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET))(this, popupGroupData);
		}

		::System::Void _ctor_1(::System::Int32 trainQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET))(this, trainQuestID);
		}
	};
}
