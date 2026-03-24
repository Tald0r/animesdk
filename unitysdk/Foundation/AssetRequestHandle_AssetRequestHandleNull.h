#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLENULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6FA30)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestHandle_AssetRequestHandleNull_TypeDefinitionIndex = 7865;

	class AssetRequestHandle_AssetRequestHandleNull : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLENULL__CTOR_OFFSET))(this);
		}
	};
}
