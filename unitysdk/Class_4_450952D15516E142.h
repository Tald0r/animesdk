#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_450952D15516E142_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB5AE6E0)
#define CLASS_4_450952D15516E142_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB5AEDC0)
#define CLASS_4_450952D15516E142_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0xB5AE8D0)
#define CLASS_4_450952D15516E142__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AEC90)

inline static constexpr unsigned int Class_4_450952D15516E142_TypeDefinitionIndex = 68440;

class Class_4_450952D15516E142 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_450952D15516E142__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_450952D15516E142_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_F637E7BBB4A3229E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_450952D15516E142_METHOD_4_F637E7BBB4A3229E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_450952D15516E142_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
