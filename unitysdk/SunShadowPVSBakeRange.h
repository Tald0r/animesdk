#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SUNSHADOWPVSBAKERANGE_GETAABB_OFFSET UNITYSDK_OFFSET(0x15F5CE20)
#define SUNSHADOWPVSBAKERANGE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x15F5CF50)
#define SUNSHADOWPVSBAKERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5D080)

inline static constexpr unsigned int SunShadowPVSBakeRange_TypeDefinitionIndex = 68228;

class SunShadowPVSBakeRange : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUNSHADOWPVSBAKERANGE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Bounds GetAABB()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + SUNSHADOWPVSBAKERANGE_GETAABB_OFFSET))(this);
	}

	::System::Void OnDrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUNSHADOWPVSBAKERANGE_ONDRAWGIZMOS_OFFSET))(this);
	}
};
