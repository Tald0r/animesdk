#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAROLEPOOLDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAD2BEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRolePoolDialogContext_TypeDefinitionIndex = 47644;

	class UIGachaRolePoolDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewbieChooseAvatarList; // 0x28
		::System::Boolean IsUseNewbieChooseAvatar; // 0x30
		::System::UInt32 NewbieChooseAvatarCount; // 0x34
		::System::UInt32 GachaID; // 0x38
		::System::Int32 DefaultSelectRoleIndex; // 0x3C
		::System::UInt32 TotalGachaTimes; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
