#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x1815C160)
#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x1815C180)
#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1815C170)
#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1815C150)

inline static constexpr unsigned int Class_1_58CC049A521AA977_Class_1_63CF7747B57AA9BF_TypeDefinitionIndex = 56953;

class Class_1_58CC049A521AA977_Class_1_63CF7747B57AA9BF : public ::System::Object
{
public:
	::Struct_2_49ABC235CB23B56F Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::Double>* Field_1_2; // 0x28
	::System::Double Field_1_3; // 0x30
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_B6A3FA7992F9F37E_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B6A3FA7992F9F37E_2))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
