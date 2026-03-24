#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1920A05BA1489633.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_0EB9C77975304C39;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDFBCAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropdownOptionContext_TypeDefinitionIndex = 73474;

	class UIGeneralDropdownOptionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onLockedClick; // 0x28
		::Foundation::AssetPath iconPath; // 0x30
		::System::String* descKey; // 0x40
		::Struct_2_A47ACAABA9AAFE92 otherInfo; // 0x48
		::System::String* desc; // 0x60
		::Foundation::AssetPath redImagePath; // 0x68
		::Class_1_0EB9C77975304C39* loginParam; // 0x78
		::MoleMole::LanguageType languageType; // 0x80
		::System::Int32 index; // 0x84
		::Enum_3_1920A05BA1489633 iconType; // 0x88
		::System::Boolean isRed; // 0x8C
		::System::Boolean locked; // 0x8D
		::System::Boolean isDesCenter; // 0x8E
		::System::Boolean isNew; // 0x8F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
