#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }
template <typename T> class Class_0_16E4307DCC419505_301;

#define CLASS_1_241E681AF3D7A598_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A4B10)
#define CLASS_1_241E681AF3D7A598_METHOD_1_0E7F62FDFFA85D3E_OFFSET UNITYSDK_OFFSET(0xB9A5290)
#define CLASS_1_241E681AF3D7A598_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xB9A51B0)
#define CLASS_1_241E681AF3D7A598_METHOD_1_23F900E6C60F90FC_OFFSET UNITYSDK_OFFSET(0xB9A54D0)
#define CLASS_1_241E681AF3D7A598_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9A53F0)
#define CLASS_1_241E681AF3D7A598_METHOD_1_5540C7F150A3CDE8_1_OFFSET UNITYSDK_OFFSET(0xB9A4FD0)
#define CLASS_1_241E681AF3D7A598_METHOD_1_5540C7F150A3CDE8_OFFSET UNITYSDK_OFFSET(0xB9A4EA0)
#define CLASS_1_241E681AF3D7A598_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xB9A4E40)
#define CLASS_1_241E681AF3D7A598_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB9A4DE0)
#define CLASS_1_241E681AF3D7A598_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0xB9A5100)
#define CLASS_1_241E681AF3D7A598_METHOD_1_EBE01B84C1D38AD1_OFFSET UNITYSDK_OFFSET(0xB9A5450)
#define CLASS_1_241E681AF3D7A598__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A4890)

inline static constexpr unsigned int Class_1_241E681AF3D7A598_TypeDefinitionIndex = 55343;

class Class_1_241E681AF3D7A598 : public ::System::Object
{
public:
	::Foundation::NativeMemory* Field_1_6; // 0x10
	::UnityEngine::Animator* Field_1_4; // 0x18
	::MoleMole::Photo::Skeleton* Field_1_5; // 0x20
	::UnityEngine::Animations::AnimationScriptPlayable Field_1_0; // 0x28
	::Struct_2_ACD0EF80A5330786 Field_1_3; // 0x38
	::Foundation::NativeVariableArray_1<::System::Single> Field_1_1; // 0xC8
	::UnityEngine::Playables::PlayableGraph Field_1_2; // 0xD8

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786 a3, ::UnityEngine::Animations::AnimationScriptPlayable a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786, ::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_5540C7F150A3CDE8(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_5540C7F150A3CDE8_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> Method_1_5540C7F150A3CDE8_1(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_5540C7F150A3CDE8_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_0E7F62FDFFA85D3E(::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A_1>> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::Struct_2_C087FD5579F90736_Struct_2_35F396C03964A94A_1>>))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_0E7F62FDFFA85D3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_EBE01B84C1D38AD1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_EBE01B84C1D38AD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_23F900E6C60F90FC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_241E681AF3D7A598_METHOD_1_23F900E6C60F90FC_OFFSET))(this, a1);
	}
};
