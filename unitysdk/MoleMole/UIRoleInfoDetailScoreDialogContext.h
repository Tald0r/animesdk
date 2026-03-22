#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAE10C54ABAE6FAF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D89CCC627A66D0AD;

#define MOLEMOLE_UIROLEINFODETAILSCOREDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x750E730)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDetailScoreDialogContext_TypeDefinitionIndex = 58097;

	class UIRoleInfoDetailScoreDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D89CCC627A66D0AD* avatarItemData; // 0x28
		::System::Int32 index; // 0x30
		::Enum_3_CAE10C54ABAE6FAF totalScore; // 0x34
		::Enum_3_CAE10C54ABAE6FAF levelScore; // 0x38
		::Enum_3_CAE10C54ABAE6FAF weaponScore; // 0x3C
		::Enum_3_CAE10C54ABAE6FAF equipScore; // 0x40
		::Enum_3_CAE10C54ABAE6FAF skillScore; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODETAILSCOREDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
