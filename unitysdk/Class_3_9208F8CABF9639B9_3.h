#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_9208F8CABF9639B9_3_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xB037190)
#define CLASS_3_9208F8CABF9639B9_3_METHOD_3_496565A3E7357507_OFFSET UNITYSDK_OFFSET(0xB037000)
#define CLASS_3_9208F8CABF9639B9_3_METHOD_3_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xB037230)
#define CLASS_3_9208F8CABF9639B9_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB0373D0)

inline static constexpr unsigned int Class_3_9208F8CABF9639B9_3_TypeDefinitionIndex = 63097;

class Class_3_9208F8CABF9639B9_3 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	::UnityEngine::RectTransform* Field_3_4; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_3_5; // 0x30
	::UnityEngine::RectTransform* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9208F8CABF9639B9_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_496565A3E7357507(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_9208F8CABF9639B9_3_METHOD_3_496565A3E7357507_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9208F8CABF9639B9_3_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9208F8CABF9639B9_3_METHOD_3_64501B5CB67A94C3_OFFSET))(this);
	}
};
