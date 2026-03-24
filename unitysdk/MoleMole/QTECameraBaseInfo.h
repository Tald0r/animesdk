#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_QTECAMERABASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x6EC9970)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraBaseInfo_TypeDefinitionIndex = 80865;

	class QTECameraBaseInfo : public ::System::Object
	{
	public:
		::System::String* stretchKey; // 0x10
		::System::String* zoomKey; // 0x18
		::System::String* TimeSlowKey; // 0x20
		::System::Single overrideStretchRadiusRatio; // 0x28
		::System::Boolean isOverrideCameraY; // 0x2C
		::System::Boolean isOverrideStretchRadiusRatio; // 0x2D
		::System::Single overrideStretchCameraY; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO__CTOR_OFFSET))(this);
		}
	};
}
