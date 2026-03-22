#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/Struct_2_6E1B724B14572104_5.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/PropertyStreamHandle.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace MoleMole::Photo { class PlayableUnitBlendShapeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }
template <typename T> class Class_0_16E4307DCC419505_301;

#define CLASS_1_A238E29B18A7ED1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8137670)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_2B0E0E88A9334A58_1_OFFSET UNITYSDK_OFFSET(0x8137920)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_2B0E0E88A9334A58_OFFSET UNITYSDK_OFFSET(0x8137860)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8137A80)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x8137AE0)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x8137850)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8137840)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_D14801A69F4D309C_OFFSET UNITYSDK_OFFSET(0x8137E40)
#define CLASS_1_A238E29B18A7ED1A_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x81379E0)
#define CLASS_1_A238E29B18A7ED1A__CTOR_OFFSET UNITYSDK_OFFSET(0x8136FB0)

inline static constexpr unsigned int Class_1_A238E29B18A7ED1A_TypeDefinitionIndex = 70237;

class Class_1_A238E29B18A7ED1A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	::UnityEngine::AvatarMask* Field_1_4; // 0x10
	::UnityEngine::Animator* Field_1_5; // 0x18
	::MoleMole::Photo::Skeleton* Field_1_7; // 0x20
	::Foundation::NativeMemory* Field_1_8; // 0x28
	::UnityEngine::Playables::PlayableGraph Field_1_3; // 0x30
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_5>> Field_1_2; // 0x40
	::UnityEngine::Animations::AnimationScriptPlayable Field_1_1; // 0x50
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_0; // 0x60
	::Struct_2_ACD0EF80A5330786 Field_1_6; // 0x70

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786 a3, ::MoleMole::Photo::PlayableUnitBlendShapeConfig* a4, ::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> a5, ::Foundation::NativeVariableArray_1<::System::Single> a6, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_5>> a7, ::Foundation::NativeVariableArray_1<::System::Single> a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786, ::MoleMole::Photo::PlayableUnitBlendShapeConfig*, ::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::Foundation::NativeVariableArray_1<::System::Single>, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_6E1B724B14572104_5>>, ::Foundation::NativeVariableArray_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_2B0E0E88A9334A58(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_2B0E0E88A9334A58_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_2B0E0E88A9334A58_1(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_2B0E0E88A9334A58_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8649317719F42121(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_8649317719F42121_OFFSET))(this, a1);
	}

	::System::Void Method_1_D14801A69F4D309C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A238E29B18A7ED1A_METHOD_1_D14801A69F4D309C_OFFSET))(this, a1);
	}
};
