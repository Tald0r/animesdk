#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DE7552E11FB0BAEE;
namespace System { class Type; }

#define CLASS_1_DC08FA4F74036387_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xA3CCF00)
#define CLASS_1_DC08FA4F74036387__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CCE30)

inline static constexpr unsigned int Class_1_DC08FA4F74036387_TypeDefinitionIndex = 81170;

class Class_1_DC08FA4F74036387 : public ::System::Object
{
public:
	::Class_1_DE7552E11FB0BAEE* Field_1_3; // 0x10
	::System::Type* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor(::System::Type* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC08FA4F74036387__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC08FA4F74036387_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}
};
