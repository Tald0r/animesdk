#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A8F5ABF31E066ED4;

#define MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E0A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPlayerMoveChildWindowController_DirData_TypeDefinitionIndex = 48114;

	class UIInLevelPlayerMoveChildWindowController_DirData : public ::System::Object
	{
	public:
		::Class_2_A8F5ABF31E066ED4* trans; // 0x10
		::System::Single rEnd; // 0x18
		::System::Single rBegin; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERMOVECHILDWINDOWCONTROLLER_DIRDATA__CTOR_OFFSET))(this);
		}
	};
}
