#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F06B9578B38DE645.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_386;
class Class_1_956C5F706DFDF849;
class Class_1_B2B5D28F2FE8EF9A;
class Class_1_C2F125D07BC8601B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_05CA85AC9B306448_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9C898B0)
#define CLASS_1_05CA85AC9B306448_METHOD_1_4A4EC6E29E61064D_OFFSET UNITYSDK_OFFSET(0x9C89370)
#define CLASS_1_05CA85AC9B306448_METHOD_1_703299C3DD1F5B47_OFFSET UNITYSDK_OFFSET(0x9C89970)
#define CLASS_1_05CA85AC9B306448_METHOD_1_9A4968784AE9AF3F_OFFSET UNITYSDK_OFFSET(0x9C89120)
#define CLASS_1_05CA85AC9B306448__CTOR_OFFSET UNITYSDK_OFFSET(0x9C89070)

inline static constexpr unsigned int Class_1_05CA85AC9B306448_TypeDefinitionIndex = 46466;

class Class_1_05CA85AC9B306448 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_F06B9578B38DE645>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_956C5F706DFDF849*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05CA85AC9B306448__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A4968784AE9AF3F(::Class_0_16E4307DCC419505_386* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_386*))((::PBYTE)hIl2Cpp + CLASS_1_05CA85AC9B306448_METHOD_1_9A4968784AE9AF3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A4EC6E29E61064D(::Class_1_C2F125D07BC8601B* a1, ::Class_1_B2B5D28F2FE8EF9A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2F125D07BC8601B*, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + CLASS_1_05CA85AC9B306448_METHOD_1_4A4EC6E29E61064D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05CA85AC9B306448_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_703299C3DD1F5B47(::Class_1_B2B5D28F2FE8EF9A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B2B5D28F2FE8EF9A*))((::PBYTE)hIl2Cpp + CLASS_1_05CA85AC9B306448_METHOD_1_703299C3DD1F5B47_OFFSET))(this, a1);
	}
};
