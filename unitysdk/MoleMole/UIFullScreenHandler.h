#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFullScreenHandler_Enum_3_FDE3C35692169540.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_03F1CD50928B7BED_OFFSET UNITYSDK_OFFSET(0xF1EA6D0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET UNITYSDK_OFFSET(0xF1EB780)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_1AC45929DDC5B1CB_OFFSET UNITYSDK_OFFSET(0xF1EA370)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF1EB900)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF1EAE50)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xF1EB380)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xF1EAEB0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_77577333B4681208_OFFSET UNITYSDK_OFFSET(0xF1EBAB0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xF1E9630)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_9D4EC0959ED23C46_OFFSET UNITYSDK_OFFSET(0xF1EB970)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF1EA310)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xF1EB520)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_EF0714CC5ADE74A7_OFFSET UNITYSDK_OFFSET(0xF1EAD00)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_F530CA3FA28BEDE8_OFFSET UNITYSDK_OFFSET(0xF1EB260)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_F84C02269E33D54C_OFFSET UNITYSDK_OFFSET(0xF1EBB50)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xF1E9D20)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xF1E9C00)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF1E9980)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF1E9700)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xF1E9A10)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xF1E9B70)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xF1E9510)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xF1E9860)
#define MOLEMOLE_UIFULLSCREENHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xF1E9E40)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xF1E9E90)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xF1E9F20)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF1E9FB0)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF1EA040)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xF1EA0D0)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xF1EA160)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xF1EA1F0)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xF1EA280)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenHandler_TypeDefinitionIndex = 64917;

	class UIFullScreenHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::MoleMole::UIFullScreenHandler_Enum_3_FDE3C35692169540 _axisType; // 0x18
		::System::Single _overDraw; // 0x1C
		::System::Nullable_1<::System::Boolean> Field_6_2; // 0x20
		::UnityEngine::Canvas* Field_6_3; // 0x28
		::System::Boolean Field_6_4; // 0x30
		::System::Boolean Field_6_5; // 0x31
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_6; // 0x38
		::System::Boolean Field_6_7; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_1AC45929DDC5B1CB(::UnityEngine::Canvas* a1, ::UnityEngine::RectTransform* a2, ::MoleMole::UIFullScreenHandler_Enum_3_FDE3C35692169540 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*, ::MoleMole::UIFullScreenHandler_Enum_3_FDE3C35692169540, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_1AC45929DDC5B1CB_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_6_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_EF0714CC5ADE74A7(::UnityEngine::Canvas* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_EF0714CC5ADE74A7_OFFSET))(a1, a2);
		}

		::System::Boolean Method_6_5E72916301E347E2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_5E72916301E347E2_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_6_F530CA3FA28BEDE8(::System::Boolean a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_F530CA3FA28BEDE8_OFFSET))(a1);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_6_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void Method_6_9D4EC0959ED23C46(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_9D4EC0959ED23C46_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_0B08B4F8E959C85E()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET))(this);
		}

		static ::System::Boolean Method_6_F84C02269E33D54C(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_F84C02269E33D54C_OFFSET))(a1);
		}

		::System::Boolean Method_6_77577333B4681208()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_77577333B4681208_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_03F1CD50928B7BED(::UnityEngine::Canvas* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_03F1CD50928B7BED_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_6_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_937F8473216A3162_OFFSET))(this);
		}
	};
}
