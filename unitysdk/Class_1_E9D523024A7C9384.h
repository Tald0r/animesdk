#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CC8926C75B527F8D_Class_2_1EE30F7DE42DCBDA;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E9D523024A7C9384_METHOD_1_1C559EA276B39467_OFFSET UNITYSDK_OFFSET(0x62D4640)
#define CLASS_1_E9D523024A7C9384_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x62D4730)
#define CLASS_1_E9D523024A7C9384__CTOR_OFFSET UNITYSDK_OFFSET(0x62D4630)

inline static constexpr unsigned int Class_1_E9D523024A7C9384_TypeDefinitionIndex = 57660;

class Class_1_E9D523024A7C9384 : public ::System::Object
{
public:
	::Class_2_CC8926C75B527F8D_Class_2_1EE30F7DE42DCBDA* Field_1_0; // 0x10
	::System::Action_1<::System::Int32>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9D523024A7C9384__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C559EA276B39467(::System::Int32 a1, ::Class_2_CC8926C75B527F8D_Class_2_1EE30F7DE42DCBDA* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_CC8926C75B527F8D_Class_2_1EE30F7DE42DCBDA*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_E9D523024A7C9384_METHOD_1_1C559EA276B39467_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9D523024A7C9384_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
	}
};
