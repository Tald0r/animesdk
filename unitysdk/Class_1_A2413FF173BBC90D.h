#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityRunState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_A2413FF173BBC90D_METHOD_1_7401696EE5DFB315_OFFSET UNITYSDK_OFFSET(0x8260D10)
#define CLASS_1_A2413FF173BBC90D_METHOD_1_F40AF41B962D2981_OFFSET UNITYSDK_OFFSET(0x8260F00)
#define CLASS_1_A2413FF173BBC90D__CTOR_OFFSET UNITYSDK_OFFSET(0x8260D00)

inline static constexpr unsigned int Class_1_A2413FF173BBC90D_TypeDefinitionIndex = 57258;

class Class_1_A2413FF173BBC90D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::UnityEngine::AnimationCurve* Field_1_2; // 0x18
	::UnityEngine::AnimationCurve* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x28
	::System::Single Field_1_3; // 0x30
	::System::Single Field_1_1; // 0x34
	::System::Single Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2413FF173BBC90D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7401696EE5DFB315(::MoleMole::Config::ConfigEntityRunState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunState*))((::PBYTE)hIl2Cpp + CLASS_1_A2413FF173BBC90D_METHOD_1_7401696EE5DFB315_OFFSET))(this, a1);
	}

	::System::Void Method_1_F40AF41B962D2981(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2413FF173BBC90D_METHOD_1_F40AF41B962D2981_OFFSET))(this, a1);
	}
};
