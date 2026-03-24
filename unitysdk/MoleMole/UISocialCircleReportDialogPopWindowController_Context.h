#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EFD2995AE44E9021.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_19B7C5138FC90FBC;
class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLEREPORTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAADA6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleReportDialogPopWindowController_Context_TypeDefinitionIndex = 66931;

	class UISocialCircleReportDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF2C726EEEEC912D* SocialCircleData; // 0x28
		::Class_2_19B7C5138FC90FBC* TextValidate; // 0x30
		::Enum_3_EFD2995AE44E9021 ReportDialogMode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEREPORTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
