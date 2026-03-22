#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Color.h"

class NapGradient;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_155C191EC0431EA4_OFFSET UNITYSDK_OFFSET(0x139B2060)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_30C47F9E0D18E066_OFFSET UNITYSDK_OFFSET(0x139B23D0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_55BD600CD4770990_OFFSET UNITYSDK_OFFSET(0x139B24C0)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_72B99BAD012F62D7_OFFSET UNITYSDK_OFFSET(0x139B1F50)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_92020F8C2A45425C_OFFSET UNITYSDK_OFFSET(0x139B2320)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x139B2200)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x139B2190)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_BD23E155ECC2E07C_OFFSET UNITYSDK_OFFSET(0x139B2270)
#define MOLEMOLE_EFFECTSIMULATE_COLORCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x139B2150)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ColorCurve_TypeDefinitionIndex = 37392;

	class ColorCurve : public ::MoleMole::EffectSimulate::EvaluateAnimationCurve_1<::UnityEngine::Color>
	{
	public:
		::NapGradient* gradient; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color Method_4_72B99BAD012F62D7(::System::Single a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_72B99BAD012F62D7_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color Method_4_155C191EC0431EA4(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_155C191EC0431EA4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::Void Method_4_ADF4AD3331B4D7AD_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_4_BD23E155ECC2E07C(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_BD23E155ECC2E07C_OFFSET))(this, a1);
		}

		::System::Void Method_4_92020F8C2A45425C(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_92020F8C2A45425C_OFFSET))(this, a1, a2);
		}

		::NapGradient* Method_4_30C47F9E0D18E066(::System::Int32 a1)
		{
			return ((::NapGradient*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_30C47F9E0D18E066_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_55BD600CD4770990(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_COLORCURVE_METHOD_4_55BD600CD4770990_OFFSET))(this, a1, a2);
		}
	};
}
