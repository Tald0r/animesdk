#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_281;
class PushBoxTileView;

#define PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1815E600)
#define PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__REFRESHBYSERVERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1815E610)

inline static constexpr unsigned int PushBoxTileView___c__DisplayClass16_0_TypeDefinitionIndex = 41378;

class PushBoxTileView___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_281* config; // 0x10
	::PushBoxTileView* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _RefreshByServerInfo_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__REFRESHBYSERVERINFO_B__0_OFFSET))(this);
	}
};
