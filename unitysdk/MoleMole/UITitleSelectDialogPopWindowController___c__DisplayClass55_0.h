#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C52591F09EF1D4E4;
class Class_2_208CC9941471731A_931;

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDF4E0E0)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__ONUPDATETITLEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xDF4E0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass55_0_TypeDefinitionIndex = 79605;

	class UITitleSelectDialogPopWindowController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_931* variableTemplateExt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdateTitleData_b__0(::Class_1_C52591F09EF1D4E4* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C52591F09EF1D4E4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__ONUPDATETITLEDATA_B__0_OFFSET))(this, data);
		}
	};
}
