#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB5AE240)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xB5ADA00)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB5AE3D0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_C4E85F9645A18927_OFFSET UNITYSDK_OFFSET(0xB5AD7B0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB5AE3E0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CC656DE5F14BB033_OFFSET UNITYSDK_OFFSET(0xB5ADAC0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0xB5AE1C0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_D5CE98C81E7D70E3_OFFSET UNITYSDK_OFFSET(0xB5AE150)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB5AE360)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_E9B750BB61FFD0D0_OFFSET UNITYSDK_OFFSET(0xB5AD900)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_F7E4906784B9935A_OFFSET UNITYSDK_OFFSET(0xB5ADDD0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AD740)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int FloatCurve_TypeDefinitionIndex = 38861;

	class FloatCurve : public ::MoleMole::EffectSimulate::EvaluateAnimationCurve_1<::System::Single>
	{
	public:
		::System::Boolean xUseCurve; // 0x90
		::UnityEngine::AnimationCurve* xCurve; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE__CTOR_OFFSET))(this);
		}

		::System::Single Method_4_C4E85F9645A18927(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_C4E85F9645A18927_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_CC656DE5F14BB033(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CC656DE5F14BB033_OFFSET))(this, a1);
		}

		::System::Void Method_4_F7E4906784B9935A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_F7E4906784B9935A_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_4_D5CE98C81E7D70E3(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_D5CE98C81E7D70E3_OFFSET))(this, a1);
		}

		::System::Void Method_4_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Single Method_4_E9B750BB61FFD0D0(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_E9B750BB61FFD0D0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* Method_4_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
