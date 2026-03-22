#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x365AC0)
#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_5074924A86FDBFFE_OFFSET UNITYSDK_OFFSET(0x365C20)
#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x365B70)
#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x2D6790)
#define STRUCT_2_793645F2F9C6AFE4__CCTOR_OFFSET UNITYSDK_OFFSET(0x966E730)
#define STRUCT_2_793645F2F9C6AFE4__CTOR_OFFSET UNITYSDK_OFFSET(0x365AA0)

inline static constexpr unsigned int Struct_2_793645F2F9C6AFE4_TypeDefinitionIndex = 48171;

struct alignas(8) Struct_2_793645F2F9C6AFE4
{
	static ::Struct_2_793645F2F9C6AFE4* StaticGet_Field_2_3()
	{
		return (::Struct_2_793645F2F9C6AFE4*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_793645F2F9C6AFE4_TypeDefinitionIndex)->GetStaticField(0xE6D0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5074924A86FDBFFE(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_5074924A86FDBFFE_OFFSET))(this, a1);
	}
};
