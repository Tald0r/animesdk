#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CDAC16D6E8EB95EB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2CCC5D7984CDCED4;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIGeneralTokenContext; }
namespace MoleMole { class UITokenShowConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEINFOPAGECONTEXT_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xAAC9110)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC9490)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageContext_TypeDefinitionIndex = 41236;

	class UIRoleInfoPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_2CCC5D7984CDCED4*>* _allItems; // 0x28
		::Class_2_D89CCC627A66D0AD* avatarData; // 0x30
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0x38
		::System::Int32 targetSubType; // 0x3C
		::System::Boolean forcePreviewMode; // 0x40
		::System::Boolean forceFriendPreviewMode; // 0x41
		::System::Boolean forceClickEquip; // 0x42
		::System::Boolean forceClickWeapon; // 0x43
		::System::Boolean IsFadeInWithBlack; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIGeneralTokenContext* Construct(::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* showList)
		{
			return ((::MoleMole::UIGeneralTokenContext*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT_CONSTRUCT_OFFSET))(this, showList);
		}
	};
}
