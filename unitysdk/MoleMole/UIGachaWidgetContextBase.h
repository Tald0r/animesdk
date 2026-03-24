#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_18;
class Class_3_AE02BC8285203464_8;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD12B7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaWidgetContextBase_TypeDefinitionIndex = 52718;

	class UIGachaWidgetContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_AE02BC8285203464_8* Gacha; // 0x28
		::System::Action* clickPreview; // 0x30
		::Class_0_16E4307DCC419505_18* UIConfig; // 0x38

		::System::Void _ctor(::Class_3_AE02BC8285203464_8* gacha, ::Class_0_16E4307DCC419505_18* uiConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_8*, ::Class_0_16E4307DCC419505_18*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET))(this, gacha, uiConfig);
		}
	};
}
