#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/Rect.h"

#define UNITYENGINE_CHARACTERINFO_GET_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9A9820)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterInfo_TypeDefinitionIndex = 6342;

	struct alignas(4) CharacterInfo
	{
		::System::Int32 index; // 0x10
		::UnityEngine::Rect uv; // 0x14
		::UnityEngine::Rect vert; // 0x24
		::System::Single width; // 0x34
		::System::Int32 size; // 0x38
		::UnityEngine::FontStyle style; // 0x3C
		::System::Boolean flipped; // 0x40

		::System::Int32 get_advance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_ADVANCE_OFFSET))(this);
		}
	};
}
