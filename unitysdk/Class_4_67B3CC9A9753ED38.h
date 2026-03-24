#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_67B3CC9A9753ED38_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9C37C90)
#define CLASS_4_67B3CC9A9753ED38_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x9C36FA0)
#define CLASS_4_67B3CC9A9753ED38_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x9C37420)
#define CLASS_4_67B3CC9A9753ED38__CTOR_OFFSET UNITYSDK_OFFSET(0x9C37A40)

inline static constexpr unsigned int Class_4_67B3CC9A9753ED38_TypeDefinitionIndex = 47637;

class Class_4_67B3CC9A9753ED38 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_7; // 0x28
	::Class_4_179456445C225AB4<::System::Single>* Field_4_3; // 0x30
	::Class_4_179456445C225AB4<::System::Single>* Field_4_4; // 0x38
	::Class_4_179456445C225AB4<::System::Single>* Field_4_6; // 0x40
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_4_1; // 0x48
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x50
	::Class_4_179456445C225AB4<::System::String*>* Field_4_5; // 0x58
	::Class_4_179456445C225AB4<::UnityEngine::Vector3>* Field_4_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_67B3CC9A9753ED38__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_67B3CC9A9753ED38_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_67B3CC9A9753ED38_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_67B3CC9A9753ED38_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
