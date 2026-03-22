#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define STRUCT_2_82892336BD7BD369_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x315950)
#define STRUCT_2_82892336BD7BD369_METHOD_2_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x315AB0)
#define STRUCT_2_82892336BD7BD369_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x2D6790)
#define STRUCT_2_82892336BD7BD369_METHOD_2_F213163B5813F4D5_OFFSET UNITYSDK_OFFSET(0x315A00)
#define STRUCT_2_82892336BD7BD369__CCTOR_OFFSET UNITYSDK_OFFSET(0x6E606A0)
#define STRUCT_2_82892336BD7BD369__CTOR_OFFSET UNITYSDK_OFFSET(0x315930)

inline static constexpr unsigned int Struct_2_82892336BD7BD369_TypeDefinitionIndex = 47320;

struct alignas(8) Struct_2_82892336BD7BD369
{
	static ::Struct_2_82892336BD7BD369* StaticGet_Field_2_3()
	{
		return (::Struct_2_82892336BD7BD369*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_82892336BD7BD369_TypeDefinitionIndex)->GetStaticField(0xB0B0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_F213163B5813F4D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_F213163B5813F4D5_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_1A425C083DDF2BB1_OFFSET))(this, a1);
	}
};
