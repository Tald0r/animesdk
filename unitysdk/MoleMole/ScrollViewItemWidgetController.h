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

#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GETITEMSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0xB872F40)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_CURDATAINDEX_OFFSET UNITYSDK_OFFSET(0xB872E00)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB872F30)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_ISINPOOL_OFFSET UNITYSDK_OFFSET(0xB872E20)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0xB872E40)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_MOLEMOLE_IMONOUISCROLLVIEWITEM_SETSELECTFORCE_OFFSET UNITYSDK_OFFSET(0xB8736B0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_MOLEMOLE_IMONOUISCROLLVIEWITEM_SETSELECT_OFFSET UNITYSDK_OFFSET(0xB873490)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONAFTERSETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB873330)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xB873390)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONFADEINFINISH_OFFSET UNITYSDK_OFFSET(0xB873BD0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0xB873880)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB873810)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xB8731F0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0xB873190)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB872FA0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_ONSCROLLVIEWITEMMOVE_OFFSET UNITYSDK_OFFSET(0xB873250)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_PLAYFADEANIM_OFFSET UNITYSDK_OFFSET(0xB8738E0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xB8730F0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0xB873020)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB8732B0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SET_CURDATAINDEX_OFFSET UNITYSDK_OFFSET(0xB872E10)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_SET_ISINPOOL_OFFSET UNITYSDK_OFFSET(0xB872E30)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER_STOPFADEANIM_OFFSET UNITYSDK_OFFSET(0xB873B30)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB873C30)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewItemWidgetController_TypeDefinitionIndex = 44333;

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
