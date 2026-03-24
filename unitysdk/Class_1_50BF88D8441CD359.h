#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_119;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_50BF88D8441CD359_METHOD_1_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x7AC0B70)
#define CLASS_1_50BF88D8441CD359_METHOD_1_433EC87BF5181040_OFFSET UNITYSDK_OFFSET(0x7AC0B50)
#define CLASS_1_50BF88D8441CD359_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x7AC0B60)
#define CLASS_1_50BF88D8441CD359_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x7AC0B80)
#define CLASS_1_50BF88D8441CD359_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7AC0B90)
#define CLASS_1_50BF88D8441CD359__CTOR_OFFSET UNITYSDK_OFFSET(0x7AC0B10)

inline static constexpr unsigned int Class_1_50BF88D8441CD359_TypeDefinitionIndex = 74444;

class Class_1_50BF88D8441CD359 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_119* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_208CC9941471731A_119* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_119*))((::PBYTE)hIl2Cpp + CLASS_1_50BF88D8441CD359__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_433EC87BF5181040(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_50BF88D8441CD359_METHOD_1_433EC87BF5181040_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_119* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_119*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50BF88D8441CD359_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50BF88D8441CD359_METHOD_1_038349821F206DD5_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_50BF88D8441CD359_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50BF88D8441CD359_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
