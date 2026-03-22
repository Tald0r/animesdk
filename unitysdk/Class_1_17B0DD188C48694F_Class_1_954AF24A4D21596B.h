#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_17B0DD188C48694F_CLASS_1_954AF24A4D21596B__CTOR_OFFSET UNITYSDK_OFFSET(0xA965730)

inline static constexpr unsigned int Class_1_17B0DD188C48694F_Class_1_954AF24A4D21596B_TypeDefinitionIndex = 56879;

class Class_1_17B0DD188C48694F_Class_1_954AF24A4D21596B : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Int32 Field_1_0; // 0x28
	::System::Int32 Field_1_3; // 0x2C

	::System::Void _ctor(::System::Int32 a1, ::System::Tuple_2<::System::Int32, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Tuple_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_CLASS_1_954AF24A4D21596B__CTOR_OFFSET))(this, a1, a2);
	}
};
