#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_7E21E2F8DEAA5F4C_9;

#define MOLEMOLE_UIARPEGGIOTALENTSELECTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2C7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioTalentSelectDialogContext_TypeDefinitionIndex = 47059;

	class UIArpeggioTalentSelectDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_7E21E2F8DEAA5F4C_9* serverTalentReq; // 0x28
		::System::Int32 slotIndex; // 0x30
		::System::Int32 chapterIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOTALENTSELECTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
