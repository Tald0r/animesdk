#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_25B3E66D74D4E517;

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS42_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD399240)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS42_2__SENDCHANGESKIN_B__3_OFFSET UNITYSDK_OFFSET(0xD399250)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass42_2_TypeDefinitionIndex = 39878;

	class UIPlayerAccessoryPageController___c__DisplayClass42_2 : public ::System::Object
	{
	public:
		::System::Int32 mainSkinID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS42_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _SendChangeSkin_b__3(::Class_2_25B3E66D74D4E517* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_25B3E66D74D4E517*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS42_2__SENDCHANGESKIN_B__3_OFFSET))(this, x);
		}
	};
}
