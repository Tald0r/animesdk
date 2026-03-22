#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYOEMOTION_SHAPEELEMENT_GET_BLINKDURATION_OFFSET UNITYSDK_OFFSET(0x18AF30F0)
#define MIHOYOEMOTION_SHAPEELEMENT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x18AE01C0)
#define MIHOYOEMOTION_SHAPEELEMENT_GET_POSTDURATION_OFFSET UNITYSDK_OFFSET(0x18AE01E0)
#define MIHOYOEMOTION_SHAPEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE01A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ShapeElement_TypeDefinitionIndex = 36200;

	class ShapeElement : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SHAPEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SHAPEELEMENT_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_postDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SHAPEELEMENT_GET_POSTDURATION_OFFSET))(this);
		}

		::System::Single get_blinkDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SHAPEELEMENT_GET_BLINKDURATION_OFFSET))(this);
		}
	};
}
