#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoWeaponVideoScreenPlayer_Enum_3_A6AB6596F4CDFB68.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class TextureFrameScreenPlayData;
class VideoScreenPlayData;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6051A0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLOSE_OFFSET UNITYSDK_OFFSET(0xA606110)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_INIT_OFFSET UNITYSDK_OFFSET(0xA6060B0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xA605910)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0xA605E20)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_55007D2B1E6175A9_OFFSET UNITYSDK_OFFSET(0xA606540)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_7C6959C0687FF160_OFFSET UNITYSDK_OFFSET(0xA606490)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xA605470)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA605C50)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6053E0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYFRAMETEXTUREONSCREEN_OFFSET UNITYSDK_OFFSET(0xA6063B0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYVIDEOONSCREEN_OFFSET UNITYSDK_OFFSET(0xA606320)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA605FA0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xA606440)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWeaponVideoScreenPlayer_TypeDefinitionIndex = 41010;

	class MonoWeaponVideoScreenPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshRenderer* frontScreenMeshRenderer; // 0x18
		::UnityEngine::MeshRenderer* transitionScreenRenderer; // 0x20
		::MoleMole::ScreenPlayer* Field_5_2; // 0x28
		::MoleMole::ScreenPlayer* Field_5_3; // 0x30
		::TextureFrameScreenPlayData* Field_5_4; // 0x38
		::System::String* Field_5_5; // 0x40
		::System::String* Field_5_6; // 0x48
		::MoleMole::MonoWeaponVideoScreenPlayer_Enum_3_A6AB6596F4CDFB68 Field_5_7; // 0x50
		::System::String* Field_5_8; // 0x58
		::System::String* Field_5_9; // 0x60
		::System::String* Field_5_10; // 0x68
		::System::Boolean Field_5_11; // 0x70
		::System::String* Field_5_12; // 0x78
		::System::Boolean Field_5_13; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_INIT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLOSE_OFFSET))(this);
		}

		::System::Void PlayVideoOnScreen(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYVIDEOONSCREEN_OFFSET))(this, a1, a2);
		}

		::System::Void PlayFrameTextureOnScreen(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYFRAMETEXTUREONSCREEN_OFFSET))(this, a1, a2);
		}

		::VideoScreenPlayData* Method_5_7C6959C0687FF160(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::MoleMole::IVideoPlayer*>* a3)
		{
			return ((::VideoScreenPlayData*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_7C6959C0687FF160_OFFSET))(this, a1, a2, a3);
		}

		::TextureFrameScreenPlayData* Method_5_55007D2B1E6175A9(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Events::UnityAction* a3)
		{
			return ((::TextureFrameScreenPlayData*(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_55007D2B1E6175A9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_00DEF5A164D9A9D5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_00DEF5A164D9A9D5_OFFSET))(this);
		}

		::System::Void Method_5_E69AA2E64A20143D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_E69AA2E64A20143D_OFFSET))(this);
		}

		::System::Void Method_5_1CD1133DC003C11C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_1CD1133DC003C11C_OFFSET))(this, a1);
		}
	};
}
