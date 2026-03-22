#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_GEOMETRY_DEFAULTSURFACEDIMENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C7380)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int DefaultSurfaceDimension_TypeDefinitionIndex = 8965;

	class DefaultSurfaceDimension : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_DEFAULTSURFACEDIMENSION__CTOR_OFFSET))(this);
		}
	};
}
