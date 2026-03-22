#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_427879A9D6A610C9_METHOD_1_3D805701DECF2AD2_OFFSET UNITYSDK_OFFSET(0x6C90970)
#define CLASS_1_427879A9D6A610C9_METHOD_1_3EC01AB68BA16520_OFFSET UNITYSDK_OFFSET(0x6C909D0)
#define CLASS_1_427879A9D6A610C9_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x6C90A30)
#define CLASS_1_427879A9D6A610C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C908C0)
#define CLASS_1_427879A9D6A610C9__CTOR_OFFSET UNITYSDK_OFFSET(0x6C907E0)

inline static constexpr unsigned int Class_1_427879A9D6A610C9_TypeDefinitionIndex = 43930;

class Class_1_427879A9D6A610C9 : public ::System::Object
{
public:
	static ::System::Func_1<::System::Single>** StaticGet_Field_1_4()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_427879A9D6A610C9_TypeDefinitionIndex)->GetStaticField(0x33A70);
	}
	static ::UnityEngine::AnimationCurve** StaticGet_Field_1_3()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(Class_1_427879A9D6A610C9_TypeDefinitionIndex)->GetStaticField(0x33A78);
	}
	::PipelineCamera::TimeBasedAlphaGenerator* Field_1_2; // 0x10
	::System::Func_1<::System::Single>* Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor(::System::Func_1<::System::Single>* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_427879A9D6A610C9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_427879A9D6A610C9__CCTOR_OFFSET))();
	}

	::System::Func_1<::System::Single>* Method_1_3D805701DECF2AD2()
	{
		return ((::System::Func_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_427879A9D6A610C9_METHOD_1_3D805701DECF2AD2_OFFSET))(this);
	}

	::PipelineCamera::TimeBasedAlphaGenerator* Method_1_3EC01AB68BA16520()
	{
		return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_427879A9D6A610C9_METHOD_1_3EC01AB68BA16520_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_427879A9D6A610C9_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
