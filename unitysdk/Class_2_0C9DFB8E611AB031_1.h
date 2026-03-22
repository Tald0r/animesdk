#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1188.h"

class Class_2_208CC9941471731A_1030;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0C9DFB8E611AB031_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x191F20C0)
#define CLASS_2_0C9DFB8E611AB031_1_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x191F21B0)
#define CLASS_2_0C9DFB8E611AB031_1_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x191F1D50)
#define CLASS_2_0C9DFB8E611AB031_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x191F1C30)
#define CLASS_2_0C9DFB8E611AB031_1__CTOR_OFFSET UNITYSDK_OFFSET(0x191F1C70)

inline static constexpr unsigned int Class_2_0C9DFB8E611AB031_1_TypeDefinitionIndex = 79947;

class Class_2_0C9DFB8E611AB031_1 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1030*>* Field_2_2; // 0x18
	::Struct_2_1862835F8661A21F_1188 Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1030*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_1_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1030* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1030*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_1_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_1_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
