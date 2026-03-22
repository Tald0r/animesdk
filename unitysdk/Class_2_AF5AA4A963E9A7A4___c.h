#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Method_CameraLogCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }

#define CLASS_2_AF5AA4A963E9A7A4___C_METHOD_1_C181CC385FA98FC7_OFFSET UNITYSDK_OFFSET(0xE6F12D0)
#define CLASS_2_AF5AA4A963E9A7A4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE6F1280)
#define CLASS_2_AF5AA4A963E9A7A4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE6F12C0)

inline static constexpr unsigned int Class_2_AF5AA4A963E9A7A4___c_TypeDefinitionIndex = 52909;

class Class_2_AF5AA4A963E9A7A4___c : public ::System::Object
{
public:
	static ::System::Action_5<::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>** StaticGet___9__26_0()
	{
		return (::System::Action_5<::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF5AA4A963E9A7A4___c_TypeDefinitionIndex)->GetStaticField(0x40BC0);
	}
	static ::Class_2_AF5AA4A963E9A7A4___c** StaticGet___9()
	{
		return (::Class_2_AF5AA4A963E9A7A4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF5AA4A963E9A7A4___c_TypeDefinitionIndex)->GetStaticField(0x40BC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AF5AA4A963E9A7A4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5AA4A963E9A7A4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C181CC385FA98FC7(::PipelineCamera::Method_CameraLogCategory a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Color a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::Method_CameraLogCategory, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF5AA4A963E9A7A4___C_METHOD_1_C181CC385FA98FC7_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
