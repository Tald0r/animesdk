#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

class Class_1_6CB0D6BA6DCFD8B7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_BC06A4732A5DFB24_METHOD_1_49886BC5369F183A_OFFSET UNITYSDK_OFFSET(0x835D9E0)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_BC06A4732A5DFB24_METHOD_1_71A43A5744957BCA_OFFSET UNITYSDK_OFFSET(0x835DAC0)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_BC06A4732A5DFB24__CTOR_OFFSET UNITYSDK_OFFSET(0x835D9D0)

inline static constexpr unsigned int Class_1_6CB0D6BA6DCFD8B7_Class_1_BC06A4732A5DFB24_TypeDefinitionIndex = 75489;

class Class_1_6CB0D6BA6DCFD8B7_Class_1_BC06A4732A5DFB24 : public ::System::Object
{
public:
	::Class_1_6CB0D6BA6DCFD8B7* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_BC06A4732A5DFB24__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_49886BC5369F183A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_BC06A4732A5DFB24_METHOD_1_49886BC5369F183A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71A43A5744957BCA(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_BC06A4732A5DFB24_METHOD_1_71A43A5744957BCA_OFFSET))(this, a1);
	}
};
