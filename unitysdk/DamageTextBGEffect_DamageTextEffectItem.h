#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DamageTextBGEffect_DamageTextItem;

#define DAMAGETEXTBGEFFECT_DAMAGETEXTEFFECTITEM_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1801F260)
#define DAMAGETEXTBGEFFECT_DAMAGETEXTEFFECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1801F510)

inline static constexpr unsigned int DamageTextBGEffect_DamageTextEffectItem_TypeDefinitionIndex = 27999;

class DamageTextBGEffect_DamageTextEffectItem : public ::System::Object
{
public:
	::DamageTextBGEffect_DamageTextItem* left; // 0x10
	::DamageTextBGEffect_DamageTextItem* right; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_DAMAGETEXTEFFECTITEM__CTOR_OFFSET))(this);
	}

	::System::Void UpdateTransform(::UnityEngine::Vector3 pos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_DAMAGETEXTEFFECTITEM_UPDATETRANSFORM_OFFSET))(this, pos);
	}
};
