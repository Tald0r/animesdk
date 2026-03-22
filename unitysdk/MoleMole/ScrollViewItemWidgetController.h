#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_3D70108AB8A5915A;
class MonoUITableScrollV2;
class MonoUITableScrollV2_TemplateData;
namespace MoleMole { class ScrollViewItemWidgetController_ScrollViewItemPropertyHelper; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GETITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0xB2FE800)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_CURDATAINDEX_OFFSET UNITYSDK_OFFSET(0xB2FE6C0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB2FE7F0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_ISINPOOL_OFFSET UNITYSDK_OFFSET(0xB2FE6E0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0xB2FE700)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_MOLEMOLE_IMONOUISCROLLVIEWITEM_SETSELECTFORCE_OFFSET UNITYSDK_OFFSET(0xB2FEF70)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_MOLEMOLE_IMONOUISCROLLVIEWITEM_SETSELECT_OFFSET UNITYSDK_OFFSET(0xB2FED50)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONAFTERSETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB2FEBF0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xB2FEC50)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONFADEINFINISH_OFFSET UNITYSDK_OFFSET(0xB2FF460)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0xB2FF140)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB2FF0D0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xB2FEAB0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0xB2FEA50)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB2FE860)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLVIEWITEMMOVE_OFFSET UNITYSDK_OFFSET(0xB2FEB10)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_PLAYFADEANIM_OFFSET UNITYSDK_OFFSET(0xB2FF1A0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xB2FE9B0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0xB2FE8E0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB2FEB70)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SET_CURDATAINDEX_OFFSET UNITYSDK_OFFSET(0xB2FE6D0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SET_ISINPOOL_OFFSET UNITYSDK_OFFSET(0xB2FE6F0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_STOPFADEANIM_OFFSET UNITYSDK_OFFSET(0xB2FF3C0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2FF4C0)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewItemWidgetController_TypeDefinitionIndex = 71618;

	class ScrollViewItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _CurDataIndex_k__BackingField; // 0x2A0
		::MonoUITableScrollV2_TemplateData* OwnerTemplate; // 0x2A8
		::MonoUITableScrollV2* _scrollView; // 0x2B0
		::System::Boolean _IsInPool_k__BackingField; // 0x2B8
		::Class_1_3D70108AB8A5915A* _helperList; // 0x2C0
		::MoleMole::ScrollViewItemWidgetController_ScrollViewItemPropertyHelper* _propertyHelper; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_CURDATAINDEX_OFFSET))(this);
		}

		::System::Void set_CurDataIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SET_CURDATAINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsInPool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_ISINPOOL_OFFSET))(this);
		}

		::System::Void set_IsInPool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SET_ISINPOOL_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_ISSELECT_OFFSET))(this);
		}

		::System::Boolean get_DestroyGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_DESTROYGAMEOBJECT_OFFSET))(this);
		}

		::System::Single GetItemSizeAtAxis()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GETITEMSIZEATAXIS_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void ScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void OnScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void OnScrollViewItemMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLVIEWITEMMOVE_OFFSET))(this);
		}

		::System::Void SetScrollView(::MonoUITableScrollV2* scrollView)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SETSCROLLVIEW_OFFSET))(this, scrollView);
		}

		::System::Void OnAfterSetScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONAFTERSETSCROLLVIEW_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void MoleMole_IMonoUIScrollViewItem_SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_MOLEMOLE_IMONOUISCROLLVIEWITEM_SETSELECT_OFFSET))(this, isSelect);
		}

		::System::Void MoleMole_IMonoUIScrollViewItem_SetSelectForce(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_MOLEMOLE_IMONOUISCROLLVIEWITEM_SETSELECTFORCE_OFFSET))(this, isSelect);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void PlayFadeAnim(::UnityEngine::Animation* animation, ::System::String* name, ::System::Boolean isFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_PLAYFADEANIM_OFFSET))(this, animation, name, isFadeIn);
		}

		::System::Void StopFadeAnim(::UnityEngine::Animation* animation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_STOPFADEANIM_OFFSET))(this, animation);
		}

		::System::Void OnFadeInFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONFADEINFINISH_OFFSET))(this);
		}
	};
}
