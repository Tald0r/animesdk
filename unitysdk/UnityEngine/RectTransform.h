#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/UnityEngine/RectTransform_Edge.h"
#include "unitysdk/UnityEngine/Transform.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform_ReapplyDrivenProperties; }

#define UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19E4F560)
#define UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x19E4FFA0)
#define UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E50010)
#define UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_OFFSET UNITYSDK_OFFSET(0x19E4FFB0)
#define UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x19E50020)
#define UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET UNITYSDK_OFFSET(0x19E50CF0)
#define UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET UNITYSDK_OFFSET(0x19E50DD0)
#define UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x19E50190)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0x19E4F900)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F7E0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x19E4F7B0)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F770)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0x19E4F740)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F700)
#define UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0x19E4F6D0)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0x19E4FCD0)
#define UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0x19E4FA40)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F8C0)
#define UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x19E4F890)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F6C0)
#define UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET UNITYSDK_OFFSET(0x19E4F680)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F850)
#define UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0x19E4F820)
#define UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19E4F5F0)
#define UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19E50DB0)
#define UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET UNITYSDK_OFFSET(0x19E50710)
#define UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET UNITYSDK_OFFSET(0x19E50A60)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET UNITYSDK_OFFSET(0x19E4F9C0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F810)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x19E4F7F0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F7A0)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET UNITYSDK_OFFSET(0x19E4F780)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F730)
#define UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET UNITYSDK_OFFSET(0x19E4F710)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET UNITYSDK_OFFSET(0x19E4FDD0)
#define UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET UNITYSDK_OFFSET(0x19E4FB00)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F8F0)
#define UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x19E4F8D0)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0x19E4F880)
#define UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET UNITYSDK_OFFSET(0x19E4F860)
#define UNITYENGINE_RECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E51170)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransform_TypeDefinitionIndex = 5406;

	class RectTransform : public ::UnityEngine::Transform
	{
	public:
		static ::UnityEngine::RectTransform_ReapplyDrivenProperties** StaticGet_reapplyDrivenProperties()
		{
			return (::UnityEngine::RectTransform_ReapplyDrivenProperties**)Il2CppClass::FromTypeDefinitionIndex(RectTransform_TypeDefinitionIndex)->GetStaticField(0x56D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void add_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform_ReapplyDrivenProperties*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_ADD_REAPPLYDRIVENPROPERTIES_OFFSET))(value);
		}

		static ::System::Void remove_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties* value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform_ReapplyDrivenProperties*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_REMOVE_REAPPLYDRIVENPROPERTIES_OFFSET))(value);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_anchorMin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_OFFSET))(this);
		}

		::System::Void set_anchorMin(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_anchorMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_OFFSET))(this);
		}

		::System::Void set_anchorMax(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_anchoredPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_OFFSET))(this);
		}

		::System::Void set_anchoredPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_sizeDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_OFFSET))(this);
		}

		::System::Void set_sizeDelta(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_pivot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_pivot(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_anchoredPosition3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION3D_OFFSET))(this);
		}

		::System::Void set_anchoredPosition3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION3D_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_offsetMin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMIN_OFFSET))(this);
		}

		::System::Void set_offsetMin(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_offsetMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_OFFSETMAX_OFFSET))(this);
		}

		::System::Void set_offsetMax(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_OFFSETMAX_OFFSET))(this, value);
		}

		::System::Void ForceUpdateRectTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_FORCEUPDATERECTTRANSFORMS_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetCanvasToClipMatrix(::UnityEngine::RectTransform* canvasTransform)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_OFFSET))(this, canvasTransform);
		}

		::System::Void GetLocalCorners(::Il2CppArray<::UnityEngine::Vector3>* fourCornersArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETLOCALCORNERS_OFFSET))(this, fourCornersArray);
		}

		::System::Void GetWorldCorners(::Il2CppArray<::UnityEngine::Vector3>* fourCornersArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETWORLDCORNERS_OFFSET))(this, fourCornersArray);
		}

		::System::Void SetInsetAndSizeFromParentEdge(::UnityEngine::RectTransform_Edge edge, ::System::Single inset, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform_Edge, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETINSETANDSIZEFROMPARENTEDGE_OFFSET))(this, edge, inset, size);
		}

		::System::Void SetSizeWithCurrentAnchors(::UnityEngine::RectTransform_Axis axis, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform_Axis, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SETSIZEWITHCURRENTANCHORS_OFFSET))(this, axis, size);
		}

		static ::System::Void SendReapplyDrivenProperties(::UnityEngine::RectTransform* driven)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SENDREAPPLYDRIVENPROPERTIES_OFFSET))(driven);
		}

		::UnityEngine::Rect GetRectInParentSpace()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETRECTINPARENTSPACE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetParentSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETPARENTSIZE_OFFSET))(this);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_RECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_anchorMin_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMIN_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchorMin_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMIN_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_anchorMax_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHORMAX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchorMax_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHORMAX_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_anchoredPosition_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_ANCHOREDPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchoredPosition_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_ANCHOREDPOSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_sizeDelta_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_SIZEDELTA_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_sizeDelta_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_SIZEDELTA_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GET_PIVOT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_pivot_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_SET_PIVOT_INJECTED_OFFSET))(this, value);
		}

		::System::Void GetCanvasToClipMatrix_Injected(::UnityEngine::RectTransform* canvasTransform, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_GETCANVASTOCLIPMATRIX_INJECTED_OFFSET))(this, canvasTransform, ret);
		}
	};
}
