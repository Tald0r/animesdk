#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_MAXIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA3AF0)

namespace ClipperLib
{
	inline static constexpr unsigned int Maxima_TypeDefinitionIndex = 29752;

	class Maxima : public ::System::Object
	{
	public:
		::ClipperLib::Maxima* Next; // 0x10
		::ClipperLib::Maxima* Prev; // 0x18
		::System::Int64 X; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_MAXIMA__CTOR_OFFSET))(this);
		}
	};
}
