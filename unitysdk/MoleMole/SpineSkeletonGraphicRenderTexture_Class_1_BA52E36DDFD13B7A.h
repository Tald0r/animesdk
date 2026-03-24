#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SpineSkeletonGraphicRenderTexture_TextureMaterialPair.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_BA52E36DDFD13B7A_METHOD_1_12F0D69E925EE3F5_OFFSET UNITYSDK_OFFSET(0xD449B70)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_BA52E36DDFD13B7A__CTOR_OFFSET UNITYSDK_OFFSET(0xD449B60)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_Class_1_BA52E36DDFD13B7A_TypeDefinitionIndex = 39806;

	class SpineSkeletonGraphicRenderTexture_Class_1_BA52E36DDFD13B7A : public ::System::Object
	{
	public:
		::UnityEngine::Texture* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_BA52E36DDFD13B7A__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_12F0D69E925EE3F5(::MoleMole::SpineSkeletonGraphicRenderTexture_TextureMaterialPair a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SpineSkeletonGraphicRenderTexture_TextureMaterialPair))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_BA52E36DDFD13B7A_METHOD_1_12F0D69E925EE3F5_OFFSET))(this, a1);
		}
	};
}
