#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_9.h"
#include "unitysdk/Class_2_104EA16A1BE40F83_Struct_2_413C98E7F0821DC8_1.h"

class Class_2_D89CCC627A66D0AD;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_104EA16A1BE40F83_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x9B73F70)
#define CLASS_2_104EA16A1BE40F83_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x9B73F20)
#define CLASS_2_104EA16A1BE40F83_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x9B73F60)
#define CLASS_2_104EA16A1BE40F83_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x9B73F30)
#define CLASS_2_104EA16A1BE40F83_METHOD_2_CAB36BFDB56A910A_OFFSET UNITYSDK_OFFSET(0x9B73F80)
#define CLASS_2_104EA16A1BE40F83_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x9B73F40)
#define CLASS_2_104EA16A1BE40F83__CTOR_OFFSET UNITYSDK_OFFSET(0x9B73EB0)

inline static constexpr unsigned int Class_2_104EA16A1BE40F83_TypeDefinitionIndex = 55156;

class Class_2_104EA16A1BE40F83 : public ::Class_1_83665B095F1535B5_9
{
public:
	::System::Collections::Generic::List_1<::Class_2_104EA16A1BE40F83_Struct_2_413C98E7F0821DC8_1>* Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_104EA16A1BE40F83__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_104EA16A1BE40F83_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_104EA16A1BE40F83_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_104EA16A1BE40F83_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_104EA16A1BE40F83_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_104EA16A1BE40F83_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CAB36BFDB56A910A(::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_104EA16A1BE40F83_METHOD_2_CAB36BFDB56A910A_OFFSET))(this, a1, a2);
	}
};
