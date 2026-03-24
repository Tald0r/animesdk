#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class Class_3_1C975C28117B22CA;
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_E747E44B29DEF889_METHOD_2_A47807DE87E8A800_1_OFFSET UNITYSDK_OFFSET(0x73C96D0)
#define CLASS_2_E747E44B29DEF889_METHOD_2_A47807DE87E8A800_OFFSET UNITYSDK_OFFSET(0x73C9690)
#define CLASS_2_E747E44B29DEF889_METHOD_2_BB4F9CE38883FF81_OFFSET UNITYSDK_OFFSET(0x73C93C0)
#define CLASS_2_E747E44B29DEF889_METHOD_2_D1FE51D66C7905A2_OFFSET UNITYSDK_OFFSET(0x73C9710)
#define CLASS_2_E747E44B29DEF889__CTOR_OFFSET UNITYSDK_OFFSET(0x73C9640)

inline static constexpr unsigned int Class_2_E747E44B29DEF889_TypeDefinitionIndex = 68830;

class Class_2_E747E44B29DEF889 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_3_1C975C28117B22CA* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BB4F9CE38883FF81(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_BB4F9CE38883FF81_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Events::UnityAction* Method_2_A47807DE87E8A800()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_A47807DE87E8A800_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* Method_2_A47807DE87E8A800_1()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_A47807DE87E8A800_1_OFFSET))(this);
	}

	::System::Void Method_2_D1FE51D66C7905A2(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_D1FE51D66C7905A2_OFFSET))(this, a1, a2);
	}
};
