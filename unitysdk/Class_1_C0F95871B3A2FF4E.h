#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37333AB8708EAC23;
class Class_2_3ED3AB773B8AD4A7;
class Class_2_ACF3AD21D9602888;
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_C0F95871B3A2FF4E_METHOD_1_97A877AC71EB754B_OFFSET UNITYSDK_OFFSET(0x833B800)
#define CLASS_1_C0F95871B3A2FF4E_METHOD_1_CCD190E34B93E4C7_OFFSET UNITYSDK_OFFSET(0x833B520)
#define CLASS_1_C0F95871B3A2FF4E_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x833B790)
#define CLASS_1_C0F95871B3A2FF4E__CTOR_OFFSET UNITYSDK_OFFSET(0x833B510)

inline static constexpr unsigned int Class_1_C0F95871B3A2FF4E_TypeDefinitionIndex = 39814;

class Class_1_C0F95871B3A2FF4E : public ::System::Object
{
public:
	::Class_1_37333AB8708EAC23* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F95871B3A2FF4E__CTOR_OFFSET))(this);
	}

	::Class_2_3ED3AB773B8AD4A7* Method_1_CCD190E34B93E4C7(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::String* a4, ::System::Single a5)
	{
		return ((::Class_2_3ED3AB773B8AD4A7*(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0F95871B3A2FF4E_METHOD_1_CCD190E34B93E4C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_37333AB8708EAC23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37333AB8708EAC23*))((::PBYTE)hIl2Cpp + CLASS_1_C0F95871B3A2FF4E_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_97A877AC71EB754B(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::String* a4, ::System::Single a5, ::System::Int32 a6, ::Class_2_ACF3AD21D9602888* a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::Class_2_ACF3AD21D9602888*))((::PBYTE)hIl2Cpp + CLASS_1_C0F95871B3A2FF4E_METHOD_1_97A877AC71EB754B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
