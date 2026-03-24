#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"
#include "unitysdk/UnityEngine/Rect.h"

#define MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1A605250)
#define MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A605260)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int RectArrayBlitFormatter_TypeDefinitionIndex = 26601;

	class RectArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::UnityEngine::Rect>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
