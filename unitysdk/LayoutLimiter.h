#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LAYOUTLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x5EA33B0)
#define LAYOUTLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x5EA3410)
#define LAYOUTLIMITER_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x5EA3390)
#define LAYOUTLIMITER_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x5EA3380)
#define LAYOUTLIMITER_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x5EA33A0)
#define LAYOUTLIMITER_GET_MINHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA2FD0)
#define LAYOUTLIMITER_GET_MINHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA2F20)
#define LAYOUTLIMITER_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x5EA3350)
#define LAYOUTLIMITER_GET_MINWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA2E70)
#define LAYOUTLIMITER_GET_MINWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA2CC0)
#define LAYOUTLIMITER_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x5EA3340)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA3290)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA31E0)
#define LAYOUTLIMITER_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x5EA3370)
#define LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA3130)
#define LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA3080)
#define LAYOUTLIMITER_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x5EA3360)
#define LAYOUTLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x5EA3790)
#define LAYOUTLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x5EA3720)
#define LAYOUTLIMITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x5EA3570)
#define LAYOUTLIMITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x5EA3470)
#define LAYOUTLIMITER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x5EA3600)
#define LAYOUTLIMITER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x5EA3690)
#define LAYOUTLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x5EA3500)
#define LAYOUTLIMITER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x5EA2D70)
#define LAYOUTLIMITER_SET_MINHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA2FE0)
#define LAYOUTLIMITER_SET_MINHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA2F30)
#define LAYOUTLIMITER_SET_MINWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA2E80)
#define LAYOUTLIMITER_SET_MINWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA2CD0)
#define LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA32A0)
#define LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA31F0)
#define LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x5EA3140)
#define LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x5EA3090)
#define LAYOUTLIMITER__CTOR_OFFSET UNITYSDK_OFFSET(0x5EA3800)
#define LAYOUTLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x5EA3830)
#define LAYOUTLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x5EA38C0)
#define LAYOUTLIMITER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x5EA3950)
#define LAYOUTLIMITER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x5EA39E0)
#define LAYOUTLIMITER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x5EA3A70)
#define LAYOUTLIMITER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x5EA3B00)
#define LAYOUTLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x5EA3B90)

inline static constexpr unsigned int LayoutLimiter_TypeDefinitionIndex = 52443;

class LayoutLimiter : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::Vector2 _minWidthLimit; // 0x18
	::UnityEngine::Vector2 _minHeightLimit; // 0x20
	::UnityEngine::Vector2 _preferredWidthLimit; // 0x28
	::UnityEngine::Vector2 _preferredHeightLimit; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER__CTOR_OFFSET))(this);
	}

	::System::Single get_minWidthLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTHLIMITMIN_OFFSET))(this);
	}

	::System::Void set_minWidthLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINWIDTHLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_minWidthLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTHLIMITMAX_OFFSET))(this);
	}

	::System::Void set_minWidthLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINWIDTHLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_minHeightLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHTLIMITMIN_OFFSET))(this);
	}

	::System::Void set_minHeightLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINHEIGHTLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_minHeightLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHTLIMITMAX_OFFSET))(this);
	}

	::System::Void set_minHeightLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_MINHEIGHTLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_preferredWidthLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMIN_OFFSET))(this);
	}

	::System::Void set_preferredWidthLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_preferredWidthLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTHLIMITMAX_OFFSET))(this);
	}

	::System::Void set_preferredWidthLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDWIDTHLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_preferredHeightLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMIN_OFFSET))(this);
	}

	::System::Void set_preferredHeightLimitMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMIN_OFFSET))(this, value);
	}

	::System::Single get_preferredHeightLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHTLIMITMAX_OFFSET))(this);
	}

	::System::Void set_preferredHeightLimitMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SET_PREFERREDHEIGHTLIMITMAX_OFFSET))(this, value);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER_SETDIRTY_OFFSET))(this);
	}

	::System::Void __base_OnBeforeTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void __base_OnDidApplyAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void __base_OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void __base_OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTLIMITER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}
};
