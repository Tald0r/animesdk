#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89;
class Class_1_DE7552E11FB0BAEE_Class_1_83F46BE3CB1C67A9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0xD3FD0B0)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xD3FD1D0)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xD3FD270)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD3FD110)
#define CLASS_1_DE7552E11FB0BAEE_METHOD_1_AB7CD9584B185383_OFFSET UNITYSDK_OFFSET(0xD3FD300)
#define CLASS_1_DE7552E11FB0BAEE__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FD020)

inline static constexpr unsigned int Class_1_DE7552E11FB0BAEE_TypeDefinitionIndex = 67161;

class Class_1_DE7552E11FB0BAEE : public ::System::Object
{
public:
	::Class_1_DE7552E11FB0BAEE_Class_1_83F46BE3CB1C67A9* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89*>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DE7552E11FB0BAEE_Class_1_0A41E43F17FA5E89*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_AB7CD9584B185383(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_AB7CD9584B185383_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE7552E11FB0BAEE_METHOD_1_755870B55A8B3AFF_OFFSET))(this);
	}
};
