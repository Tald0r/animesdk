#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7609C87F8335DE37.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class Class_3_F97B015544BE936B;
class ShaderAniHelp;
namespace DG::Tweening { class Tweener; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ATTACHENTITY_OFFSET UNITYSDK_OFFSET(0xB992BF0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_GETNORMALIZEDHPPERCENT_OFFSET UNITYSDK_OFFSET(0xB992B00)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_GET_ISHPTWEENING_OFFSET UNITYSDK_OFFSET(0xB9914F0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB991580)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_STARTHPTWEEN_OFFSET UNITYSDK_OFFSET(0xB992670)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATEHPSHIELD_OFFSET UNITYSDK_OFFSET(0xB991640)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATEHPTWEENTARGET_OFFSET UNITYSDK_OFFSET(0xB992150)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB9920E0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB992DE0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB992DB0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__STARTHPTWEEN_B__34_0_OFFSET UNITYSDK_OFFSET(0xB9930B0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__STARTHPTWEEN_B__34_1_OFFSET UNITYSDK_OFFSET(0xB9930C0)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_1_OFFSET UNITYSDK_OFFSET(0xB992E30)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_2_OFFSET UNITYSDK_OFFSET(0xB992E40)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_4_OFFSET UNITYSDK_OFFSET(0xB992F70)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_5_OFFSET UNITYSDK_OFFSET(0xB992F80)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPTWEENTARGET_B__35_0_OFFSET UNITYSDK_OFFSET(0xB993170)
#define MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPTWEENTARGET_B__35_1_OFFSET UNITYSDK_OFFSET(0xB993180)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelMonsterBarrierWidgetControllerBase_TypeDefinitionIndex = 80756;

	class InLevelMonsterBarrierWidgetControllerBase : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_HpPercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InLevelMonsterBarrierWidgetControllerBase_TypeDefinitionIndex)->GetStaticField(0xDF90);
		}
		static ::System::Int32* StaticGet_WaveHeightParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InLevelMonsterBarrierWidgetControllerBase_TypeDefinitionIndex)->GetStaticField(0xDF94);
		}
		// static const ::System::Single TweenDurationPerUnit; // 0x0
		// static const ::System::Single TweenMinDuration; // 0x0
		// static const ::System::Single TweenMaxDuration; // 0x0
		::Class_3_F97B015544BE936B* _dataComponent; // 0x2A0
		::Enum_3_7609C87F8335DE37 _monsterHpShieldShowType; // 0x2A8
		::UnityEngine::GameObject* _hpProgressGo; // 0x2B0
		::UnityEngine::GameObject* _hpProgressGoBottom; // 0x2B8
		::UnityEngine::UI::Image* _hpProgressImg; // 0x2C0
		::System::Func_1<::System::Single>* _getHpRatioFront; // 0x2C8
		::System::Func_1<::System::Boolean>* _hasMultipleHpBars; // 0x2D0
		::System::Single _lastHpShield; // 0x2D8
		::System::Int32 _generation; // 0x2DC
		::System::Single _currentDisplayPercentage; // 0x2E0
		::System::Single _currentHpDisplayPercentage; // 0x2E4
		::System::Single _hpTweenTargetPercentage; // 0x2E8
		::DG::Tweening::Tweener* _percentageTweener; // 0x2F0
		::DG::Tweening::Tweener* _hpPercentageTweener; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsHpTweening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_GET_ISHPTWEENING_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateHpShield(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATEHPSHIELD_OFFSET))(this, forceUpdate);
		}

		::System::Void StartHpTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_STARTHPTWEEN_OFFSET))(this);
		}

		::System::Void UpdateHpTweenTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_UPDATEHPTWEENTARGET_OFFSET))(this);
		}

		::System::Single GetNormalizedHpPercent(::System::Single ratio)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_GETNORMALIZEDHPPERCENT_OFFSET))(this, ratio);
		}

		::System::Void AttachEntity(::Class_3_F97B015544BE936B* dataComponent, ::Enum_3_7609C87F8335DE37 hpShieldShowType, ::UnityEngine::GameObject* hpProgressGo, ::UnityEngine::GameObject* hpProgressGoBottom, ::System::Func_1<::System::Single>* getHpRatioFront, ::System::Func_1<::System::Boolean>* hasMultipleHpBars)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::Enum_3_7609C87F8335DE37, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Func_1<::System::Single>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE_ATTACHENTITY_OFFSET))(this, dataComponent, hpShieldShowType, hpProgressGo, hpProgressGoBottom, getHpRatioFront, hasMultipleHpBars);
		}

		::System::Single _UpdateHpShield_b__33_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_1_OFFSET))(this);
		}

		::System::Void _UpdateHpShield_b__33_2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_2_OFFSET))(this, value);
		}

		::System::Single _UpdateHpShield_b__33_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_4_OFFSET))(this);
		}

		::System::Void _UpdateHpShield_b__33_5(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPSHIELD_B__33_5_OFFSET))(this, value);
		}

		::System::Single _StartHpTween_b__34_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__STARTHPTWEEN_B__34_0_OFFSET))(this);
		}

		::System::Void _StartHpTween_b__34_1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__STARTHPTWEEN_B__34_1_OFFSET))(this, value);
		}

		::System::Single _UpdateHpTweenTarget_b__35_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPTWEENTARGET_B__35_0_OFFSET))(this);
		}

		::System::Void _UpdateHpTweenTarget_b__35_1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELMONSTERBARRIERWIDGETCONTROLLERBASE__UPDATEHPTWEENTARGET_B__35_1_OFFSET))(this, value);
		}
	};
}
