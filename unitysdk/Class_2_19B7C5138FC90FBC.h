#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_139992A97A29D955.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define CLASS_2_19B7C5138FC90FBC_METHOD_2_EB7FA3243D343DE9_OFFSET UNITYSDK_OFFSET(0x675F2A0)
#define CLASS_2_19B7C5138FC90FBC_METHOD_2_F558A95A6A60C6E2_OFFSET UNITYSDK_OFFSET(0x675F190)
#define CLASS_2_19B7C5138FC90FBC__CTOR_OFFSET UNITYSDK_OFFSET(0x675F280)

inline static constexpr unsigned int Class_2_19B7C5138FC90FBC_TypeDefinitionIndex = 49916;

class Class_2_19B7C5138FC90FBC : public ::Class_1_139992A97A29D955<::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>, ::Struct_2_B196590B3E289741>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19B7C5138FC90FBC__CTOR_OFFSET))(this);
	}

	::Struct_2_B196590B3E289741 Method_2_F558A95A6A60C6E2(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_2_19B7C5138FC90FBC_METHOD_2_F558A95A6A60C6E2_OFFSET))(this, a1);
	}

	static ::System::Char Method_2_EB7FA3243D343DE9(::Struct_2_B196590B3E289741 a1, ::UnityEngine::UI::InputField* a2)
	{
		return ((::System::Char(*)(::Struct_2_B196590B3E289741, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CLASS_2_19B7C5138FC90FBC_METHOD_2_EB7FA3243D343DE9_OFFSET))(a1, a2);
	}
};
