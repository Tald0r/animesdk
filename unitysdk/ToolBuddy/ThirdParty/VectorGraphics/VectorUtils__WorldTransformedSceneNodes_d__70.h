#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/VectorUtils_SceneNodeWorldTransform.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x193C3870)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODEWORLDTRANSFORM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193C4070)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODEWORLDTRANSFORM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x193C3FA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193C4130)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x193C4010)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x193C3FC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193C3680)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70__CTOR_OFFSET UNITYSDK_OFFSET(0x193C1C50)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x193C3860)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x193C37B0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils__WorldTransformedSceneNodes_d__70_TypeDefinitionIndex = 27042;

	class VectorUtils__WorldTransformedSceneNodes_d__70 : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform parent; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* __3__child; // 0x40
		::System::Collections::Generic::List_1_Enumerator<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*> __7__wrap2; // 0x48
		::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform>* __7__wrap3; // 0x60
		::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform __2__current; // 0x68
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* __3__nodeOpacities; // 0x98
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* nodeOpacities; // 0xA0
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* child; // 0xA8
		::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform __3__parent; // 0xB0
		::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform _childWorldTransform_5__2; // 0xE0
		::System::Int32 __1__state; // 0x110
		::System::Int32 __l__initialThreadId; // 0x114

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70___M__FINALLY2_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform System_Collections_Generic_IEnumerator_ToolBuddy_ThirdParty_VectorGraphics_VectorUtils_SceneNodeWorldTransform__get_Current()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODEWORLDTRANSFORM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform>* System_Collections_Generic_IEnumerable_ToolBuddy_ThirdParty_VectorGraphics_VectorUtils_SceneNodeWorldTransform__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils_SceneNodeWorldTransform>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS_SCENENODEWORLDTRANSFORM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS__WORLDTRANSFORMEDSCENENODES_D__70_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
