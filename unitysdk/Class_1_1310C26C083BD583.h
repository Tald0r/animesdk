#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0294183E7B0E0003;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1310C26C083BD583_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9FF3220)
#define CLASS_1_1310C26C083BD583_METHOD_1_E57456F36F09A25C_OFFSET UNITYSDK_OFFSET(0x9FF32E0)
#define CLASS_1_1310C26C083BD583__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3170)

inline static constexpr unsigned int Class_1_1310C26C083BD583_TypeDefinitionIndex = 61061;

class Class_1_1310C26C083BD583 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0294183E7B0E0003*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0294183E7B0E0003*>* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1310C26C083BD583__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1310C26C083BD583_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_E57456F36F09A25C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1310C26C083BD583_METHOD_1_E57456F36F09A25C_OFFSET))(this);
	}
};
