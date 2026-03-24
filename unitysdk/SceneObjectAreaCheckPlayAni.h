#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FowardDir.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SCENEOBJECTAREACHECKPLAYANI__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA4E40)

inline static constexpr unsigned int SceneObjectAreaCheckPlayAni_TypeDefinitionIndex = 38473;

class SceneObjectAreaCheckPlayAni : public ::System::Object
{
public:
	::System::String* BackEnterAnimatorTrigger; // 0x10
	::System::String* EnterAnimatorTrigger; // 0x18
	::System::Boolean IsOpenCheck; // 0x20
	::System::Boolean DefaultIsOpen; // 0x21
	::FowardDir FixedFowardDir; // 0x24
	::System::Single OpenCD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTAREACHECKPLAYANI__CTOR_OFFSET))(this);
	}
};
