#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_TableScrollPluginItemFade;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x955AFA0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x955B670)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x955B6D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x955B680)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x955AF90)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61__CTOR_OFFSET UNITYSDK_OFFSET(0x955AF80)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginItemFade__LatePlayItemAnim_d__61_TypeDefinitionIndex = 64404;

class MonoUITableScrollV2_TableScrollPluginItemFade__LatePlayItemAnim_d__61 : public ::System::Object
{
public:
	::UnityEngine::AnimationClip* _clip_5__4; // 0x10
	::UnityEngine::GameObject* go; // 0x18
	::UnityEngine::Animation* _anim_5__2; // 0x20
	::System::String* _animName_5__3; // 0x28
	::MonoUITableScrollV2_TableScrollPluginItemFade* __4__this; // 0x30
	::System::Single delay; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Boolean isFadeIn; // 0x40
	::System::Int32 offset; // 0x44
	::System::Single __2__current; // 0x48

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINITEMFADE__LATEPLAYITEMANIM_D__61_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
