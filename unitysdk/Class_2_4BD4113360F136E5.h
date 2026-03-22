#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Class_2_4BD4113360F136E5_Enum_3_D5A47A9198A9EE8B.h"

namespace System { class Action; }

#define CLASS_2_4BD4113360F136E5_METHOD_2_0D91527500954A71_OFFSET UNITYSDK_OFFSET(0x79E1BC0)
#define CLASS_2_4BD4113360F136E5_METHOD_2_C7F84614C46F5039_OFFSET UNITYSDK_OFFSET(0x79E1D50)
#define CLASS_2_4BD4113360F136E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x79E1B80)
#define CLASS_2_4BD4113360F136E5__CTOR_OFFSET UNITYSDK_OFFSET(0x79E1B70)

inline static constexpr unsigned int Class_2_4BD4113360F136E5_TypeDefinitionIndex = 76063;

class Class_2_4BD4113360F136E5 : public ::Class_1_8A3658A741325FC2
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4BD4113360F136E5_TypeDefinitionIndex)->GetStaticField(0xA180);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD4113360F136E5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4BD4113360F136E5__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_0D91527500954A71(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4BD4113360F136E5_METHOD_2_0D91527500954A71_OFFSET))(this, a1);
	}

	::Class_2_4BD4113360F136E5_Enum_3_D5A47A9198A9EE8B Method_2_C7F84614C46F5039(::System::Int32 a1)
	{
		return ((::Class_2_4BD4113360F136E5_Enum_3_D5A47A9198A9EE8B(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BD4113360F136E5_METHOD_2_C7F84614C46F5039_OFFSET))(this, a1);
	}
};
