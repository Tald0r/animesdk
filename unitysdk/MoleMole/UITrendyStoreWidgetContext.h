#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_FD161B8AFE00CB2F;

#define MOLEMOLE_UITRENDYSTOREWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAB08730)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStoreWidgetContext_TypeDefinitionIndex = 70058;

	class UITrendyStoreWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_FD161B8AFE00CB2F* storeData; // 0x28
		::System::Boolean ShowPreviewMode; // 0x30
		::System::Int32 InitSelectID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
