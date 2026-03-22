#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EQuestType.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_1;
class Class_2_208CC9941471731A_279;

#define MOLEMOLE_UIRECEIVEQUESTDIALOGPOPWINDOWCONTROLLER_PICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EA7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReceiveQuestDialogPopWindowController_PicItemData_TypeDefinitionIndex = 63094;

	class UIReceiveQuestDialogPopWindowController_PicItemData : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_279* m_specialQuestConfig; // 0x10
		::Class_2_0A55B5A82A61DAFA_1* m_hollowQuestTemplateExt; // 0x18
		::Share::EQuestType m_questType; // 0x20
		::System::Int32 m_index; // 0x24

		::System::Void _ctor(::Share::EQuestType questType, ::Class_2_0A55B5A82A61DAFA_1* hollowQuestTemplateExt, ::Class_2_208CC9941471731A_279* specialQuestConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EQuestType, ::Class_2_0A55B5A82A61DAFA_1*, ::Class_2_208CC9941471731A_279*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECEIVEQUESTDIALOGPOPWINDOWCONTROLLER_PICITEMDATA__CTOR_OFFSET))(this, questType, hollowQuestTemplateExt, specialQuestConfig, index);
		}
	};
}
