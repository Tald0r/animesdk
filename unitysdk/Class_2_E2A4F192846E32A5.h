#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_4D560901E7DD8AB0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_E2A4F192846E32A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89C3E50)
#define CLASS_2_E2A4F192846E32A5_METHOD_2_02A848310A642863_OFFSET UNITYSDK_OFFSET(0x89C4450)
#define CLASS_2_E2A4F192846E32A5_METHOD_2_9FE8229FA80E064B_OFFSET UNITYSDK_OFFSET(0x89C4360)
#define CLASS_2_E2A4F192846E32A5_METHOD_2_E1595FBBE66ADF57_OFFSET UNITYSDK_OFFSET(0x89C41C0)
#define CLASS_2_E2A4F192846E32A5_ONCREATE_OFFSET UNITYSDK_OFFSET(0x89C3DF0)
#define CLASS_2_E2A4F192846E32A5_UPDATE_OFFSET UNITYSDK_OFFSET(0x89C3EB0)
#define CLASS_2_E2A4F192846E32A5__CTOR_OFFSET UNITYSDK_OFFSET(0x89C4090)

inline static constexpr unsigned int Class_2_E2A4F192846E32A5_TypeDefinitionIndex = 64105;

class Class_2_E2A4F192846E32A5 : public ::Foundation::SingletonDisposable_1<::Class_2_E2A4F192846E32A5*>
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_4D560901E7DD8AB0*>* Field_2_2; // 0x10
	::System::Collections::Generic::Stack_1<::Class_1_4D560901E7DD8AB0*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4D560901E7DD8AB0*>* Field_2_3; // 0x20
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A4F192846E32A5__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A4F192846E32A5_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A4F192846E32A5_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E2A4F192846E32A5_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1595FBBE66ADF57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2A4F192846E32A5_METHOD_2_E1595FBBE66ADF57_OFFSET))(this);
	}

	::System::Void Method_2_9FE8229FA80E064B(::Class_1_4D560901E7DD8AB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D560901E7DD8AB0*))((::PBYTE)hIl2Cpp + CLASS_2_E2A4F192846E32A5_METHOD_2_9FE8229FA80E064B_OFFSET))(this, a1);
	}

	::Class_1_4D560901E7DD8AB0* Method_2_02A848310A642863(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_4D560901E7DD8AB0*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E2A4F192846E32A5_METHOD_2_02A848310A642863_OFFSET))(this, a1, a2);
	}
};
