#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DAMAGETEXTBGEFFECT_DAMAGETEXTITEM_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x197CD790)
#define DAMAGETEXTBGEFFECT_DAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x197CD8A0)

inline static constexpr unsigned int DamageTextBGEffect_DamageTextItem_TypeDefinitionIndex = 28940;

class DamageTextBGEffect_DamageTextItem : public ::System::Object
{
public:
	::UnityEngine::Matrix4x4 trs; // 0x10
	::System::Single endTime; // 0x50
	::System::Single rotation; // 0x54
	::System::Single colorIndex; // 0x58
	::System::Single startTime; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_DAMAGETEXTITEM__CTOR_OFFSET))(this);
	}

	::System::Void UpdateTransform(::UnityEngine::Vector3 pos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_DAMAGETEXTITEM_UPDATETRANSFORM_OFFSET))(this, pos);
	}
};
