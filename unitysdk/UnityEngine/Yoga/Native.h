#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Yoga/YogaEdge.h"
#include "unitysdk/UnityEngine/Yoga/YogaMeasureMode.h"

namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_NATIVE_YGCONFIGFREEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18939FE0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGFREE_OFFSET UNITYSDK_OFFSET(0x18939FD0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGGETDEFAULT_OFFSET UNITYSDK_OFFSET(0x18939FB0)
#define UNITYENGINE_YOGA_NATIVE_YGCONFIGNEW_OFFSET UNITYSDK_OFFSET(0x18939FC0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET UNITYSDK_OFFSET(0x1893A180)
#define UNITYENGINE_YOGA_NATIVE_YGNODEFREEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18939F90)
#define UNITYENGINE_YOGA_NATIVE_YGNODEFREE_OFFSET UNITYSDK_OFFSET(0x18939F80)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1893A2E0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET UNITYSDK_OFFSET(0x1893A2B0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETPADDING_OFFSET UNITYSDK_OFFSET(0x1893A2F0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET UNITYSDK_OFFSET(0x1893A2C0)
#define UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET UNITYSDK_OFFSET(0x1893A2D0)
#define UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET UNITYSDK_OFFSET(0x1893A010)
#define UNITYENGINE_YOGA_NATIVE_YGNODENEWWITHCONFIG_OFFSET UNITYSDK_OFFSET(0x18939F70)
#define UNITYENGINE_YOGA_NATIVE_YGNODEREMOVEMEASUREFUNC_OFFSET UNITYSDK_OFFSET(0x1893A000)
#define UNITYENGINE_YOGA_NATIVE_YGNODESETMEASUREFUNC_OFFSET UNITYSDK_OFFSET(0x18939FF0)
#define UNITYENGINE_YOGA_NATIVE_YGSETMANAGEDOBJECT_OFFSET UNITYSDK_OFFSET(0x18939FA0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int Native_TypeDefinitionIndex = 23735;

	class Native : public ::System::Object
	{
	public:
		static ::System::IntPtr YGNodeNewWithConfig(::System::IntPtr config)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODENEWWITHCONFIG_OFFSET))(config);
		}

		static ::System::Void YGNodeFree(::System::IntPtr ygNode)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEFREE_OFFSET))(ygNode);
		}

		static ::System::Void YGNodeFreeInternal(::System::IntPtr ygNode)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEFREEINTERNAL_OFFSET))(ygNode);
		}

		static ::System::Void YGSetManagedObject(::System::IntPtr ygNode, ::UnityEngine::Yoga::YogaNode* node)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Yoga::YogaNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGSETMANAGEDOBJECT_OFFSET))(ygNode, node);
		}

		static ::System::IntPtr YGConfigGetDefault()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGGETDEFAULT_OFFSET))();
		}

		static ::System::IntPtr YGConfigNew()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGNEW_OFFSET))();
		}

		static ::System::Void YGConfigFree(::System::IntPtr config)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGFREE_OFFSET))(config);
		}

		static ::System::Void YGConfigFreeInternal(::System::IntPtr config)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGCONFIGFREEINTERNAL_OFFSET))(config);
		}

		static ::System::Void YGNodeSetMeasureFunc(::System::IntPtr node)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODESETMEASUREFUNC_OFFSET))(node);
		}

		static ::System::Void YGNodeRemoveMeasureFunc(::System::IntPtr node)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEREMOVEMEASUREFUNC_OFFSET))(node);
		}

		static ::System::Void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, ::System::Single height, ::UnityEngine::Yoga::YogaMeasureMode heightMode, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEMEASUREINVOKE_OFFSET))(node, width, widthMode, height, heightMode, returnValueAddress);
		}

		static ::System::Void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* node, ::System::Single width, ::System::Single height, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODEBASELINEINVOKE_OFFSET))(node, width, height, returnValueAddress);
		}

		static ::System::Single YGNodeLayoutGetLeft(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETLEFT_OFFSET))(node);
		}

		static ::System::Single YGNodeLayoutGetTop(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETTOP_OFFSET))(node);
		}

		static ::System::Single YGNodeLayoutGetWidth(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETWIDTH_OFFSET))(node);
		}

		static ::System::Single YGNodeLayoutGetHeight(::System::IntPtr node)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETHEIGHT_OFFSET))(node);
		}

		static ::System::Single YGNodeLayoutGetPadding(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge)
		{
			return ((::System::Single(*)(::System::IntPtr, ::UnityEngine::Yoga::YogaEdge))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_NATIVE_YGNODELAYOUTGETPADDING_OFFSET))(node, edge);
		}
	};
}
