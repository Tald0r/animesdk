#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0F31F0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_67C978A17F4AADBB_OFFSET UNITYSDK_OFFSET(0xC320230)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0xC320240)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xD0F33A0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xD0F3330)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F35F0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0F3630)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xD0F36C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBurstItemColorHandler_TypeDefinitionIndex = 55452;

	class MonoInLevelBurstItemColorHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::Color _greyColor; // 0x18
		::UnityEngine::Color _goldColor; // 0x28
		::UnityEngine::Color _fadeOutColor; // 0x38
		::System::Single _colorLerp; // 0x48
		::System::Single _fadeLerp; // 0x4C
		::UnityEngine::UI::Image* Field_6_5; // 0x50
		::UnityEngine::UI::Text* Field_6_6; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void Method_6_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_EDFD49C942C75D6C_OFFSET))(this);
		}

		::UnityEngine::UI::Text* Method_6_67C978A17F4AADBB()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_67C978A17F4AADBB_OFFSET))(this);
		}

		::UnityEngine::UI::Image* Method_6_9CC926D36F34DBFF()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_9CC926D36F34DBFF_OFFSET))(this);
		}
	};
}
