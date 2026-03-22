#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"

namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x139C2510)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x139C2EE0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x139C1D00)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x139C3D90)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x139C3E00)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x139C3CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x139C3F90)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x139C3180)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x139C3B70)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x139C3C40)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0x139C3D30)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x139C1DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x139C3270)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x139C3BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x139C3CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_1_OFFSET UNITYSDK_OFFSET(0x139C3F30)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x139C3090)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0x139C3CA0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_586171A6FE1495FB_OFFSET UNITYSDK_OFFSET(0x139C2B50)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x139C31E0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x139C30F0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_9625B93C4CF73169_OFFSET UNITYSDK_OFFSET(0x139C2600)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_AA4573294FE89893_OFFSET UNITYSDK_OFFSET(0x139C2230)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0x139C3530)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139C3E70)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x139C3B60)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x139C3ED0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_F48F587EB81BD922_OFFSET UNITYSDK_OFFSET(0x139C1E00)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x139C3B20)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x139C36E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLight_TypeDefinitionIndex = 56420;

	class ESLight : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Boolean* StaticGet_CAN_IN_JOB()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ESLight_TypeDefinitionIndex)->GetStaticField(0xE680);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::System::Boolean m_bHasSetVal; // 0x58
		::System::Single m_RangeValCache; // 0x5C
		::System::Boolean m_bRangeChanged; // 0x60
		::System::Single m_IndirectMultiplierValCache; // 0x64
		::System::Boolean m_bIndirectMultiplierChanged; // 0x68
		::System::Single m_InnerSpotAngleValCache; // 0x6C
		::System::Boolean m_bInnerSpotAngleChanged; // 0x70
		::System::Single m_OuterSpotAngleValCache; // 0x74
		::System::Boolean m_bOuterSpotAngleChanged; // 0x78
		::System::Single m_IntensityValCache; // 0x7C
		::System::Boolean m_bIntensityChanged; // 0x80
		::UnityEngine::Color m_ColorValCache; // 0x84
		::System::Boolean m_bColorChanged; // 0x94
		::System::Single m_AvatarLightMultiplierValCache; // 0x98
		::System::Boolean m_bAvatarLightMultiplierChanged; // 0x9C
		::UnityEngine::Color m_AvatarLightColorValCache; // 0xA0
		::System::Boolean m_bAvatarLightColorChanged; // 0xB0
		::UnityEngine::Light* m_stLightCom; // 0xB8
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* m_stAdditionalLightData; // 0xC0
		::UnityEngine::LightType m_eLightTypeCache; // 0xC8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* range; // 0xD0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* innerSpotAngle; // 0xD8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* outerSpotAngle; // 0xE0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* intensity; // 0xE8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* avatarLightMultiplier; // 0xF0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* indirectMultiplier; // 0xF8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* color; // 0x100
		::MoleMole::EffectSimulate::ColorKeyframeCurve* avatarLightColor; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CCTOR_OFFSET))();
		}

		::System::Boolean Method_3_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_F48F587EB81BD922(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_F48F587EB81BD922_OFFSET))(this, a1);
		}

		::System::Void Method_3_AA4573294FE89893(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_AA4573294FE89893_OFFSET))(this, a1);
		}

		::UnityEngine::LightType get_lightType()
		{
			return ((::UnityEngine::LightType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GET_LIGHTTYPE_OFFSET))(this);
		}

		::System::Void Method_3_9625B93C4CF73169(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_9625B93C4CF73169_OFFSET))(this, a1);
		}

		::System::Void Method_3_586171A6FE1495FB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_586171A6FE1495FB_OFFSET))(this, a1);
		}

		::System::Void Method_3_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_OFFSET))(this);
		}

		::System::String* Method_3_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_3_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Void Method_3_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_3_C7C8E8CA7C1063A4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_C7C8E8CA7C1063A4_OFFSET))(this, a1);
		}

		::System::Void Method_3_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_2_OFFSET))(this);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_3_OFFSET))(this);
		}

		::System::String* Method_3_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_581A5078A2F29034_OFFSET))(this);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_391A84BCD9F51317_4_OFFSET))(this);
		}

		::System::Void Method_3_2685B6183E614529_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_2685B6183E614529_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_2685B6183E614529_2_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::String* Method_3_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714_1()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_49AC00594530B714_1_OFFSET))(this);
		}

		::System::String* Method_3_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
		}
	};
}
